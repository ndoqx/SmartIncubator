# Smart Incubator – IoT-Based Environment Controller

This project is a **Smart Incubator** system designed using an **ESP32**, integrating **DHT11** for temperature and humidity sensing, **OLED display** for real-time monitoring, and **Blynk IoT platform** for remote control and visualization. It automatically manages the heating, ventilation, and alert systems to maintain a controlled environment for applications like hatching, farming, or scientific incubation.

## Features

* Temperature & Humidity Monitoring** (via DHT11)
* Remote Control & Visualization** using **Blynk**
* OLED Display (SSD1306)** for local info output
* Buzzer alert system** for door or environment status
* Auto-Control Modes based on preset conditions
* LED indicators** via Blynk Dashboard
* Real-time data updates with fail-safes
* Manual and automatic control modes

---

## Hardware Used

* ESP32 Dev Board
* DHT11 Temperature & Humidity Sensor
* SSD1306 OLED Display (128x32)
* Buzzer (GPIO 27)
* LEDs & Relays for actuator control
* Push Buttons** for physical mode selection
* Wi-Fi Network** for Blynk connection

---

## Blynk Setup

Use the following template details in your Blynk dashboard:

```cpp
#define BLYNK_TEMPLATE_ID "TMPL66HEYFYLL"
#define BLYNK_TEMPLATE_NAME "iot project"
#define BLYNK_AUTH_TOKEN "sy64B7lKKvkutqOq16deGbkrVohY-EBA"
```

Blynk widgets used:

* **Gauge V2** → Temperature
* **Gauge V3** → Humidity
* **Slider/Input V0, V4** → Humidity Setpoints
* **Slider/Input V1, V5** → Temperature Setpoints
* **LED V6, V7** → Status Indicators

---

## ⚙️ Wiring Overview

| Component         | ESP32 GPIO Pin        |
| ----------------- | --------------------- |
| DHT11 Sensor      | GPIO 15               |
| OLED Display      | I2C (SDA/SCL)         |
| Buzzer            | GPIO 27               |
| Fan/Heater Relays | GPIO 4, 5, 12, 18, 19 |
| Buttons           | GPIO 14, 23, 13, 26   |

---

## Logic Overview

* **Auto Modes**: Based on temperature and humidity thresholds set through the app or hardcoded.
* **Manual Modes**: Triggered via physical buttons (GPIO 14, 23, 13, 26) to enable different environment control modes.
* **Display**: Shows current temperature, humidity, active mode, and actuator status.
* **Alerts**: Sound via buzzer when the door is opened (or any critical alert condition occurs).
* **Safety**: Built-in checks for invalid readings or sensor failures.

---

## Installation

1. Install required libraries in Arduino IDE:

   * `Blynk` (ESP32)
   * `Adafruit_SSD1306`
   * `Adafruit_GFX`
   * `DHT sensor library`

2. Connect ESP32 to Wi-Fi credentials:

```cpp
char ssid[] = "your_wifi_ssid";
char pass[] = "your_wifi_password";
```

3. Flash the code using Arduino IDE or PlatformIO.

4. Open **Serial Monitor** to debug (baud: `115200`).

---

## Sample Dashboard (Blynk)

* Temperature and Humidity Gauge
* Sliders to control min/max thresholds
* LEDs to indicate safe/unsafe status
* Real-time readings from OLED + cloud

---

## To-Do / Improvements

* Add automatic calibration feature
* Log data to Google Sheets or Firebase
* Add temperature charting in Blynk
* Improve button debounce handling

---
