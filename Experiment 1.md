# 📘 Introduction to Raspberry Pi 5 Model B

The **Raspberry Pi 5 Model B**, launched in **October 2023**, is the latest and most powerful member of the Raspberry Pi family. It offers a major leap in performance, connectivity, and expandability over its predecessors, making it ideal for DIY electronics, IoT, embedded systems, and learning environments.

---

## 🚀 Key Features at a Glance

| Feature                | Specification                                |
| ---------------------- | -------------------------------------------- |
| CPU                    | 64-bit 2.4GHz Quad-core ARM Cortex-A76       |
| GPU                    | VideoCore VII (OpenGL ES 3.1, Vulkan 1.2)    |
| RAM Options            | 4GB / 8GB LPDDR4X                            |
| Storage Interface      | microSD + PCIe 2.0 via FPC connector         |
| USB Ports              | 2 × USB 3.0, 2 × USB 2.0                     |
| Video Output           | Dual micro-HDMI (4K\@60Hz)                   |
| Network                | Gigabit Ethernet                             |
| Wireless               | Wi-Fi 802.11ac + Bluetooth 5.0               |
| Power Input            | USB-C (5V, 5A)                               |
| GPIO Header            | 40-pin standard GPIO                         |
| Real-Time Clock (RTC)  | Built-in (with external battery support)     |
| Camera & Display Ports | 2 × 4-lane MIPI CSI/DSI via FPC              |
| OS Support             | Raspberry Pi OS, Ubuntu, other Linux distros |

---

## 🧩 Main Components of Raspberry Pi 5 Model B

### 1. 🔧 **Processor (CPU)**

* **ARM Cortex-A76**, 64-bit Quad-Core at **2.4GHz**
* Provides a 2–3x uplift in performance over Raspberry Pi 4
* Suitable for multitasking, ML, edge computing

### 2. 🎮 **Graphics Processor (GPU)**

* **VideoCore VII**
* Supports:

  * **OpenGL ES 3.1**
  * **Vulkan 1.2**
  * 4K video playback (dual 4K\@60Hz via micro-HDMI)

### 3. 🧠 **Memory (RAM)**

* LPDDR4X RAM at 4267 MT/s
* Options: **4GB or 8GB**
* Soldered to the board (non-upgradable)

### 4. 💽 **Storage Options**

* **microSD card** slot for OS and files
* New **PCIe 2.0 x1 lane** via FPC connector:

  * Enables SSD, NVMe storage support (with adapter)

### 5. 📡 **Networking & Wireless**

| Type      | Details                       |
| --------- | ----------------------------- |
| Ethernet  | Gigabit Ethernet (RJ45)       |
| Wi-Fi     | Dual-band 802.11ac (2.4/5GHz) |
| Bluetooth | Version 5.0                   |

### 6. 🔌 **USB Ports**

| Port Type | Count | Use Cases                |
| --------- | ----- | ------------------------ |
| USB 3.0   | 2     | Fast data transfers, SSD |
| USB 2.0   | 2     | Keyboard, mouse, printer |

### 7. 📺 **Display Output**

* Dual **micro-HDMI 2.0** ports
* Supports **dual 4K\@60Hz displays**
* HDMI-CEC and HDR support included

### 8. 📸 **Camera & Display Interface**

| Port     | Use Case            | Connector Type |
| -------- | ------------------- | -------------- |
| CSI (x2) | Camera modules      | 4-lane FPC     |
| DSI (x2) | Touchscreen display | 4-lane FPC     |

### 9. ⚡ **Power Supply**

* USB-C port (5V, **5A** recommended)
* Power Management IC (PMIC) for voltage regulation
* Active cooling or heatsink recommended

### 10. ⏰ **Real-Time Clock (RTC)**

* Built-in RTC
* Connect external battery to keep time when powered off

### 11. 🧷 **GPIO Pins**

| Header      | Details                         |
| ----------- | ------------------------------- |
| GPIO Header | 40-pin (2x20), 3.3V logic level |
| Functions   | PWM, UART, I2C, SPI, GPIO, etc. |

---

## 🧰 Additional Features & Upgrades

| Feature               | Description                                |
| --------------------- | ------------------------------------------ |
| PCIe Support          | Connect NVMe SSDs or network cards via FPC |
| Active Cooling Header | Dedicated 4-pin header for fan             |
| Power Button Support  | Safe shutdown with supported cases         |
| Dedicated Debug Port  | UART debug header onboard                  |

---

## 📦 What’s New Compared to Pi 4?

| Feature       | Pi 4 Model B         | Pi 5 Model B                   |
| ------------- | -------------------- | ------------------------------ |
| CPU           | Cortex-A72 (1.5GHz)  | Cortex-A76 (2.4GHz)            |
| GPU           | VideoCore VI         | VideoCore VII (Vulkan support) |
| RAM           | Up to 8GB LPDDR4     | Up to 8GB LPDDR4X (faster)     |
| USB           | 2 × USB 3.0          | 2 × USB 3.0 + PCIe             |
| Display Ports | 2 × micro-HDMI       | 2 × micro-HDMI (4K\@60Hz)      |
| GPIO          | 40-pin               | 40-pin (same layout)           |
| RTC           | No (external needed) | Built-in RTC                   |
| PCIe/NVMe     | Not supported        | Native PCIe 2.0 via FPC        |
| Cooling       | Passive recommended  | Active cooling recommended     |

---

## 🛠️ Recommended Accessories

| Accessory         | Purpose                                |
| ----------------- | -------------------------------------- |
| Official PSU      | Reliable 5V/5A USB-C power supply      |
| micro-HDMI Cable  | Video output to monitor/TV             |
| microSD Card      | OS and storage (Class 10/UHS-I)        |
| Heatsink/Fan      | Essential for cooling under heavy load |
| Raspberry Pi Case | Physical protection & airflow support  |
| PCIe Adapter      | For SSDs or PCIe peripherals           |

---

## 📎 Final Notes

* Raspberry Pi 5 is **not backward-compatible** with Pi 4 cases due to layout changes.
* **Active cooling is strongly recommended** for sustained performance.
* It's ideal for:

  * Edge AI & ML
  * Home automation
  * Personal servers
  * Robotics
  * Retro gaming & media centers

---
