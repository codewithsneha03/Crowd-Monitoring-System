# Smart Crowd Monitoring and Stampede Prevention System using CSI-Based Crowd Sensing

## Project Overview

Large gatherings such as Kumbh Mela, Hajj, temple festivals, concerts, and railway stations often face the risk of overcrowding and stampedes. Traditional monitoring methods such as manual observation and CCTV cameras have limitations in large and highly congested environments.

This project proposes a Computer Networks and IoT based crowd monitoring system that utilizes Channel State Information (CSI) sensing to estimate crowd density in real time. The collected information is transmitted through MQTT-based communication networks to a central monitoring system, where crowd conditions are analyzed and displayed through a live dashboard.

The objective is to provide early warnings, assist authorities in identifying dangerous crowd conditions, and support faster decision-making during emergencies.

---

## Key Features

* Real-time crowd density estimation
* CSI-based device-free crowd sensing
* IoT-enabled sensing architecture
* MQTT-based communication
* Real-time dashboard monitoring
* Risk level classification (Safe, Warning, Danger)
* Emergency alert generation
* Scalable architecture for large public events

---

## Technologies Used

### Computer Networks

* TCP/IP
* MQTT Protocol
* Client-Server Architecture
* WebSocket Communication
* Software Defined Networking (Conceptual)

### IoT

* ESP32 Sensor Nodes
* Wireless Communication
* Real-Time Data Collection

### Software Tools

* Wokwi ESP32 Simulator
* HiveMQ MQTT Broker
* Node-RED Dashboard
* GitHub Repository

---

## Proposed Architecture

CSI Sensors
↓
MQTT Communication Network
↓
Central Processing Server
↓
Risk Analysis Engine
↓
SDN Controller
↓
Dashboard / Signboards / PA Systems / Alerts

---

## Research Motivation

Recent research shows that WiFi probe-sniffing methods are becoming less reliable because modern smartphones use MAC randomization, privacy protection mechanisms, and reduced probe transmissions.

Therefore, current research trends are moving toward CSI-based crowd sensing, where crowd density is estimated from wireless signal disturbances caused by human presence rather than by counting mobile devices.

This approach:

* Improves privacy
* Does not require user participation
* Does not require GPS
* Does not require mobile applications
* Can work even when users are not connected to WiFi

---

## Live Dashboard

The real-time crowd monitoring dashboard can be accessed at:

https://mobster-unbraided-umbilical.ngrok-free.dev/ui

Features:
- Zone-wise crowd density monitoring
- Risk level detection
- Emergency alert generation

Note: The dashboard is available only while Node-RED and ngrok are running.

---

## Future Scope

* Integration with real CSI sensing hardware
* AI-based crowd prediction
* Smart city integration
* Multi-location crowd monitoring
* Automated emergency response systems

---

## Author

Name: Sneha H