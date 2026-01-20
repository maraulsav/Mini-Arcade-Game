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
- Battery:BatteryHolder_Keystone_3002_1x2032
- Buzzer_Beeper:Buzzer_12x9.5RM7.6
- LED_SMD:LED_0805_2012Metric_Pad1.15x1.40mm_HandSolder
- MountingHole:MountingHole_2.1mm
- Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical
- Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal
- Button_Switch_THT:SW_PUSH_6mm_H9.5mm
- Button_Switch_THT_SPST:SW_Push_1P2T_Vertical_E-Switch_800UDP8P1A1M6
- Package_DIP:DIP-8_W7.62mm_Socket_LongPads

Schematic 
<img width="969" height="669" alt="Screenshot 2026-01-20 at 10 49 50" src="https://github.com/user-attachments/assets/8cb24f01-63f6-40d1-84ac-8b988ff6a16a" />

PCB
<img width="371" height="501" alt="Screenshot 2026-01-20 at 10 50 19" src="https://github.com/user-attachments/assets/272b2a8f-f4ee-4b4f-b464-2d93fb92da6e" />


## Code Overview
This Mini Arcade Game uses the Arduino IDE
- The buzzer can make a sound after the cat catch it is food and when it lose
- The center button can start the game
- The right and left button is the one that can move the cat pixel

## BOM:
Here should be everything you need to make this HackPad and the price list (in IDR but later I will convert to dollar)
- 3x Small push Button button  : IDR 900
- 1x Slide switch  : IDR 1,200
- 1x SMD LED   : IDR 1,000
- 1x Buzzer   : IDR 2,500
- 1x ATtiny 85   : IDR 50,000
- 1x Socket IC 8pin : IDR 5,000
- 1x 1.3" OLED Module IIC I2C 128X64  : IDR 60,000
- 1x PinHeader_1x06_P2.54mm_Vertical : IDR 2,500
- 6x 1k Resistors  : IDR 1,000
- PCB Printing (in raftech - pcb production in Indonesia) : IDR 140,000
- Estimated Delivery Cost (including shipment protection): IDR 60,000
Total bill: IDR 324100 = USD 19,10
