# Multiple LED Control

## Objective
Learn how to control multiple LEDs independently using Arduino digital pins.

## Components Used
- Arduino Uno
- 3 LEDs
- 3 Resistors (220Ω)
- Breadboard
- Jumper Wires

## Circuit Description
Each LED is connected to a separate Arduino digital pin through a current-limiting resistor. The other terminal of each LED is connected to GND.

## Concepts Learned
- pinMode()
- digitalWrite()
- Multiple Digital Outputs
- Breadboard Connections
- Current Limiting Resistors

## Working
The Arduino controls each LED independently by setting the corresponding pin HIGH or LOW.

Example:

- Pin 2 → Green LED
- Pin 3 → Yellow LED
- Pin 4 → Blue LED

When a pin is HIGH, the corresponding LED turns ON.

When a pin is LOW, the corresponding LED turns OFF.

## Skills Gained
- Connecting multiple LEDs
- Understanding digital output pins
- Writing Arduino programs for multiple outputs
- Basic circuit building using a breadboard

## Result
Successfully controlled multiple LEDs using different Arduino digital pins and observed independent LED operation.

## Future Improvements
- Traffic Light System
- LED Pattern Generator
- Push Button Controlled LEDs
