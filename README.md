# SPEECH_RECOGNITION_-SYSTEM

## Project Overview

This project demonstrates a basic Speech Recognition System using Arduino Uno. The system is designed to control a device based on predefined commands. In the Tinkercad simulation environment, speech commands are represented using Serial Monitor inputs.

## Objective

To simulate a command-based speech recognition system capable of controlling a device through recognized commands.

## Components Used

* Arduino Uno
* Tinkercad Simulation Environment
* Built-in LED (Pin 13)
* Serial Monitor

## Working Principle

A speech recognition system normally converts spoken words into digital commands. Due to simulation limitations, command inputs are provided through the Serial Monitor.

The Arduino reads the incoming commands and performs the corresponding action.

### Commands

* `1` → Device ON
* `0` → Device OFF

The built-in LED on Arduino Pin 13 represents the controlled device.

## System Design

```text
User Command
      ↓
Serial Monitor
      ↓
Arduino Uno
      ↓
Device Control (LED)
```

## Arduino Functionality

1. Initialize serial communication.
2. Wait for incoming commands.
3. Turn the device ON when command `1` is received.
4. Turn the device OFF when command `0` is received.
5. Display status messages on the Serial Monitor.

## Simulation Procedure

1. Open the project in Tinkercad.
2. Upload the Arduino code.
3. Start the simulation.
4. Open the Serial Monitor.
5. Enter `1` and click Send.
6. Observe the LED turning ON.
7. Enter `0` and click Send.
8. Observe the LED turning OFF.

## Sample Output

```text
Ready
Device ON
Device OFF
```

## Applications

* Voice-Controlled Home Automation
* Smart Device Control
* Assistive Technologies
* IoT-Based Automation Systems

## Files Included

* speech_recognition_system.ino
* system_design.png
* output_demo.png
* README.md

## Outcome

Successfully simulated a basic speech recognition system for command-based device control using Arduino Uno and the Tinkercad simulation environment.
