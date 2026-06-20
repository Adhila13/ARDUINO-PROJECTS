# 🌡️ Temperature Monitoring System Using TMP36 Sensor

## 📖 Description

This Arduino project measures ambient temperature using a TMP36 temperature sensor and displays the temperature in degrees Celsius on the Serial Monitor. An LED is used as an indicator and turns ON when the temperature exceeds a predefined threshold.

The project demonstrates how analog sensor data is converted into voltage using the Arduino's ADC and then converted into temperature using the TMP36 sensor characteristics.

---

## ✨ Features

- Read temperature using a TMP36 sensor
- Convert ADC readings into voltage values
- Calculate temperature in Celsius
- Display temperature on the Serial Monitor
- Turn ON an LED when temperature exceeds a threshold
- Real-time temperature monitoring

---

## 🔌 Components Required

- Arduino Uno
- TMP36 Temperature Sensor
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

---

## 🧠 Concepts Used

- Analog Input
- ADC (Analog-to-Digital Conversion)
- Sensor Interfacing
- Voltage Calculation
- Temperature Calculation
- Conditional Statements (`if-else`)
- Serial Communication

---

## ⚙️ Working Principle

1. The TMP36 sensor generates an output voltage proportional to temperature.
2. Arduino reads the sensor voltage using `analogRead()`.
3. The ADC value (0–1023) is converted into voltage.
4. The TMP36 offset voltage (0.5 V) is removed.
5. The remaining voltage is converted into temperature in Celsius.
6. The temperature is displayed on the Serial Monitor.
7. If the temperature exceeds the threshold value, the LED turns ON.

---

## 📐 Temperature Calculation

### ADC to Voltage

```cpp
voltage = sensorValue * (5.0 / 1023.0);
```

### Voltage to Temperature

```cpp
temperature = (voltage - 0.5) * 100;
```

Where:

- 0.5 V = TMP36 offset voltage
- 10 mV = 1°C

---

## 📸 Project Preview

Add your Tinkercad circuit screenshot here.

```text
temperature-monitoring-system.png
```

---

## 📊 Sample Output

```text
ADC Value: 358
Temperature: 124.98 °C
```

---

## 🎯 Learning Outcomes

Through this project, I learned:

- How analog sensors communicate with microcontrollers
- ADC working in Arduino
- Converting ADC readings into voltage
- Understanding sensor offset voltage
- Temperature measurement using TMP36
- Real-time monitoring using Serial Monitor
- Sensor-based decision making using LEDs

---

## 🚀 Future Improvements

- Add a buzzer for high-temperature alerts
- Display temperature on an LCD
- Log temperature data to a file or cloud platform
- Build a smart room monitoring system

---

## 👩‍💻 Author

**Adhila Thasneem R**  
B.Tech Electronics and Communication Engineering (ECE)
