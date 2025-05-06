# 🌐 IoT Lab Experiments Repository

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg)

---

## 📘 Overview

Welcome to the **IoT Lab Experiments Repository** – a hands-on resource to learn and implement fundamental Internet of Things (IoT) concepts. This collection includes real-world experiments covering device setup, wireless protocols, cloud data handling, and end-to-end IoT systems.

Each experiment is thoroughly documented with setup guides, source code, and practical demonstrations.

---

## 🛠️ Getting Started with Raspberry Pi

Set up and program your **Raspberry Pi 5 Model B** and **Zero 2W** using Python:

- 🔹 **Device Introduction** – Compare features of Raspberry Pi models  
- 🔹 **Hardware Setup Guide** – Connect peripherals and boot your Pi  
- 🔹 **GPIO Programming** – Control LEDs, buzzers, and motors via Python scripts  

---

## 📡 IoT Networking Protocols

Understand and work with key IoT communication protocols:

| Protocol | Description | Use Case |
|---------|-------------|----------|
| MQTT | Lightweight pub/sub protocol | Real-time sensor updates |
| CoAP | RESTful protocol over UDP | Constrained networks |
| HTTP | Traditional request/response | Cloud communication |
| ThingSpeak | Cloud platform | Sensor data storage & visualization |

- 🧭 Protocol selection guide based on power, latency, and payload needs  
- ☁️ ThingSpeak cloud integration – push data from devices to the cloud  

---

## 🔌 IoT Communication Technologies

Hands-on implementation and comparison of communication standards:

| Protocol  | Range        | Power Use | Data Rate     | Best For                |
|-----------|--------------|-----------|---------------|--------------------------|
| Wi-Fi     | 100m (max)   | High      | High          | High-speed connectivity |
| Bluetooth | ~10m         | Low       | Medium        | Short-range devices     |
| ZigBee    | ~100m        | Very Low  | Low           | Mesh sensor networks    |
| LoRa      | >5 km        | Ultra Low | Very Low      | Long-range WSNs         |

Each protocol is demonstrated through code and practical IoT applications.

---

## 🌐 Wireless Sensor Networks (WSNs)

Configure wireless modules to build sensor networks:

- 📦 **XBee Configuration**: Using XCTU for ZigBee setup  
- 📡 **LoRa Setup**: Using Arduino IDE for point-to-point or star topology  
- 🔗 **Network Topologies**: Learn star, mesh, and hybrid layouts  
- 🌿 Real-world use: Smart agriculture, air quality monitoring, home automation

---

## 🔄 MQTT & Node-RED Integration

Visualize IoT workflows and data in real-time:

- 💬 Install and configure **Mosquitto MQTT Broker**
- 🧩 Create flows in **Node-RED** to handle MQTT messages
- 📊 Real-time dashboards for monitoring device metrics

---

## 🌡️ ESP32 with DHT11/DHT22 Sensors

Monitor environmental data using ESP32:

- 📍 Interface **DHT11/DHT22** to read temperature and humidity
- 🌐 Configure ESP32 for Wi-Fi communication
- ☁️ Send data to **ThingSpeak** using HTTP requests or MQTT

---

## ☁️ Google Cloud IoT Integration

Push IoT data to Google’s cloud infrastructure:

- 🔧 Set up Cloud Pub/Sub, BigQuery, and Cloud Functions  
- 📈 Log, store, and analyze IoT data on the cloud  
- 📡 Register devices and securely stream data  

---

## 🔧 Hardware Required

| Component               | Purpose                                  |
|-------------------------|------------------------------------------|
| Raspberry Pi 5 / Zero 2W| Microcontroller board                    |
| ESP32 Dev Board         | Wi-Fi & Bluetooth enabled MCU            |
| XBee Modules            | ZigBee-based wireless communication      |
| LoRa Modules            | Long-range wireless sensor setup         |
| DHT11 / DHT22           | Temp and humidity sensing                |
| HC-05 Module            | Bluetooth communication                  |
| Breadboard & Jumper Wires| Prototyping setup                        |

---

## 💻 Software Requirements

| Software / Platform      | Use Case                                |
|--------------------------|-----------------------------------------|
| Arduino IDE              | ESP32 & LoRa programming                |
| Python 3.x               | Raspberry Pi scripting                  |
| Node-RED                 | IoT flow programming                    |
| Mosquitto MQTT Broker    | Lightweight pub-sub communication       |
| ThingSpeak Account       | Cloud platform for data storage         |
| Google Cloud Account     | Cloud analytics & API integration       |

---

## 🤝 How to Contribute

We welcome contributions to improve this repository!

- 🐛 Report bugs or issues  
- 💡 Suggest features or enhancements  
- 📁 Add new experiments  
- ✍️ Improve documentation  

Just fork the repository, create a new branch, and submit a pull request.  
Please include proper documentation with your contributions.

---

## 👨‍🔬 IoT Experiments Maintained By

- **Name**: Ameen Khan  
- **PRN**: 22070521007  
- **Section**: A

---

## ⚖️ License

This repository is released under the **MIT License** and is freely available for academic, personal, and project-based learning.

---

> 🔍 You can explore each experiment in the respective folders inside this repository.
