# The Central Dispatcher & GBA Interrupt Architecture

## 1. Overview of `func_080002C0` (The Central Dispatcher)

In *Harvest Moon: Friends of Mineral Town*, all critical low-level cartridge services, software interrupts, compression algorithms, and save memory transfers are routed through a single entry point: **`func_080002C0`**.

Located at `0x080002C0` in the GBA ROM space, this routine acts as an indirect vector table dispatcher with **154 registered service routines**.

```
ROM:080002C0  Dispatcher_HandleCall:
ROM:080002C0      cmp   r0, #0x9A             ; 154 handlers maximum (0x00 to 0x99)
ROM:080002C2      bhi   .L_InvalidCall
ROM:080002C4      ldr   r1, =gDispatcherJumpTable
ROM:080002C6      lsls  r0, r0, #2
ROM:080002C8      ldr   r2, [r1, r0]          ; Load destination routine pointer
ROM:080002CA      bx    r2                    ; Jump directly to service handler
```

---

## 2. Dispatcher Service Categories

The 154 handlers are partitioned into 6 fundamental hardware/software categories:

### 1. BIOS Compression & Math Proxies (`Index 0x00 - 0x1F`)
- **`Handler 0x01` (SWI 0x11 - LZ77UnCompWram):** Decompresses 8-bit LZ77 tilemaps and sprite sheets into EWRAM/IWRAM.
- **`Handler 0x02` (SWI 0x12 - LZ77UnCompVram):** Streams 16-bit word-aligned graphic chunks directly into GBA VRAM (`0x06000000`).
- **`Handler 0x03` (SWI 0x13 - HuffUnComp):** Decompresses text dialogue strings and event scripts encoded with 4-bit/8-bit Huffman trees.
- **`Handler 0x04` (SWI 0x14 - RLUnCompWram):** Run-Length decompressor for uniform map backgrounds.
- **`Handler 0x08` (SWI 0x06 - Div / DivArm):** 32-bit signed integer division and modulus routines used by the economic calculator.

### 2. SRAM & Flash Save Backup Services (`Index 0x20 - 0x3F`)
- **`Handler 0x20` (`SramProxy_ReadSaveData`):** Copies save data blocks from GBA SRAM chip (`0x0E000000`) to internal EWRAM buffers.
- **`Handler 0x24` (`SramProxy_WriteSaveData`):** Flushes modified diary save records to SRAM with 8-bit waitstate throttling.
- **`Handler 0x28` (`SramProxy_VerifyChecksum`):** Computes the 16-bit cyclic parity sum across the 0x2000-byte save chunk.
- **`Handler 0x2C` (`SramProxy_GetActiveSlot`):** Evaluates whether Diary 1 or Diary 2 contains the most recent valid timestamp.

### 3. DMA & Graphics Memory Transfers (`Index 0x40 - 0x5F`)
- **`Handler 0x40` (DMA3 Fast Copy):** Configures `REG_DMA3SAD`, `REG_DMA3DAD`, and `REG_DMA3CNT` with `0x84000000` (32-bit word transfer with immediate trigger).
- **`Handler 0x44` (OAM Shadow Sync):** Copies the 128 hardware sprite descriptors (8 bytes each, 1024 bytes total) from EWRAM to `0x07000000`.
- **`Handler 0x48` (Palette Color Shift):** Implements smooth fade-in and fade-out effects between indoor and outdoor locations.

### 4. Timer & Calendar Clock Driver (`Index 0x60 - 0x7F`)
- Driven by hardware Timer 0 (`REG_TM0CNT_H = 0x0080` with cascade into Timer 1).
- Increments in-game minutes every ~0.84 real seconds during exploration.
- Suspends clock progression during dialog boxes, cutscenes, and indoor house visits.

### 5. Sound & Music Driver Interface (`Index 0x80 - 0x8F`)
- Links to the Music Player 2000 (`m4a`) sound engine.
- Triggers background music tracks (`BGM_*`) and sound effects (`SE_*`).

### 6. Event Scripting Virtual Machine Hooks (`Index 0x90 - 0x99`)
- Direct callgates invoked by `ScriptEngine` to evaluate game conditions (e.g. weather checks, heart level thresholds, festival triggers).

---

## 3. Interrupt Handling & VBlank Synchronization

The GBA interrupt controller is managed through `REG_IE` and `REG_IF`:

```
                 +-----------------------+
                 | Hardware Interrupt    |
                 +-----------+-----------+
                             |
         +-------------------+-------------------+
         |                   |                   |
         v                   v                   v
   VBlank (Bit 0)      HBlank (Bit 1)      Timer 0 (Bit 3)
         |                   |                   |
   OAM/VRAM Flush      Raster Color        Calendar Clock
   Buffer Swap         Modulation          Tick Increment
```

1. **VBlank ISR (`0x080004C4`):** Clears the interrupt request bit in `REG_IF` and invokes registered callbacks.
2. **`Interrupt_WaitForVBlank` (`0x08000528`):** Uses GBA BIOS `swi 0x04` (`IntrWait`) to put the ARM7TDMI CPU into low-power halt mode until the vertical retrace starts, saving battery and ensuring fixed 59.73 FPS timing.
