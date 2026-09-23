# IoT Light Monitoring System Using ESP32

## Problem Statement

In many places, lights are kept ON even when sufficient light is available. This causes unnecessary electricity consumption. This project monitors the surrounding light intensity using an LDR sensor and automatically controls an LED using an ESP32.

## Objectives

1. Measure light intensity using an LDR sensor.
2. Use ESP32 to process the sensor reading.
3. Automatically turn the LED ON when it is dark.
4. Turn the LED OFF when sufficient light is available.
5. Send the light sensor data to ThingSpeak for monitoring.

## Components and Software Used

### Hardware
- ESP32 DevKit V1
- LDR Photoresistor
- LED
- 220 ohm resistor

### Software
- Wokwi
- Arduino IDE
- ThingSpeak

## Circuit Connections

LDR VCC → ESP32 3.3V  
LDR GND → ESP32 GND  
LDR AO → ESP32 GPIO 34  

LED positive pin → ESP32 GPIO 2  
LED negative pin → 220 ohm resistor  
Other end of resistor → GND  

## Working Principle

The LDR detects the amount of light present in the surroundings.

The ESP32 reads the LDR value through GPIO 34.

When the light level is low, the ESP32 turns the LED ON.

When the light level is high, the ESP32 turns the LED OFF.

The measured light value can also be sent to ThingSpeak and displayed as a graph.

## Applications

- Automatic lighting systems
- Smart homes
- Energy saving systems
- Street lighting systems

## Limitations

- Approximate light measurement
- Requires Wi-Fi for ThingSpeak

## Future Scope

- Add more sensors
- Mobile notifications
- Real lamp control using relay

## Wokwi Project Link
https://wokwi.com/projects/475871790843209729

## ThingSpeak Link

Add your ThingSpeak link here.
