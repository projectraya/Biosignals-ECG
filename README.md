# ESP32-S3 ECG / Biosignals Monitoring

A real-time biomedical signal acquisition system built using the **AD8232** single-lead heart rate monitor and an **ESP32-S3** microcontroller. This project demonstrates raw analog signal processing, hardware setup, and live data plotting.

---

## Media & Demonstration

You can see the hardware setup in the `media/` directory.
Video recordings showcasing the project are available via the links below:
* **[Full Demonstration](https://youtu.be/ISh5YH9MtOI)**
* **[Screen Recording of the Serial Plotter in ArduinoIDE](https://youtu.be/kbyaub42k5g)**

---

## Hardware Wiring

The AD8232 sensor is interfaced with the ESP32-S3 via the following connections:

| AD8232 Pin | ESP32-S3 GPIO | Description |
| :--- | :--- | :--- |
| **OUTPUT** | `GPIO 4` | Analog signal output (ADC input) |
| **LO+** | `GPIO 6` | Lead-Off detect positive |
| **LO-** | `GPIO 7` | Lead-Off detect negative |
| **3.3V** | `3V3` | Power supply |
| **GND** | `GND` | Ground connection |

---

## Features & Implementation

* **Raw Biosignal Acquisition:** Captures real-time cardiac biopotential activity via surface electrodes.
* **Hardware Lead-Off Detection:** Monitors electrode connectivity using `LO+` and `LO-` digital inputs.
* **High-Speed Serial Telemetry:** Streams continuous readings to the Arduino Serial Plotter at 115200 baud.

---

## How to Run

1. Clone or download this repository.
2. Open `ecg_sensor.ino` in the Arduino IDE.
3. Select board: **ESP32S3 Dev Module**.
4. Flash the code to your ESP32-S3.
5. Open **Tools -> Serial Plotter** (set baud rate to **115200**).
