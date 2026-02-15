# Mini-Arcade-Game
Currently I am making a Mini Arcade Game that can be used as a keychain and can be played. I wanted to make it for my little brother.
My project pcb 3D view
> Front
<img width="510" height="643" alt="Screenshot 2026-01-20 at 10 51 06" src="https://github.com/user-attachments/assets/f922ab14-727f-445d-b943-353f2cae8c7b" />

> Back
<img width="515" height="548" alt="Screenshot 2026-01-20 at 10 52 03" src="https://github.com/user-attachments/assets/84b6ec11-b210-4ae3-a81a-bba4b58134ef" />

## Features : 
- ATtiny85
- 128px x 64px OLED Display 
- 1 SMD LED.
- 3 buttons (left, right, and start)
- 1 Buzzer
- 1 Slide switch
- 1 CR2032 Metal Battery Socket
- Resistors

## PCB
Here's my PCB! It was made in KiCad
I used OLED display schematics and footprints from https://github.com/pforrmi/KiCad-SSD1306-128x64

These are the Footprints I used 
- Display:128x64OLED
- Battery:Battery_Panasonic_CR2032-HFN_Horizontal_CircularHoles
- Buzzer_Beeper:Buzzer_12x9.5RM7.6
- LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder
- MountingHole:MountingHole_2.1mm
- Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical
- Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal
- Button_Switch_THT:SW_PUSH_6mm_H9.5mm
- Button_Switch_THT_SPST:SW_Push_1P2T_Vertical_E-Switch_800UDP8P1A1M6
- Package_DIP:DIP-8_W7.62mm_Socket_LongPads

Schematic 
<img width="761" height="539" alt="Screenshot 2026-01-29 at 06 01 36" src="https://github.com/user-attachments/assets/f598915d-3c84-4a5f-9714-c62936505f56" />

PCB
<img width="478" height="516" alt="Screenshot 2026-01-29 at 06 02 01" src="https://github.com/user-attachments/assets/0762f72c-82b6-4d6d-b4c6-2cf54c1f8330" />


## Code Overview
This Mini Arcade Game uses the Arduino IDE
- The buzzer can make a sound after the cat catch it is food and when it lose
- The center button can start the game
- The right and left button is the one that can move the cat pixel

## BOM:
Here should be everything you need to make this HackPad and the price list (in IDR but later I will convert to dollar)
| Item | Quantity | Unit Price | Total Price | Link |
|------|----------|------------|-------------|------|
| Small push button | 3 | IDR 300 | IDR 900 | https://www.tokopedia.com/arduinonano/black-small-push-button-copper-foot-micro-square-4p-4pin-6x6x5mm-6x6x5 |
| Slide switch* | 10 | IDR 500 | IDR 5,000 | https://www.tokopedia.com/arduinonano/slide-dip-switch-1p-1-pin-red-color-2-pin-2p-kaki-2-54mm-warna-merah |
| SMD LED | 1 | IDR 1,000 | IDR 1,000 | https://www.tokopedia.com/arduinonano/10pcs-led-smd-1206-6-warna-orange-blue-green-white-yellow-red-1730749956984767597 |
| Buzzer | 1 | IDR 2,500 | IDR 2,500 | https://www.tokopedia.com/arduinonano/5v-buzzer-active-dc-sot-plastic-tube-long-sound-12x9-5mm-st-continuous |
| ATtiny85 | 1 | IDR 36,000 | IDR 36,000 | https://www.tokopedia.com/cncstorejogja/attiny85-20pu-attiny85-attiny-85-avr-dip-8 |
| IC Socket 8-pin* | 10 | IDR 500 | IDR 5,000 | https://www.tokopedia.com/arduinonano/soket-ic-8p-socket-ic-8-pin-8pin-dip-8-p-integrated-circuit |
| 1.3" OLED Module I2C 128x64 | 1 | IDR 26,000 | IDR 26,000 | https://www.tokopedia.com/cncstorejogja/yellow-blue-0-96-i2c-128x64-oled-lcd-display-module-1729811659019355136 |
| 1x40 Pin 2.0mm Male Header | 1 | IDR 2,500 | IDR 2,500 | https://www.tokopedia.com/arduinonano/1x40-pin-2-0mm-male-single-row-header-strip-40-40p-pit-2mm-tulang-ikan |
| 1k Resistor* | 5 | IDR 1,000 | IDR 5,000 | https://www.tokopedia.com/arduinonano/10pcs-resistor-1k-1-kilo-k-ohm-1-4-watt-0-25-metal-film-tolerance-1 |
| Battery Socket | 1 | IDR 1,000 | IDR 1,000 | https://www.tokopedia.com/arduinonano/cr2032-battery-holder-tempat-baterai-cr-2032-cr2025-2025-socket-soket |

| Description | Cost |
|------------|------|
| Components Delivery (CNC Store Yogyakarta) | IDR 21,800 |
| Components Delivery (Arduinonano) | IDR 10,200 |
| **Total Components** | **IDR 116,900 (~USD 6.97)** |
| PCB Printing (JLCPCB, 5 pcs)* | USD 4.00 |
| PCB Delivery | USD 1.50 |
| **Total PCB** | **USD 5.50** |
| **TOTAL ALL** | **USD 12.47** |
*Notes: Items marked with (*) indicate minimum purchase quantities set by the seller.*
