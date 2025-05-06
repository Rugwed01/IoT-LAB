# 🕉️ Implementation of Mahakumbh Simulation Using MQTT (Mosquitto)

This guide demonstrates how to implement a **Mahakumbh event simulation** using the **MQTT protocol** with the **Mosquitto broker**, where different **sectors** like **Food**, **Security**, **Transport**, etc., act as **subscribers** and **publishers** using a **pub/sub model** in separate terminal sessions.

---

## 🧰 Requirements

- Mosquitto MQTT Broker (installed locally)
- Multiple terminal windows (or use `tmux`, `screen`, or multiple command prompts)
- MQTT client tools (`mosquitto_pub`, `mosquitto_sub`)
- Linux, macOS, or Windows (with Mosquitto tools installed)

---

## 🛠️ Step 1: Install Mosquitto

### 🐧 On Ubuntu/Debian:
```bash
sudo apt update
sudo apt install mosquitto mosquitto-clients
```

### 🪟 On Windows:
- Download installer from: [https://mosquitto.org/download](https://mosquitto.org/download)

---

## 🚀 Step 2: Start Mosquitto Broker

```bash
mosquitto
```

> This starts the broker on `localhost:1883`.

Open a **new terminal** for each sector (subscriber or publisher).

---

## 🏕️ Step 3: Define Mahakumbh Sectors (as Topics)

Each sector in Mahakumbh is represented as an MQTT topic:

- `mahakumbh/food`
- `mahakumbh/security`
- `mahakumbh/transport`
- `mahakumbh/health`

---

## 📥 Step 4: Subscribe to Topics (Sector Terminals)

Open **separate terminals** for each sector and run:

### 🍲 Food Sector Terminal

```bash
mosquitto_sub -h localhost -t "mahakumbh/food"
```

### 🛡️ Security Sector Terminal

```bash
mosquitto_sub -h localhost -t "mahakumbh/security"
```

### 🚌 Transport Sector Terminal

```bash
mosquitto_sub -h localhost -t "mahakumbh/transport"
```

### 🏥 Health Sector Terminal

```bash
mosquitto_sub -h localhost -t "mahakumbh/health"
```

---

## 📤 Step 5: Publish Messages (From Organizer or Sensors)

In a **publisher terminal**, send alerts or updates:

### Example: Food Alert

```bash
mosquitto_pub -h localhost -t "mahakumbh/food" -m "Free food available at Gate 2"
```

### Example: Security Alert

```bash
mosquitto_pub -h localhost -t "mahakumbh/security" -m "Crowd congestion near Sector 4"
```

### Example: Health Message

```bash
mosquitto_pub -h localhost -t "mahakumbh/health" -m "Medical camp setup at Sector 7"
```

---

## 🌐 Step 6: Advanced — Use Wildcards

To subscribe to **all sectors at once**:

```bash
mosquitto_sub -h localhost -t "mahakumbh/#"
```

> This will receive messages from all topics under `mahakumbh/`.

---

## 🧪 Testing the Simulation

- Open terminals for each **sector** using `mosquitto_sub`.
- Open another terminal for **organizer** to publish updates using `mosquitto_pub`.
- Watch the messages appear in real time in the appropriate sector's terminal.

---

## 🧘 Troubleshooting

- Ensure **Mosquitto broker** is running (`mosquitto` command).
- Check **localhost** and port **1883** are correct.
- Use `mosquitto_sub -d ...` for debug output.
- Firewall or antivirus may block port 1883 on some systems.

---

## 📘 Conclusion

You’ve successfully implemented a **Mahakumbh MQTT simulation** using:

- **Mosquitto broker**
- **Multiple MQTT clients**
- A **publish/subscribe architecture**

This model mimics real-world **IoT messaging** between **event sectors** like **food**, **security**, and **health**, and can be extended to large-scale **smart city** or **event-based** IoT systems.