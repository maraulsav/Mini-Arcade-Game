# Mini-Arcade-Game
Currently I am making a Mini Arcade Game that can be used as a keychain and can be played.
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
- 3x Small push Button button  : IDR 900
- 10x Slide switch  : IDR 5,000
- 1x SMD LED   : IDR 1,000
- 1x Buzzer   : IDR 2,500
- 1x ATtiny 85   : IDR 36,000
- 1x Socket IC 8pin : IDR 5,000
- 1x 1.3" OLED Module IIC I2C 128X64  : IDR 26,000
- 1x PinHeader_1x06_P2.54mm_Vertical : IDR 2,500
- 6x 1k Resistors  : IDR 5,000
- Estimated Delivery cost  IDR 32,000
Total component bill : IDR 116,900   =  USD 6.97
- PCB Printing (JLCPCB) : USD 4 
- Estimated Delivery Cost (JLCPCB - using UPS): USD 1.5
Total bill: USD 12.47
