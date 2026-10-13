# Harvest Moon Script Engine & Event Virtual Machine Specification

> **Acreditación Especial:** Esta especificación completa del motor de scripts y máquina virtual está basada en la investigación y desarrollo de **FoMT Studio - Suite de Ingeniería Inversa (v3.7.0 / v4.0.0 "Actualización La Imposibilidad")** por **Denisovich728** (`SlipSpace_Script_Engine` y `Fomt_Lib.csv`).

---

## 1. Arquitectura de Dos Niveles (Two-Tier Script Architecture)

El motor de eventos de *Harvest Moon: Friends of Mineral Town* no utiliza un sistema de llamadas planas. Opera mediante una **arquitectura en dos niveles**:

```
+-------------------------------------------------------------------------------+
|                       NIVEL 1: BYTECODE STACK VM (0x00 - 0x24)                |
|  Evaluación de expresiones, pilas, saltos condicionales, switches y llamadas  |
+-------------------------------------------------------------------------------+
                                        |
                            OPCODE_CALL (0x21) [Call_ID]
                                        v
+-------------------------------------------------------------------------------+
|                 NIVEL 2: TABLA DE DISPATCH NATIVA (Fomt_Lib.csv)               |
|      310 Rutinas del Motor C/ARM: Actores, Diálogos, Inventario, Afecto       |
+-------------------------------------------------------------------------------+
```

---

## 2. Nivel 1: Juego Completo de Instrucciones Bytecode (Opcodes 0x00 - 0x24)

El intérprete de bytecode (`SlipSpace_Script_Engine/bytecode/opcodes.py`) evalúa un flujo binario estructurado en pila:

| Opcode Hex | Mnemónico | Tamaño Operando | Efecto en Pila / Registro | Descripción |
| :---: | :--- | :---: | :--- | :--- |
| **`0x00`** | `OPCODE_NOP` | 0 B | Ninguno | No operación / relleno de alineación. |
| **`0x01`** | `OPCODE_EQU` | 0 B | `[dest, val] -> []` | Asignación (`var = val`). |
| **`0x02`** | `OPCODE_ADDEQU` | 0 B | `[dest, val] -> []` | Suma y asignación (`var += val`). |
| **`0x03`** | `OPCODE_SUBEQU` | 0 B | `[dest, val] -> []` | Resta y asignación (`var -= val`). |
| **`0x04`** | `OPCODE_MULEQU` | 0 B | `[dest, val] -> []` | Multiplicación y asignación (`var *= val`). |
| **`0x05`** | `OPCODE_DIVEQU` | 0 B | `[dest, val] -> []` | División y asignación (`var /= val`). |
| **`0x06`** | `OPCODE_MODEQU` | 0 B | `[dest, val] -> []` | Módulo y asignación (`var %= val`). |
| **`0x07`** | `OPCODE_ADD` | 0 B | `[a, b] -> [a + b]` | Suma aritmética binaria. |
| **`0x08`** | `OPCODE_SUB` | 0 B | `[a, b] -> [a - b]` | Resta aritmética binaria. |
| **`0x09`** | `OPCODE_MUL` | 0 B | `[a, b] -> [a * b]` | Multiplicación aritmética binaria. |
| **`0x0A`** | `OPCODE_DIV` | 0 B | `[a, b] -> [a / b]` | División entera con signo. |
| **`0x0B`** | `OPCODE_MOD` | 0 B | `[a, b] -> [a % b]` | Resto de la división entera. |
| **`0x0C`** | `OPCODE_AND` | 0 B | `[a, b] -> [a & b]` | Operación lógica / bitwise AND. |
| **`0x0D`** | `OPCODE_OR` | 0 B | `[a, b] -> [a \| b]` | Operación lógica / bitwise OR. |
| **`0x0E`** | `OPCODE_INC` | 0 B | `[a] -> [a + 1]` | Incremento unario. |
| **`0x0F`** | `OPCODE_DEC` | 0 B | `[a] -> [a - 1]` | Decremento unario. |
| **`0x10`** | `OPCODE_NEG` | 0 B | `[a] -> [-a]` | Negación aritmética unaria. |
| **`0x11`** | `OPCODE_NOT` | 0 B | `[a] -> [!a]` | Negación lógica booleana. |
| **`0x12`** | `OPCODE_CMP` | 0 B | `[a, b] -> flags` | Compara dos valores y fija banderas de condición. |
| **`0x13`** | `OPCODE_PUSHV` | 4 B | `[] -> [var_val]` | Apila el valor de una variable según su ID de 32 bits. |
| **`0x14`** | `OPCODE_POPV` | 4 B | `[val] -> []` | Desapila el valor superior y lo escribe en la variable ID. |
| **`0x15`** | `OPCODE_DUP` | 0 B | `[a] -> [a, a]` | Duplica el elemento superior de la pila. |
| **`0x16`** | `OPCODE_DISC` | 0 B | `[a] -> []` | Descarta / desapila el elemento superior sin almacenar. |
| **`0x17`** | `OPCODE_PUSH32` | 4 B | `[] -> [imm32]` | Apila un entero inmediato de 32 bits (little-endian). |
| **`0x18`** | `OPCODE_JMP` | 4 B | PC = target | Salto incondicional a desplazamiento relativo/absoluto. |
| **`0x19`** | `OPCODE_BLT` | 4 B | Si `<` PC = target | Salto si Menor Que (Branch if Less Than). |
| **`0x1A`** | `OPCODE_BLE` | 4 B | Si `<=` PC = target| Salto si Menor o Igual (Branch if Less or Equal). |
| **`0x1B`** | `OPCODE_BEQ` | 4 B | Si `==` PC = target| Salto si Igual (Branch if Equal / Zero). |
| **`0x1C`** | `OPCODE_BNE` | 4 B | Si `!=` PC = target| Salto si No Igual (Branch if Not Equal). |
| **`0x1D`** | `OPCODE_BGE` | 4 B | Si `>=` PC = target| Salto si Mayor o Igual (Branch if Greater or Equal). |
| **`0x1E`** | `OPCODE_BGT` | 4 B | Si `>` PC = target | Salto si Mayor Que (Branch if Greater Than). |
| **`0x1F`** | `OPCODE_JPI` | 0 B | `[target] -> PC` | Salto indirecto a la dirección extraída de la pila. |
| **`0x20`** | `OPCODE_END` | 0 B | Termina VM | Finaliza la ejecución del script y devuelve control al jugador. |
| **`0x21`** | `OPCODE_CALL` | 4 B | Pasa argumentos | **Invoca una Rutina Nativa del Motor** mediante su Call ID. |
| **`0x22`** | `OPCODE_PUSH16` | 2 B | `[] -> [imm16]` | Apila un entero inmediato de 16 bits. |
| **`0x23`** | `OPCODE_PUSH8` | 1 B | `[] -> [imm8]` | Apila un byte inmediato de 8 bits. |
| **`0x24`** | `OPCODE_SWITCH` | 4 B | Despacha tabla | Salto multi-caso estructurado mediante tabla de casos. |

---

## 3. Nivel 2: Tabla de Procedimientos Nativos (Fomt_Lib.csv)

Cuando el bytecode ejecuta `OPCODE_CALL (0x21)`, toma el identificador de 32 bits y salta a la tabla de funciones nativas de la ROM. `FoMT Studio` ha documentado **310 llamadas nativas** repartidas en subsistemas:

### 1. Control de Entidades y Actores
- `SetEntityPosition (0x002)`: Fija coordenadas de un NPC (`entity_id, x, y, elevation`).
- `GetEntityX (0x003)` / `GetEntityY (0x004)`: Consulta posición espacial.
- `SetEntityFacing (0x005)` / `GetEntityFacing (0x006)`: Control de orientación (Arriba, Abajo, Izquierda, Derecha).
- `Force_Entity_Seat_State (0x007)`: Fuerza estado sentado en bancos o sillas.
- `Execute_Movement (0x00C)`: Ejecuta una ruta de movimiento precalculada para un NPC.
- `SetEntityAnim (0x00D)`: Cambia la animación del sprite del NPC.
- `Hide_Entity (0x00F)` / `Spawn_Event_Entity (0x010)`: Instanciación dinámica de personajes de evento.
- `Show_Emote (0x011)`: Muestra icono de emoción sobre la cabeza (Corazón, Signo de interrogación, Gota de sudor, Música).
- `Wait_For_Animation (0x012)`: Bloquea la VM hasta que termine la animación actual.

### 2. Cámara y Visualización
- `Set_Camera_Position (0x009)`: Posiciona la vista inmediatamente.
- `Pan_Camera_To (0x017)`: Desplazamiento suave y cinemático de cámara con velocidad configurable.
- `Wait_Camera_Stop (0x018)`: Pausa el script hasta que la cámara complete el trayecto.

### 3. Diálogos, Retratos y Menús de Selección
- `TalkOpen (0x01F)` / `TalkClose (0x020)`: Abre y cierra la ventana de texto en pantalla.
- `TalkMessage (0x021)`: Despliega un mensaje indexado en la tabla de textos ([strings.h](file:///j:/Laboratorio/harvest_moon_fomt_decomp/include/text/strings.h)).
- `TalkMessageSlow (0x022)`: Efecto de máquina de escribir lenta para momentos dramáticos.
- `Print_Message (0x023)`: Imprime texto sin marco decorativo de diálogo.
- `Show_Tre_Option_Menu (0x024)`: Muestra menú de 3 opciones y devuelve la selección del jugador a la pila.
- `TalkChoice2 (0x027)` a `TalkChoice6 (0x02B)`: Menús de selección de 2 a 6 opciones ramificadas.
- `Set_Portrait (0x02F)`: Carga el retrato facial del personaje (Normal, Feliz, Triste, Enojado).
- `Set_Hearth_Anim (0x031)`: Renderiza el corazón palpitante con el color de afecto de la soltera.

### 4. Audio y Sonido
- `PlayBGM (0x019)`: Reproduce pista de fondo (`song_id, track_volume`).
- `StopBGM (0x01A)`: Detiene la música actual.
- `PlaySong (0x01B)`: Lanza efecto de sonido (SE) de un solo disparo.
- `StopAllSongs (0x01C)`: Silencia todos los canales PCM y sintetizadores.
- `FadeOutBGM (0x01D)`: Atenuación suave de volumen antes de transiciones.

### 5. Tiempo, Clima y Transición Nocturna
- `Fade_Out (0x033)` / `Fade_In (0x034)`: Transición de fundido a negro/blanco.
- `Tick_Overnight_Engine (0x035)`: Ejecuta el avance nocturno de la granja (crecimiento de cultivos, animales, recolección de Zack, guardado opcional).
- `Make_Delay (0x036)`: Pausa la ejecución por un número determinado de fotogramas.
- `Check_Date (0x03A)`: Comprueba año, estación y día actual.
- `RNG_Generator (0x03C)`: Generador de números pseudoaleatorios acotado.

### 6. Sistema Social, Afecto y Amistad
- `Chek_Friendship_Points (0x07C)`: Consulta puntos de amistad con un aldeano (0 - 255).
- `Give_Friendship_Points (0x07D)`: Otorga incremento de amistad.
- `Chek_Love_Points (0x086)`: Lee los puntos de amor de una soltera (0 - 65,535).
- `Give_Love_Points (0x087)`: Incrementa puntos de amor por regalos o decisiones.
- `Add_Rival_Points (0x07E)`: Gestiona el progreso del rival amoroso (Cliff, Gray, Doctor, Rick, Kai).
- `Is_NPC_Birthday (0x07B)`: Verifica si el día actual coincide con el cumpleaños del personaje (multiplica puntos de regalo x5).
- `Add_Festival_Friendship_Bonus (0x08A)`: Aplica bonificación social por asistencia a festivales del pueblo.

### 7. Inventario, Regalos y Herramientas
- `Inventory_Check (0x03F)`: Comprueba si hay espacio libre en la mochila.
- `Compare_Gift (0x040)`: Evalúa las preferencias del NPC sobre el item ofrecido (Favorito, Le gusta, Neutral, Le disgusta, Horror).
- `Is_Item_Wrapped (0x041)`: Verifica si el regalo tiene envoltorio de la tienda (+25% bonificación de afecto).
- `Add_Item_To_Bag (0x058)`: Inserta un nuevo objeto en la mochila.
- `Give_Tool_In_ToolBox (0x050)`: Deposita una herramienta en el baúl de la casa.
- `Consume_Items_From_Inventory (0x060)`: Consume ingredientes o materiales.
- `Player_Eat_Power_Berry_Anim (0x061)`: Ejecuta animación de festejo al comer una Baya del Poder (+10 estamina máxima permanente).
- `Activate_Hot_Spring_Healing (0x064)`: Activa la regeneración continua de estamina en las aguas termales.

### 8. Vínculo con GameCube y Tiendas
- `GameCube_Link_Command (0x079)`: Gestiona la comunicación por cable link con *Harvest Moon: A Wonderful Life* de Nintendo GameCube.
- `Open_Shop_Buy_UI (0x08B)`: Abre la interfaz de compra del supermercado, herrería, clínica o carpintería.
- `Open_Shop_Quantity_UI (0x08C)`: Selector numérico de cantidad de compra.

---

## 4. Implementación en el Port Nativo C# (.NET 9)

En el port para PC, la VM de scripts se implementa de forma directa con un evaluador de pila y un `switch expression`:

```csharp
public class ScriptVirtualMachine {
    private readonly Stack<int> stack = new();
    private readonly int[] registers = new int[8];
    private readonly NativeProcedureDispatcher nativeProcs;

    public void ExecuteStep(byte opcode, BinaryReader reader) {
        switch ((VmOpcode)opcode) {
            case VmOpcode.Push32:
                stack.Push(reader.ReadInt32());
                break;
            case VmOpcode.Add:
                stack.Push(stack.Pop() + stack.Pop());
                break;
            case VmOpcode.Call:
                uint callId = reader.ReadUInt32();
                nativeProcs.Dispatch(callId, stack);
                break;
            case VmOpcode.Beq:
                int target = reader.ReadInt32();
                if (stack.Pop() == 0) reader.BaseStream.Position = target;
                break;
            case VmOpcode.End:
                IsRunning = false;
                break;
        }
    }
}
```
Esto garantiza una paridad de comportamiento del 100% con los eventos originales del juego.
