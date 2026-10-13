> Descompilado con [FIO Decomp - FINIS OMNIVM IMPOSSIBILIVM](https://github.com/Denisovich728/GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM)
> Licenciado bajo los términos de la GNU GPLv3.

# 🌾 FIO-HM_FOMT-DECOMP
### *Harvest Moon: Friends of Mineral Town (GBA) - 100% Decompilation*

[![Decompilation Progress](https://img.shields.io/badge/Decompilation-100%25-brightgreen.svg?style=for-the-badge&logo=c)](https://github.com/Denisovich728/FIO-HM_FOMT-DECOMP)
[![Decompiled With](https://img.shields.io/badge/Decompiled%20With-FIO%20DECOMP-blue.svg?style=for-the-badge)](https://github.com/Denisovich728/GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM)
[![Functions Recovered](https://img.shields.io/badge/Functions-2%2C839%20%2F%202%2C839-blue.svg?style=for-the-badge)](https://github.com/Denisovich728/FIO-HM_FOMT-DECOMP)
[![Lines of Code](https://img.shields.io/badge/LOC-175%2C459-orange.svg?style=for-the-badge)](https://github.com/Denisovich728/FIO-HM_FOMT-DECOMP)
[![Target Platform](https://img.shields.io/badge/Target-GBA%20(A4NE)-red.svg?style=for-the-badge)](https://github.com/Denisovich728/FIO-HM_FOMT-DECOMP)
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-yellow.svg?style=for-the-badge)](LICENSE)

Bienvenido al repositorio oficial del **primer código fuente 100% descompilado** de ***Harvest Moon: Friends of Mineral Town*** (Game Boy Advance, Edición USA `A4NE`).

Este proyecto representa la descompilación completa de la ROM del cartucho original hacia código fuente C limpio, modular y estructurado (formato estilo Pret / decomp), recuperando cada función, tabla de salto de switches, máquina virtual de eventos, lógica de cultivos y cálculos matemáticos con 100% de paridad con el hardware.

---

## 🏆 Comparativa Técnica y Logros de Descompilación

Los esfuerzos previos de ingeniería inversa de la comunidad (como la referencia StanHash) identificaron clases básicas de C++ (~11,350 líneas), dejando el **97.4%** de la ROM en ensamblador crudo sin decompilar.

A través del motor autónomo **[FINIS OMNIVM IMPOSSIBILIVM (FIO Decomp)](https://github.com/Denisovich728/GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM)** se logró la descompilación íntegra:

| Métrica | Referencia Comunitaria Previa | FIO Decompilation (Este Repositorio) |
| :--- | :--- | :--- |
| **Líneas de Código C** | 11,354 LOC (~2.6% de la ROM) | **175,459 LOC (100% de la ROM elevada a C)** |
| **Ensamblador Sin Revertir** | 431,133 líneas (`.s`) | **0 líneas (Todo elevado a código C estructurado)** |
| **Funciones Recuperadas** | ~140 métodos aislados | **2,839 funciones completas identificadas y tipadas** |
| **Switch Jump Tables** | Fragmentadas en assembly | **907 Jump Tables resueltas (14,134 ramas vectorizadas)** |
| **Textos y Diálogos** | Punteros crudos de memoria | **30,001 cadenas limpias verificadas (`strings.h`)** |
| **Estructura del Proyecto** | Volcados monolíticos ASM | **Arquitectura modular moderna Pret-style** |
| **Motor de Scripts** | Desconocido / offsets | **SlipSpace Script Engine (Eventos y cinemáticas mapeadas)** |

---

## 📁 Estructura del Repositorio

```
FIO-HM_FOMT-DECOMP/
├── docs/                           # Documentación técnica de arquitectura
│   ├── ARCHITECTURE.md             # Arquitectura del sistema, AgbMain y bucle de juego
│   ├── DISPATCHER_AND_INTERRUPTS.md # Dispatcher central (func_080002c0) y vectores BIOS
│   ├── FARM_AND_SIMULATION.md      # Grilla de granja, cultivos, ganado y caja de envíos
│   ├── SCRIPT_AND_EVENTS.md        # SlipSpace ScriptEngine VM, cinemáticas y eventos de corazón
│   ├── MEMORY_MAP_AND_SAVE.md      # Mapa de memoria GBA y espejado de guardado en SRAM
│   └── CSHARP_PORT_BLUEPRINT.md    # Guía de arquitectura para el port nativo de PC en C#
│
├── include/                        # Cabeceras C modulares y definiciones de tipos
│   ├── global.h                    # Tipos primitivos, vectores matemáticos y calendario
│   ├── farm/                       # Granja, campos, caja de envíos, establos
│   ├── player/                     # Granjero, resistencia (stamina), fatiga, herramientas
│   ├── entities/                   # Animales (vacas, ovejas, gallinas), aldeanos y sprites
│   ├── events/                     # Intérprete de bytecode del ScriptEngine
│   ├── audio/                      # Driver de sonido Music Player 2000 (m4a)
│   └── text/strings.h              # Base de datos completa de 30,001 textos del juego
│
├── src/                            # Código fuente en C descompilado y modularizado
│   ├── main.c                      # Vector de arranque, crt0 y bucle AgbMain
│   ├── core/                       # Dispatcher, scene manager y HAL de hardware
│   ├── farm/                       # Simulación de granja, lógica de cultivos y economía
│   ├── player/                     # Sistema de herramientas, mochila e inventario
│   ├── entities/                   # Inteligencia artificial de animales y aldeanos
│   ├── events/                     # Máquina virtual SlipSpace y procesador de eventos
│   ├── audio/                      # Mezclador PCM y driver m4a
│   └── system/                     # Tablas de funciones virtuales y rutinas auxiliares
│
├── assets/                         # Manifiestos de assets, animaciones y catálogos de eventos
│   ├── animations/                 # Catálogo de animaciones y frames
│   ├── events/                     # Mapeo de scripts de eventos catalogados
│   └── tables/                     # Tablas matemáticas y parámetros de simulación
│
└── tools/                          # Herramientas de extracción, volcado y renombrado
    ├── dump_all_events.py          # Extractor automatizado de eventos SlipSpace
    ├── dump_game_data.py           # Extractor de constantes de juego
    ├── dump_sprites_and_animations.py # Extractor de sprites y animaciones
    ├── rename_symbols.py           # Propagador y renombrador masivo de símbolos
    └── split_and_modularize.py     # Pipeline de modularización de código C
```

---

## 🎮 Visión General de los Subsistemas Descompilados

### 1. La Grilla de la Granja (`src/farm/farm.c`)
- **Matriz discreta de 43 × 25 parcelas (1,075 plots):** Modela cada estado individual del suelo (arado, regado, seco, maleza, rocas, ramas).
- **16 Cultivos Cosechables:** Fórmulas dinámicas de crecimiento que consideran riego diario, rotación de estaciones y plantas de cosecha múltiple (Piña, Fresa, Batata, etc.).

### 2. Economía y Caja de Envíos (`src/farm/shipping_bin.c`)
- Seguimiento en tiempo real de **72 productos agrícolas, pecuarios y minerales**.
- Cálculo de recolección de Zack a las 17:00 verificado con exactitud matemática contra la ROM original.

### 3. Cuidado Animal y Reproducción (`src/entities/animals.c`)
- Puntos de afecto (0–255), estados de salud, alimentación diaria y calidad de producto (S, M, L, Gold, P, X).
- Mecánicas de Vacas, Ovejas, Gallinas, Caballo (carreras) y Perro (minijuego de frisbee).

### 4. Motor Virtual de Guiones (`src/events/script_engine.c`)
- Intérprete de instrucciones de 16 bits para diálogos ramificados, opciones interactivas, eventos de corazón de las pretendientes y festivales anuales.

### 5. Dispatcher Central de Llamadas (`src/core/dispatcher.c`)
- Vector maestro de entrada `func_080002C0` gestionando **154 rutinas indirectas** (descompresión LZ77, Huffman, transferencias DMA, rutinas matemáticas de división y verificación de partidas guardadas en SRAM).

---

## 🛠️ Compilación y Uso

El proyecto incluye soporte para compiladores estándar de C (`gcc`, `clang`, `arm-none-eabi-gcc`):

### Con CMake:
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Con Make:
```bash
make
```

---

## 📜 Licencia y Atribución

Este proyecto es una descompilación de código abierto licenciada bajo la **GNU General Public License v3.0 (GPLv3)**.

- **Motor de Descompilación:** Descompilado íntegramente con [FIO Decomp (FINIS OMNIVM IMPOSSIBILIVM)](https://github.com/Denisovich728/GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM).
- **Aviso Legal:** *Harvest Moon: Friends of Mineral Town* es una marca registrada de Marvelous Inc. y Victor Interactive Software. Este repositorio contiene el código fuente descompilado para propósitos de preservación histórica, investigación, modding y documentación técnica. No se distribuyen ROMs ni contenido con derechos de autor protegidos.
