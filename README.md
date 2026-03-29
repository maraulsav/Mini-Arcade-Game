# Mini-Arcade-Game
Currently I am making a Mini Arcade Game that can be used as a keychain and can be played. I wanted to make it for my little brother.
Here is my project overall look 

> Front look
<img width="427" height="473" alt="Screenshot 2026-02-18 at 13 26 54" src="https://github.com/user-attachments/assets/f5594b20-6e4e-473e-965c-3edf982da022" />


> Top right corner view
<img width="593" height="502" alt="Screenshot 2026-02-18 at 13 27 27" src="https://github.com/user-attachments/assets/0fa6eb6d-cd80-4799-be0a-f5a8ebc09da1" />


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

<img width="555" height="423" alt="Screenshot 2026-02-18 at 13 28 44" src="https://github.com/user-attachments/assets/b51042a6-0909-4a15-b052-8f5826070c9b" />

<img width="367" height="404" alt="Screenshot 2026-02-18 at 13 29 02" src="https://github.com/user-attachments/assets/acc1d80a-f29d-454d-9f73-1e3acded27f8" />

There I add some features like hole for the keychain, space for the switch, space for the backside component, and holes for the M3 bolt to go in in order to connect the PCB and the case


## Code Overview
This Mini Arcade Game uses the Arduino IDE
- The buzzer can make a sound after the cat catch it is food and when it lose
- The center button can start the game
- The right and left button is the one that can move the cat pixel

## BOM:
The BOM can be seen in Mini Arcade Game-bom.csv file

## Additional notes
Thankyoou for Stasis Hackclub, Kicad, Fusion360, and VisualStudioCode  that making this project possible
