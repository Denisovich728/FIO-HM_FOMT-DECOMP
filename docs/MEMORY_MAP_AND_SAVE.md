# Memory Map & Save Data (SRAM) Architecture

## 1. Complete GBA Memory Map

*Harvest Moon: Friends of Mineral Town* operates within standard 32-bit Game Boy Advance address space:

```
+------------------+ 0x08800000 (End of Cartridge ROM - 8 MB)
| Game ROM Data    | Code (.text), Music Sequences, Graphic Tilemaps
+------------------+ 0x08000000
| Cartridge SRAM   | Battery-backed Save RAM (32 KB / 64 KB)
+------------------+ 0x0E000000
| Object RAM (OAM) | 128 Hardware Sprite Descriptors (1 KB)
+------------------+ 0x07000000
| Video RAM (VRAM) | Background Charblocks & Tilemaps (96 KB)
+------------------+ 0x06000000
| Palette RAM      | 256 BG Colors + 256 OBJ Colors (1 KB)
+------------------+ 0x05000000
| Hardware I/O     | Memory-mapped LCD, Sound, DMA Registers
+------------------+ 0x04000000
| Internal WRAM    | 32 KB Fast Execution RAM (Stack, Timers, M4A)
+------------------+ 0x03000000
| External WRAM    | 256 KB General RAM (Farm Grid, Entities, Script)
+------------------+ 0x02000000
```

---

## 2. SRAM Save Data Layout (64 KB Battery RAM)

The game provides two persistent Diary save slots and one volatile Quicksave slot:

| SRAM Address Range | Size | Allocation |
| :--- | :--- | :--- |
| `0x0E000000 - 0x0E001FFF` | 8 KB | **Diary Slot 1** (Primary save buffer) |
| `0x0E002000 - 0x0E003FFF` | 8 KB | **Diary Slot 1 Mirror** (Failsafe backup copy) |
| `0x0E004000 - 0x0E005FFF` | 8 KB | **Diary Slot 2** (Primary save buffer) |
| `0x0E006000 - 0x0E007FFF` | 8 KB | **Diary Slot 2 Mirror** (Failsafe backup copy) |
| `0x0E008000 - 0x0E009FFF` | 8 KB | **Quicksave Buffer** (Erased upon load) |
| `0x0E00A000 - 0x0E00FFFF` | 24 KB | System configuration, records & sound tests |

---

## 3. Save Slot Structure Layout (`0x2000` Bytes)

```
Offset       Size (Bytes)     Description
+0x0000      0x04             Magic Header ID ("HM4A" / 0x41344D48)
+0x0004      0x02             Save Version & Revision Index
+0x0006      0x02             16-bit Cyclic Parity Checksum
+0x0008      0x0C             Player Name (12 characters, null-padded)
+0x0014      0x0C             Farm Name (12 characters, null-padded)
+0x0020      0x04             Gold Currency (32-bit unsigned)
+0x0024      0x04             Game Timestamp (Year, Season, Day, Hour)
+0x0028      0x02             Stamina Current & Max
+0x002A      0x02             Fatigue Current & Max
+0x002C      0x80             Rucksack Inventory & Tool Slots
+0x00AC      0x0433           Farmland 43x25 Plot Grid State (1,075 bytes)
+0x04DF      0x01E0           Shipping Bin Historical Shipment Counters
+0x06BF      0x0250           Barn Animals State (Cows & Sheep)
+0x090F      0x0180           Coop Animals State (Chickens)
+0x0A8F      0x0200           NPC Friendship & Heart Affection Points
+0x0C8F      0x0100           Story Flags Bitmask Array
+0x0D8F      0x0271           House Upgrade & Furniture Ownership Flags
```

---

## 4. Checksum Verification Algorithm

The save verification routine `SramProxy_VerifyChecksum` (`0x080003A0`) guards against corruption:

```c
u16 CalculateSaveChecksum(const u8 *data, u32 length) {
    u32 sum = 0;
    // Skip the first 8 bytes (Magic ID and Checksum itself)
    for (u32 i = 8; i < length; i += 2) {
        u16 word = data[i] | (data[i + 1] << 8);
        sum = (sum + word) & 0xFFFF;
        sum = ((sum << 1) | (sum >> 15)) & 0xFFFF; // 1-bit rotate left
    }
    return (u16)sum;
}
```

If the primary slot fails the checksum validation, the loader automatically reverts to the mirror backup buffer, guaranteeing complete zero-loss recovery.
