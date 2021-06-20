# Instructions

```
Inc folder contains needed headers file and Scr folder contains their source codes. 
There are folders which are the same name on the project folder which is created by STM32cubeide
You must copy files in Inc and Src in the repository to Inc 
and Src in the project file on the STM32cubeide.
```

# Requirement Components for Running without making any changing
```
STM32F407V-DISCOVERY BOARD
NOKIA 5110 LCD SCREEN
4 BUTTONS
```

# Connections between Discovery board and components
## For Nokia 5110 LCD Screen Connection
```
RST of the LCD Screen must be connected to PB0
CE of the LCD Screen must be connected to PB12
D/C of the LCD Screen must be connected to PB1
DIN of the LCD Screen must be connected to PB15
CLK of the LCD Screen must be connected toPB13
VCC of the LCD Screen must be connected to PB5
BL of the LCD Screen must be connected to PB7
GND of the LCD Screen must be connected to GND pin of the discovery board
```

## For buttons connection
### All one sides of the buttons must be connected to the GND pin because the interrupts for controlling the snake are active low.
```
PD0 must be connected to the right button
PD1 must be connected to the left button
PD2 must be connected to the upper button
PD3 must be connected to the lower button
```

### Test Device

```
STM32F407V-DISCOVERY BOARD 
```
