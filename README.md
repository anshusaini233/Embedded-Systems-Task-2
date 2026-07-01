# Embedded Systems Task 2 – Light Sensor Interfacing using ESP32

## 📖 Project Overview

This project demonstrates a simple smart lighting system using an ESP32 and an LDR sensor module. The ESP32 continuously monitors ambient light intensity and automatically switches an LED ON or OFF based on a predefined threshold. The entire project was designed and tested using the Wokwi online simulator.

---
## 📌 Objective

The objective of this project is to interface an LDR (Light Dependent Resistor) sensor module with an ESP32 microcontroller to develop a simple automatic lighting system. The ESP32 reads the ambient light intensity, displays the readings on the Serial Monitor, and automatically controls an LED whenever the light level falls below a predefined threshold.

---
## 🌐 Simulation Platform

This project was implemented and tested using the Wokwi online simulator. The ESP32 reads the analog output from the LDR sensor module and automatically controls an LED based on the measured light intensity.

---
## 🛠 Components Used (Simulated in Wokwi)

- ESP32 DevKit V1  
- LDR Sensor Module
- LED
- 220Ω Resistor
- Jumper Wires (Virtual Connections)
> **Note:** The components listed above are virtual components used in the Wokwi simulation.

---
## 💻 Development Environment

- Wokwi Online Simulator
- Arduino Framework (ESP32)

---

## 🔌 Circuit Connections

### LDR Sensor Module → ESP32

| LDR Module Pin | ESP32 Pin |
|----------------|-----------|
| VCC | 3.3V |
| GND | GND |
| AO | GPIO34 |
| DO | Not Connected |

### LED → ESP32

| LED Pin | ESP32 Pin |
|---------|-----------|
| Anode (+) | GPIO2 |
| Cathode (-) | GND through 220Ω resistor |

---

## ⚙️ Working Principle

The LDR (Light Dependent Resistor) senses the intensity of surrounding light and provides an analog voltage through its AO pin.

The ESP32 continuously reads this analog value.

- If the light intensity is below the threshold (dark environment), the LED turns ON.
- If the light intensity is above the threshold (bright environment), the LED turns OFF.
- The analog output (AO) of the LDR module is connected to GPIO34 of the ESP32. The ESP32 converts the analog voltage into a digital      value ranging from 0 to 4095 using its built-in Analog-to-Digital Converter (ADC).

---

## ✨ Features

- Reads analog light intensity from the LDR sensor
- Displays sensor readings on the Serial Monitor
- Automatically controls an LED based on light intensity
- Adjustable threshold value

---

## 📄 Source Code

The Arduino source code is available in:

```
code/LDR_ESP32.ino
```

---

## 📷 Project Images

This project was developed and tested using the Wokwi online simulator.

The repository includes:

- Wokwi circuit screenshot
- ESP32 wiring diagram
- Serial Monitor output screenshot

---

## 📈 Sample Output

```
Automatic Light Control System

Light Value: 1750
Status: DARK
LED: ON

-------------------------

Light Value: 3150
Status: BRIGHT
LED: OFF
```
## 🔗 Wokwi Simulation
https://wokwi.com/projects/468368510217533441
---

## 👨‍💻 Author

Anshu Saini
