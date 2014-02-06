L298N Low-Cost, High-V, 2A (per channel) Motor Driver
===== 
** there are two channels, channel "A" and channel "B" **

These sketches work for the following module -- but will work for any L298N module that have headers for Enable and Input Pins.

http://www.aliexpress.com/item/L298N-Module-Dual-H-Bridge-Stepper-Motor-Driver-Board-Modules-for-Arduino-Smart-Car-FZ0407-Free/1580355305.html


## Cost Analysis

The price of these was $2.98 each when I last saw them, making them comparable to the cost of buying a bare L298N IC.

## Description of Code


### L298_Test.ino

The `L298N_Test.ino` will allow you to manuallly control your input and output pins on the serial.

#### Guide:

`A` -- turns on Enable A
`a` -- offs Enable A

`B` -- turns on Enable B
`b` -- offs Enable B

`1 2 3 4` --  any number 1-4 will turn that input (and corresponding output) to HIGH

`q w e r` --  will turn that input to low (`q w e r` are right below `1 2 3 4` on the keyboard making it really convenient)

### Stepper Motor Test

//Todo add stepper motor test

---

## General Notes:

* outputs 1 and 2 are enabled by ENA

* outputs 3 and 4 are enabled by ENB

* feel free to PWM ENA and ENB


