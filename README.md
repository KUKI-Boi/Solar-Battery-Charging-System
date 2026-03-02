# ☀️ Solar Battery Charging and Monitoring System

## 🔋 Overview

This project demonstrates a **solar panel-based battery charging and monitoring system** using an **Arduino Uno**.  
It is designed for both **educational demonstration** and **embedded systems learning**.

The system monitors battery voltage using a **voltage divider circuit**, prevents overcharging using programmable logic, and provides visual status indication through an LED.

The project is fully designed and simulated using [**Tinkercad Circuits**](https://www.tinkercad.com/things/eyWlE5wZN5B/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits).

---

## 📦 Features

- Solar panel charging simulation
- Reverse current protection using diode
- Battery voltage monitoring using Arduino
- Overcharge detection logic
- LED indication for battery full status
- Serial Monitor output for real-time voltage tracking
- Safe voltage sensing using voltage divider

---

## 🛠️ Components Used

| Component            | Quantity | Description |
|----------------------|----------|------------|
| Arduino UNO          | 1        | Microcontroller |
| Solar Panel          | 1        | DC source (Simulation) |
| 9V Battery           | 1        | Simulated rechargeable battery |
| Diode (1N4007)       | 1        | Reverse current protection |
| 10kΩ Resistors       | 2        | Voltage divider |
| LED                  | 1        | Battery Full Indicator |
| 220Ω Resistor        | 1        | LED current limiting |

---

## 🔌 Circuit Working Principle

### 1️⃣ Solar Charging Section
- Solar panel provides DC voltage.
- Diode prevents reverse current flow from battery to solar panel.
- Battery stores energy from solar source.

### 2️⃣ Voltage Monitoring Section
- A voltage divider (10kΩ + 10kΩ) reduces battery voltage to a safe 0–5V range.
- Arduino reads scaled voltage at Analog Pin A0.
- Actual battery voltage is calculated inside the program.

### 3️⃣ Control Logic
- If battery voltage ≥ **8.5V** → LED turns ON (Battery Full).
- If battery voltage < **8.5V** → LED remains OFF.
  
<img width="1466" height="712" alt="Screenshot 2026-03-02 143736" src="https://github.com/user-attachments/assets/68993d28-e7b5-4b17-8870-21c9a97d55a2" />

**Circuit Diagram**

  <img width="863" height="666" alt="image" src="https://github.com/user-attachments/assets/afeed8b6-0360-4039-a49b-69a13fc1d679" />

---

## 🧠 System Logic

- 9V battery full threshold set at **8.5V**
- Arduino continuously samples analog voltage
- Converts ADC value to actual voltage
- Compares against threshold
- Activates LED accordingly
