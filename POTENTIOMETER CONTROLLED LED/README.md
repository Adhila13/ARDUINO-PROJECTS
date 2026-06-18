# Potentiometer Controlled LED

## Description

This Arduino project controls an LED using a potentiometer. The Arduino continuously reads the analog value from the potentiometer and turns the LED ON when the value exceeds a predefined threshold. Otherwise, the LED remains OFF.

## Components Used

- Arduino Uno
- Potentiometer
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Working Principle

1. The potentiometer acts as a variable resistor.
2. Arduino reads the potentiometer value using `analogRead()`.
3. The value ranges from 0 to 1023.
4. If the value is greater than 200, the LED turns ON.
5. If the value is less than or equal to 200, the LED turns OFF.
6. The potentiometer value is displayed on the Serial Monitor.

## Arduino Functions Used

- `analogRead()`
- `digitalWrite()`
- `pinMode()`
- `Serial.begin()`
- `Serial.println()`

## Circuit Connections

### Potentiometer
- Left Pin → 5V
- Middle Pin → A0
- Right Pin → GND

### LED
- Anode (+) → Digital Pin 2
- Cathode (-) → 220Ω Resistor → GND

## Features

- Reads analog input from a potentiometer.
- Displays sensor values on the Serial Monitor.
- Controls an LED based on a threshold value.
- Demonstrates analog input and digital output interaction.

## Learning Outcomes

- Understanding potentiometers and analog inputs.
- Using `analogRead()` in Arduino.
- Implementing decision-making using `if-else`.
- Controlling outputs based on sensor readings.

## Future Improvements

- Control LED brightness using PWM (`analogWrite()`).
- Display potentiometer values on an LCD.
- Use multiple LEDs to indicate different ranges of values.

## Author

Adhila Thasneem
