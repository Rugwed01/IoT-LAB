# 🕉️ Implementation of Mahakumbh Simulation Using Node-RED and MQTT

This guide demonstrates how to implement a **Mahakumbh event simulation** using **Node-RED** with **MQTT**, where different **sectors** like **Food**, **Security**, **Transport**, etc., act as **subscribers** and **publishers** using the **pub/sub model**.

---

## 🧰 Requirements

- **Node-RED** installed locally
- **Mosquitto MQTT Broker** running (can use the local broker or any available broker)
- MQTT client tools (`mosquitto_pub`, `mosquitto_sub`)
- Web browser to access Node-RED interface
- Linux, macOS, or Windows (with Node-RED and Mosquitto installed)

---

## 🛠️ Step 1: Install Node-RED

### 🐧 On Ubuntu/Debian:
```bash
sudo apt update
sudo apt install nodered
```

### 🪟 On Windows:
- Download installer from [Node-RED website](https://nodered.org/docs/getting-started/).

Once Node-RED is installed, start it by running:

```bash
node-red
```

The Node-RED interface will be accessible at `http://localhost:1880`.

---

## 🚀 Step 2: Start Mosquitto Broker

If you haven’t already started the Mosquitto broker, do so with:

```bash
mosquitto
```

This will start the Mosquitto MQTT broker on `localhost:1883`.

---

## 🏕️ Step 3: Define Mahakumbh Sectors (as Topics)

In Node-RED, each sector will be an MQTT topic:

- `mahakumbh/food`
- `mahakumbh/security`
- `mahakumbh/transport`
- `mahakumbh/health`

---

## 📥 Step 4: Configure MQTT Input (Subscribe) Nodes

1. **Open Node-RED** and go to the flow editor.
2. Drag and drop the **MQTT In** node for each sector.

### Example: Food Sector Subscription

1. Drag the **MQTT In** node onto the workspace.
2. Configure it with the following:
   - **Topic:** `mahakumbh/food`
   - **Server:** `localhost:1883`
   - **Name:** `Food Sector`
3. Attach a **debug** node to output the received message.

Repeat this process for the **Security**, **Transport**, and **Health** sectors with their respective topics (`mahakumbh/security`, `mahakumbh/transport`, `mahakumbh/health`).

---

## 📤 Step 5: Configure MQTT Output (Publish) Nodes

1. Drag and drop the **MQTT Out** node for each sector.
2. Configure the MQTT output with the following settings:
   - **Topic:** `mahakumbh/food`, `mahakumbh/security`, `mahakumbh/transport`, or `mahakumbh/health`
   - **Server:** `localhost:1883`
3. Attach an **inject** node that sends a message periodically or on demand.

### Example: Food Sector Publisher

1. Drag the **Inject** node onto the workspace.
2. Set the payload to `Free food available at Gate 2` and connect it to the **MQTT Out** node with the topic `mahakumbh/food`.

Repeat this process for the **Security**, **Transport**, and **Health** sectors.

---

## 🌐 Step 6: Advanced — Use Wildcards in Node-RED

To subscribe to **all Mahakumbh sectors** at once, configure the **MQTT In** node with the wildcard `mahakumbh/#` for the topic. This will allow you to receive messages from all the topics under `mahakumbh/`.

---

## 🧪 Testing the Simulation

1. **Deploy** the flow in Node-RED.
2. In the **MQTT In** nodes, you will see messages arriving in real-time in the **debug tab**.
3. Trigger the **inject** nodes to publish messages to the various sectors.

### Example: Sending a Food Alert

Click the inject button attached to the **MQTT Out** node for the food sector. The **Food Sector** will receive the message and display it in the debug pane.

---

## 🧘 Troubleshooting

- **MQTT Broker Issue**: Ensure **Mosquitto broker** is running on the correct port (usually `1883`).
- **Node-RED Configuration**: Ensure that the MQTT server is configured correctly in Node-RED and that the topics are correct.
- **Firewall or Antivirus**: Check if any firewall or antivirus software is blocking port `1883` on your system.
- **Debugging**: Use the **debug node** in Node-RED to troubleshoot incoming and outgoing messages.

---

## 📘 Conclusion

You’ve successfully implemented a **Mahakumbh MQTT simulation** using:

- **Node-RED** for flow-based programming
- **Mosquitto broker** for MQTT communication
- A **publish/subscribe architecture**

This simulation allows you to model real-world IoT messaging between different event sectors like **food**, **security**, **transport**, and **health**. It can be scaled up to larger **smart city** or **event-based IoT systems**.