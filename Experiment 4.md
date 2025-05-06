# 📡 Configuration of XBee S2C and LoRa for Wireless Sensor Network (WSN)

This document explains how to configure **XBee S2C (ZigBee)** and **LoRa SX127x-based devices** to form an efficient **Wireless Sensor Network (WSN)** for IoT applications.

---

## 🧭 Overview of WSN (Wireless Sensor Network)

| Component                  | Role                                |
| -------------------------- | ----------------------------------- |
| Sensor Nodes (End Devices) | Collect data (e.g., temp, humidity) |
| Routers / Repeaters        | Forward packets (XBee-only)         |
| Coordinator / Gateway      | Central node that aggregates data   |

---

## 🧩 Part 1: XBee S2C Configuration for WSN

### 🧾 Hardware Required

* 2 or more **XBee S2C modules**
* XBee USB Adapter / Explorer Boards
* **Digi XCTU Software**
* Sensor module (e.g., DHT11)
* Arduino UNO/Nano (optional for sensor integration)

---

### 🔧 Step-by-Step Configuration using XCTU

#### 📶 Coordinator Setup

| Parameter  | Value              | Description                     |
| ---------- | ------------------ | ------------------------------- |
| **PAN ID** | e.g., `1234`       | Network ID to group nodes       |
| **CE**     | `1` (Coordinator)  | Device role                     |
| **DH/DL**  | `0 / 0`            | Destination address (broadcast) |
| **CH**     | `C` (or any valid) | Operating Channel               |
| **BD**     | `9600`             | Baud rate (match Arduino UART)  |

#### 🔁 Router / End Device Setup

| Parameter  | Value                  | Description               |
| ---------- | ---------------------- | ------------------------- |
| **PAN ID** | `1234` (same as coord) | Join same network         |
| **CE**     | `0` (End Device)       | Non-coordinator role      |
| **DH/DL**  | Coordinator’s address  | Route data to coordinator |
| **MY**     | Unique 16-bit addr     | Unique for each device    |

---

### 🛠 Example XCTU Configuration Screenshot (Optional)

```
Coordinator:
- PAN ID: 1234
- CH: C
- CE: 1
- DH: 0
- DL: 0

Router:
- PAN ID: 1234
- CH: C
- CE: 0
- DH: 0
- DL: <Coordinator 16-bit address>
```

---

### 🧪 Test Code for Arduino with XBee (TX/RX Serial)

```cpp
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println("Hello from End Device");
  delay(1000);
}
```

---

## 📡 Part 2: LoRa SX127x Configuration for WSN

### 🧾 Hardware Required

* **2 or more LoRa Modules (SX1276/77/78/79)**
* Arduino UNO / ESP32 / RPi
* Sensors (e.g., DHT11)
* LoRa Antennas (for long range)

---

### 🧪 Basic Peer-to-Peer WSN Topology (LoRa)

| Device                  | Role       | Description                          |
| ----------------------- | ---------- | ------------------------------------ |
| Node 1                  | Sender     | Collects sensor data & transmits     |
| Node 2                  | Receiver   | Receives & processes data            |
| Gateway Node (optional) | Aggregator | Can forward data to cloud (via MQTT) |

---

### 🔧 Required Library

Install this on Arduino IDE:

```cpp
Library: LoRa by Sandeep Mistry
```

---

### ⚙️ Configuration Parameters

| Parameter        | Example Value     | Description                             |
| ---------------- | ----------------- | --------------------------------------- |
| Frequency        | `915E6` / `868E6` | Set according to region (e.g., 915 MHz) |
| Spreading Factor | `7–12`            | Higher → more range, lower data rate    |
| TX Power         | `14 dBm`          | Max transmission strength               |
| Bandwidth        | `125kHz`          | Default value for general use           |
| Coding Rate      | `4/5`             | Error correction level                  |

---

### 📡 Sample Arduino Code – Sender

```cpp
#include <SPI.h>
#include <LoRa.h>

void setup() {
  Serial.begin(9600);
  LoRa.begin(915E6);  // Frequency set to 915 MHz
}

void loop() {
  LoRa.beginPacket();
  LoRa.print("Hello from LoRa Node");
  LoRa.endPacket();
  delay(1000);
}
```

---

### 📡 Sample Arduino Code – Receiver

```cpp
#include <SPI.h>
#include <LoRa.h>

void setup() {
  Serial.begin(9600);
  LoRa.begin(915E6);
}

void loop() {
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    String received = "";
    while (LoRa.available()) {
      received += (char)LoRa.read();
    }
    Serial.println("Received: " + received);
  }
}
```

---

## 📶 Network Comparison Table

| Feature            | XBee S2C (ZigBee) | LoRa SX127x                 |
| ------------------ | ----------------- | --------------------------- |
| Topology           | Mesh              | Star / Peer-to-Peer         |
| Range              | \~100m            | Up to 15 km                 |
| Power Consumption  | Low               | Ultra-low                   |
| Setup Complexity   | Moderate (GUI)    | Simple (code-based)         |
| Data Rate          | \~250 kbps        | \~50 kbps                   |
| Ideal Applications | Smart home, HVAC  | Agriculture, remote sensing |

---

## 🧠 Summary

* ✅ XBee S2C is best for **mesh networks** with medium range and reliability.
* ✅ LoRa is best for **long-range WSN** with ultra-low power needs.
* ✅ Both can be configured with free tools and integrated easily with Arduino/ESP platforms.
* ✅ Final choice depends on **range**, **power**, and **topology** requirements.

---
