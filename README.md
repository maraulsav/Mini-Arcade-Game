# Mini-Arcade-Game
Currently I am making a Mini Arcade Game that can be used as a keychain and can be played. I wanted to make it for my little brother.
Here is my project overall look 

<img width="239" height="163" alt="Screenshot 2026-03-29 at 13 28 28" src="https://github.com/user-attachments/assets/a5945180-c233-44ba-a4c1-70d8d425fe29" />


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

## Case overview
Hey! here is the clear picture of my case

<img width="429" height="499" alt="Screenshot 2026-03-29 at 13 30 33" src="https://github.com/user-attachments/assets/fd4c85d3-69b5-46dc-9ff8-db935ef984a5" />

<img width="452" height="545" alt="Screenshot 2026-03-29 at 13 31 03" src="https://github.com/user-attachments/assets/a2130766-8424-424e-8369-2beb9f4e4b68" />

<img width="537" height="608" alt="Screenshot 2026-03-29 at 13 32 02" src="https://github.com/user-attachments/assets/4ae6cffd-1151-46e9-be66-3ec8505fc29b" />


There I add some features like hole for the keychain, space for the switch, space for the backside component, and holes for the M3 bolt to go in in order to connect the PCB and the case


## Code Overview
This Mini Arcade Game uses the Arduino IDE
- The buzzer can make a sound after the cat catch it is food and when it lose
- The center button can start the game
- The right and left button is the one that can move the cat pixel

## BOM:
## Bill of Materials (BOM)

| Name | Purpose | Quantity | Total Cost (USD) | Link | Distributor |
|------|--------|----------|------------------|------|-------------|
| Tang Rivet | Tool for installing rivet nuts/bolts | 1 | 2.35 | https://www.tokopedia.com/solomicro/tang-tembakan-baut-rivet-gun-nut-plier-2-4-4-8mm-dm910-orange-1731126780824815546 | Tokopedia |
| OLED Display | Display output | 1 | 1.53 | https://www.tokopedia.com/cncstorejogja/lcd-oled-0-96-inch-white-i2c-0-96-128x64-display-module | Tokopedia |
| Heat Set Insert (10x) | For 3D printed case assembly | 1 | 1.12 | https://www.tokopedia.com/ciptakarya3d/brass-hot-melt-thread-inserts-nut-m2-m2-5-m3-m4-m5-m6-m8-double-twill-knurled-varian-1-x-100pcs-free-box-1729797896345322881 | Tokopedia |
| Printing Legion | 3D printing service (estimated) | 1 | 9.00 | https://github.com/hackclub/print-legion | Hackclub |
| Screw (M3) | Connect case parts | 4 | 0.09 | https://www.tokopedia.com/centi-store/baut-kancing-3mm-m3-4mm-6mm-8mm-10mm-16mm-ss304-round-head-l-socket-6mm | Tokopedia |
| PCB | Holds electronic components | 1 | 2.00 | https://cart.jlcpcb.com/quote | JLCPCB |
| Battery CR2032 | Power supply | 5 | 2.11 | https://www.tokopedia.com/panasonic-battery-indonesia/panasonic-baterai-kancing-lithium-coin-cr2016-cr2025-cr2032-cr2032-5pc | Tokopedia |
| Battery Socket (x5) | Holds battery | 1 | 0.26 | https://www.tokopedia.com/iwantelectronics/soket-baterai-3v-tempat-holder-case-baterai-kancing-3v-cr2032-battery-socket-cr2032-socket-battery-3v-cr2032-socket-2pin-1731585016507762682 | Tokopedia |
| 1k Resistors (5x) | Current limiting | 1 | 0.30 | https://www.tokopedia.com/arduinonano/10pcs-resistor-1k-1-kilo-k-ohm-1-4-watt-0-25-metal-film-tolerance-1 | Tokopedia |
| 1x40 Pin Header | Microcontroller connections | 1 | 0.15 | https://www.tokopedia.com/arduinonano/1x40-pin-2-0mm-male-single-row-header-strip-40-40p-pit-2mm-tulang-ikan | Tokopedia |
| 1.3" OLED Module I2C | Graphic display | 1 | 1.54 | https://www.tokopedia.com/cncstorejogja/yellow-blue-0-96-i2c-128x64-oled-lcd-display-module-1729811659019355136 | Tokopedia |
| Socket IC 8-pin (10x) | Removable ATtiny85 mount | 1 | 0.30 | https://www.tokopedia.com/arduinonano/soket-ic-8p-socket-ic-8-pin-8pin-dip-8-p-integrated-circuit | Tokopedia |
| ATtiny85 | Microcontroller | 1 | 2.13 | https://www.tokopedia.com/cncstorejogja/attiny85-20pu-attiny85-attiny-85-avr-dip-8 | Tokopedia |
| Buzzer | Sound output | 1 | 0.15 | https://www.tokopedia.com/arduinonano/5v-buzzer-active-dc-sot-plastic-tube-long-sound-12x9-5mm-st-continuous | Tokopedia |
| LED SMD | Indicator light | 1 | 0.06 | https://www.tokopedia.com/arduinonano/10pcs-led-smd-1206-6-warna-orange-blue-green-white-yellow-red-1730749956984767597 | Tokopedia |
| Slide Switch (10x) | Power control | 1 | 0.10 | https://www.tokopedia.com/indo-ware/3-pin-saklar-geser-mini-toggle-switch-slide-1p2t-3pin-ss12d00-g3 | Tokopedia |
| Push Button | Game control input | 3 | 0.05 | https://www.tokopedia.com/arduinonano/black-small-push-button-copper-foot-micro-square-4p-4pin-6x6x5mm-6x6x5 | Tokopedia |

## Additional notes
Thankyoou for Stasis Hackclub, Kicad, Fusion360, and VisualStudioCode  that making this project possible
