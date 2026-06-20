# Demo Execution Guide

## Objective

This prototype demonstrates real-time crowd monitoring using MQTT communication and a Node-RED dashboard.

---

## Required Software

1. Node-RED
2. ngrok
3. Web Browser
4. Wokwi Simulation

---

## Step 1: Start Node-RED

Open Command Prompt:

node-red

Wait until:

Server now running at http://127.0.0.1:1880/

---

## Step 2: Start ngrok

Open another terminal:

ngrok http 1880

Copy the generated URL.

Example:

https://xxxxxxxx.ngrok-free.dev

Dashboard URL:

https://xxxxxxxx.ngrok-free.dev/ui

---

## Step 3: Open Wokwi Project

Open:

https://wokwi.com/projects/467196218023627777

Click:

Start Simulation

---

## Step 4: Verify MQTT Communication

The serial monitor should display:

Zone A Density
Zone B Density
Zone C Density
Zone D Density

Data Published to MQTT

---

## Step 5: Open Dashboard

Open:

https://xxxxxxxx.ngrok-free.dev/ui

The dashboard will display:

* Zone-wise Density
* Risk Levels
* Emergency Alerts

---

## Dashboard Access

Open the dashboard using:

https://mobster-unbraided-umbilical.ngrok-free.dev/ui

---

## Expected Results

Low Density:
SAFE

Medium Density:
WARNING

High Density:
DANGER

Emergency Alert:
STAMPADE RISK DETECTED

---

## Demonstration Workflow

Wokwi ESP32
↓
HiveMQ MQTT Broker
↓
Node-RED
↓
Dashboard
↓
Risk Detection

---

## Note

The current implementation is a prototype demonstrating the communication architecture.

In a real deployment, simulated values generated in Wokwi would be replaced with actual CSI measurements obtained from wireless sensing hardware.
