# 🚧 Obstacle Detection Using Arduino and Ultrasonic Sensor

## 📖 Overview

This project demonstrates an obstacle detection system using an Arduino Uno, an ultrasonic sensor, and a piezo buzzer. The ultrasonic sensor measures the distance to nearby objects, and the buzzer provides an alert when an obstacle is detected within a predefined range.

## 🛠️ Components Used

- 🔹 Arduino Uno
- 🔹 Ultrasonic Sensor (PING)))
- 🔹 Piezo Buzzer
- 🔹 Breadboard
- 🔹 Jumper Wires

## 🔌 Circuit Description

The ultrasonic sensor is connected to the Arduino through a digital pin. The sensor transmits ultrasonic waves and receives the reflected waves from nearby objects. The Arduino calculates the distance based on the time taken for the echo to return.

The piezo buzzer acts as an alarm when an obstacle is detected within the specified threshold distance.

## ⚙️ Working Principle

1. 📡 The Arduino sends a trigger pulse to the ultrasonic sensor.
2. 🌊 The sensor transmits ultrasonic waves.
3. 🎯 The waves reflect from nearby objects.
4. 📥 The reflected waves are received by the sensor.
5. ⏱️ The Arduino measures the echo duration using `pulseIn()`.
6. 📏 The distance is calculated using the speed of sound.
7. 🔔 If the distance is below the threshold value, the buzzer is activated.

## 🧮 Distance Calculation

Distance is calculated using:

```cpp
distance = duration * 0.0343 / 2;
```

Where:

- ⏱️ Duration = Echo pulse width (µs)
- 🌬️ 0.0343 cm/µs = Speed of sound in air
- ↔️ Division by 2 accounts for the forward and return journey

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalWrite()`
- `pulseIn()`
- `tone()`
- `noTone()`
- `Serial.print()`

## ✨ Features

- 📏 Real-time distance measurement
- 🚧 Obstacle detection
- 🔔 Audible warning using a buzzer
- 📟 Serial Monitor output
- 🧪 Simulation in Tinkercad

## 🎓 What I Learned

- 📡 Working principle of ultrasonic sensors
- ⏱️ Time-of-flight measurement
- 📥 Using `pulseIn()` for duration measurement
- 📏 Distance calculation using sound velocity
- 🔔 Controlling piezo buzzers with Arduino
- 📟 Displaying sensor data through Serial Monitor
- 🧪 Building and testing circuits in Tinkercad

## 🚀 Future Improvements

- 💡 Add LEDs for visual indication
- 📺 Add an LCD display
- 🎵 Use variable buzzer frequency based on distance
- 🤖 Integrate with robotic navigation systems

## 🧪 Simulation Platform

**Tinkercad Circuits**

## 👩‍💻 Author

**Adhila Thasneem**  
🌟 ECE Self-Internship Journal
