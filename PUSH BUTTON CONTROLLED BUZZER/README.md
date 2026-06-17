# Push Button Controlled Buzzer

## Description
This Arduino project controls a buzzer using a push button. The buzzer turns ON when the push button is pressed and turns OFF when the button is released.

## Components Used
- Arduino Uno
- Push Button
- Active Buzzer
- Resistor
- Breadboard
- Jumper Wires

## Circuit Connections

### Push Button
- One terminal → Digital Pin 3
- Other terminal → 5V/GND (according to circuit configuration)
- Resistor used as pull-up/pull-down resistor

### Buzzer
- Positive terminal → Digital Pin 2
- Negative terminal → GND

## Working
1. The Arduino continuously reads the state of the push button.
2. When the button is pressed, the buzzer is activated.
3. When the button is released, the buzzer is deactivated.
4. This demonstrates interaction between digital input and digital output devices.

## Concepts Learned
- Digital Input using `digitalRead()`
- Digital Output using `digitalWrite()`
- Push Button Interfacing
- Buzzer Interfacing
- Conditional Statements (`if-else`)
- Arduino GPIO Control

## Applications
- Door Bell Systems
- Alarm Systems
- Security Alerts
- User Input Devices

## Author
Adhila Thasneem
