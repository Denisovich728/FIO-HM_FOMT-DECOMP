# Farm Simulation & Game Mechanics Documentation

## 1. The Farm Field Grid System

The farmland in *Harvest Moon: Friends of Mineral Town* is modeled as a uniform discrete 2D grid matrix of **43 columns by 25 rows** (1,075 total plots):

```
+-------------------------------------------------------------+
| Plot (0,0)  ................................... Plot (42,0) |
|      .                                                .     |
|      .                 43 x 25 GRID                   .     |
|      .             (1,075 Active Plots)               .     |
|      .                                                .     |
| Plot (0,24) ................................... Plot (42,24)|
+-------------------------------------------------------------+
```

### Plot State Bitmask (`FieldPlot`)
Each plot tile is packed into an 8-bit bitfield representation:
- **`crop_type` (Bits 0-4):** 0 = Empty, 1..16 = Active crop variety.
- **`growth_stage` (Bits 5-7):** Stage index (0 = Seeded, 1 = Sprout, 2 = Medium, 3 = Mature, 4 = Regrowth).
- **`is_watered` (Flag):** Set to 1 when watered by watering can or rain; resets to 0 at 06:00 each morning.
- **`is_tilled` (Flag):** Set to 1 when struck with a hoe.
- **Debris Flags:** Stones, branches, weeds, or golden lumber.

---

## 2. Crop Growth Dynamics

Crops advance by 1 growth stage at day rollover if and only if `is_watered == 1`. If unwatered, the crop survives but its growth is stalled.

| Crop | Season | Seed Cost | Days to Mature | Regrowth Interval | Base Sell Price |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Turnip** | Spring | 120 G | 5 days | Single Harvest | 60 G |
| **Potato** | Spring | 150 G | 8 days | Single Harvest | 80 G |
| **Cucumber** | Spring | 200 G | 10 days | 5 days | 60 G |
| **Strawberry** | Spring | 150 G | 9 days | 2 days | 30 G |
| **Cabbage** | Spring | 500 G | 15 days | Single Harvest | 250 G |
| **Tomato** | Summer | 200 G | 10 days | 3 days | 60 G |
| **Corn** | Summer | 300 G | 15 days | 3 days | 100 G |
| **Onion** | Summer | 150 G | 8 days | Single Harvest | 80 G |
| **Pumpkin** | Summer | 500 G | 15 days | Single Harvest | 250 G |
| **Pineapple** | Summer | 1000 G | 21 days | 5 days | 500 G |
| **Eggplant** | Autumn | 120 G | 10 days | 3 days | 60 G |
| **Carrot** | Autumn | 300 G | 8 days | Single Harvest | 120 G |
| **Sweet Potato** | Autumn | 300 G | 6 days | 2 days | 120 G |
| **Spinach** | Autumn | 200 G | 6 days | Single Harvest | 80 G |
| **Green Pepper** | Autumn | 150 G | 8 days | 2 days | 40 G |

---

## 3. Shipping Bin Economics (`ShippingBin_ShipItem`)

Every product shipped is stored in the `ShippingBin` structure (`product_stats[72]`).
At **17:00 (5:00 PM)**, Zack visits the farm and executes the daily settlement calculation:

$$\text{Daily Profit} = \sum_{i=0}^{71} (\text{Amount Shipped}_i \times \text{Base Price}_i)$$

- Once shipped, `ShippingBin::GetValueShipped` is added to player's `gold` balance.
- Total lifetime statistics are permanently recorded in SRAM to unlock the **Goddess Gift** and **Mayor's Acknowledgement** when all 72 products have been shipped at least once.

---

## 4. Livestock & Animal Care Simulation

Animals have an **affection meter (0 to 255)** representing 0 to 10 hearts (25.5 points per heart):

### 1. Cows (`Cow`)
- **Milking:** Requires Milker. Quality is determined by affection:
  - `0 - 99` Affection: **Milk S** (100 G)
  - `100 - 199` Affection: **Milk M** (150 G)
  - `200 - 255` Affection: **Milk L** (200 G)
  - Cow Festival Winner: **Milk G** (300 G)
  - P / X Milk: 600 hours grazing outside + special conditions (500 G / 800 G)

### 2. Sheep (`Sheep`)
- **Shearing:** Requires Shears. Wool regrows every **7 in-game days**.
- Qualities mirror milk: Wool S, M, L, G, P, X.

### 3. Chickens (`Chicken`)
- Lay 1 egg daily if fed.
- Egg incubator takes **3 days** to hatch a chick.

---

## 5. Player Stamina & Fatigue Equations

The farmer's physical endurance is governed by two independent metrics:

1. **Stamina (Default Max: 150):**
   - Each tool use expends stamina (Iron: -2, Copper: -3, Silver: -4, Gold: -5, Mystrile: -7).
   - Finding Power Berries increases maximum stamina by +10 (up to 250 max).
2. **Fatigue (Default Max: 100):**
   - Fatigue remains at 0 until Stamina hits 0.
   - Once Stamina = 0, tool uses increment Fatigue (+2 per swing).
   - Working in the rain/snow or after 22:00 adds +1 Fatigue per swing even if Stamina > 0.
   - **Fainting:** When Fatigue reaches 100, the player collapses and wakes up at Mineral Clinic under Doctor and Elli's care at 12:00 the next day.
