# Automatic Night Lamp Using LDR

## Description

This Arduino project uses a Light Dependent Resistor (LDR) to automatically control the brightness of an LED based on the surrounding light intensity.

The LED becomes brighter in darkness and gradually turns OFF as the surrounding light increases.

## Components Used

- Arduino Uno
- LDR (Light Dependent Resistor)
- LED
- 220Ω Resistor
- 10kΩ Resistor
- Breadboard
- Jumper Wires

## Working Principle

1. The LDR senses the intensity of light in the surroundings.
2. Arduino reads the LDR value using `analogRead()`.
3. The sensor value is mapped to a PWM range using the `map()` function.
4. The `constrain()` function ensures the PWM value remains between 0 and 255.
5. The LED brightness is controlled using `analogWrite()`.
6. As the environment becomes darker, the LED becomes brighter.
7. As the environment becomes brighter, the LED becomes dimmer and eventually turns OFF.

## Arduino Functions Used

- `analogRead()`
- `analogWrite()`
- `map()`
- `constrain()`
- `pinMode()`
- `Serial.begin()`
- `Serial.println()`

## Circuit Connections

### LDR
- One terminal → 5V
- Other terminal → A0 and 10kΩ resistor
- 10kΩ resistor → GND

### LED
- Anode (+) → PWM Pin 3
- Cathode (-) → 220Ω Resistor → GND

## Features

- Automatic night lamp functionality.
- Brightness varies according to ambient light.
- Uses PWM for smooth brightness control.
- Displays sensor readings on the Serial Monitor.

## Concepts Learned

- LDR Interfacing
- Analog Input
- PWM (Pulse Width Modulation)
- `analogRead()`
- `analogWrite()`
- Sensor Calibration
- Value Mapping using `map()`
- Range Limiting using `constrain()`

## Applications

- Automatic Street Lights
- Smart Lighting Systems
- Energy Saving Lighting
- Home Automation Projects

## Future Improvements

- Add a DHT11 sensor for environmental monitoring.
- Control multiple LEDs based on light intensity.
- Display light intensity on an LCD or OLED display.

## Author

Adhila Thasneem
