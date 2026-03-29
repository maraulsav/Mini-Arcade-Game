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
The BOM can be seen in Mini Arcade Game-bom.csv file

## Additional notes
Thankyoou for Stasis Hackclub, Kicad, Fusion360, and VisualStudioCode  that making this project possible
