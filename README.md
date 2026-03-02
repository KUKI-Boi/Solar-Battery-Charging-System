# Solar-Battery-Charging-System
Solar panel based battery charging monitoring system using Arduino.
# ☀️ Solar Battery Charging Monitoring System 🔋

## 📌 Project Overview
This project demonstrates a **solar panel-based battery charging monitoring system** using Arduino.  
The system monitors the battery voltage and indicates when the battery is fully charged using an LED indicator.

This project is designed and simulated using **Tinkercad Circuits**.

---

## ⚙️ Components Used
- Arduino UNO
- Solar Panel (Simulation)
- 9V Battery (Simulated rechargeable battery)
- Diode (1N4007) – Reverse current protection
- 2 × 10kΩ Resistors – Voltage Divider
- LED – Battery Full Indicator
- 220Ω Resistor – LED Protection

---

## 🔌 Circuit Working Principle

1. The solar panel provides DC voltage to charge the battery.
2. A diode is used to prevent reverse current flow from the battery to the solar panel.
3. A voltage divider circuit reduces battery voltage to a safe level (0–5V) for Arduino analog input.
4. Arduino continuously monitors battery voltage.
5. When battery voltage reaches **8.5V (full charge threshold for 9V battery)**:
   - LED turns ON (Battery Full)
6. If battery voltage is below 8.5V:
   - LED remains OFF

---

## 🧠 Features

- Battery voltage monitoring
- Overcharge indication
- Reverse current protection
- Microcontroller-based control logic
- Safe voltage sensing using voltage divider

---
