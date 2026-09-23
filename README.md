PROJECT TITLE
IoT Light Monitoring System Using ESP32
PROBLEM STATEMENT
In many places, lights are kept ON even when sufficient light is available. This causes unnecessary electricity consumption. This project monitors the surrounding light intensity using an LDR sensor and automatically controls an LED using an ESP32.
OBJECTIVES
Measure light intensity using an LDR sensor.
Use ESP32 to process the sensor reading.
Automatically turn the LED ON when it is dark.
Turn the LED OFF when sufficient light is available.
Send the light sensor data to ThingSpeak for monitoring.
COMPONENTS AND SOFTWARE USED:
Hardware
ESP32 DevKit V1
LDR Photoresistor
LED
220 ohm resistor
Software
Wokwi
Arduino IDE
ThingSpeak
CIRCUIT CONNECTIONS
LDR VCC connected to ESP32 3.3V
LDR GND connected to ESP32 GND
LDR AO connected to ESP32 GPIO 34
LED positive pin connected to ESP32 GPIO 2
LED negative pin connected to 220 ohm resistor
Other end of resistor connected to GND
WORKING PRINCIPLE
The LDR detects the amount of light present in the surroundings.
The ESP32 reads the LDR value through GPIO 34.
When the light level is low, the ESP32 turns the LED ON.
When the light level is high, the ESP32 turns the LED OFF.
The measured light value can also be sent to ThingSpeak and displayed as a graph.
PROGRAM
const int ldrPin = 34;
const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue < 1500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
PROGRAM EXPLANATION
The ldrPin variable represents GPIO 34, which receives the LDR sensor value.
The ledPin variable represents GPIO 2, which controls the LED.
analogRead() reads the light intensity from the LDR.
If the light value is below the selected threshold, the LED turns ON.
If the light value is above the threshold, the LED turns OFF.
The Serial Monitor displays the measured light value.
OUTPUT
When the surroundings are dark, the LED turns ON.
When the surroundings are bright, the LED turns OFF.
The light sensor value is displayed in the Wokwi Serial Monitor.
THINGSPЕAK
The ESP32 will send the LDR light value to ThingSpeak.
ThingSpeak will display the received light values as a graph.
ThingSpeak Channel Link:
Add your ThingSpeak channel link here.
WOKWI
Wokwi Project Link:
Add your Wokwi project link here.
APPLICATIONS
Automatic lighting systems
Smart homes
Energy saving systems
Street lighting systems
IoT-based environmental monitoring
LIMITATIONS
The LDR provides an approximate measurement of light intensity.
The LED is only used as an indicator in the simulation.
The system depends on Wi-Fi for sending data to ThingSpeak.
FUTURE SCOPE
The system can be expanded by adding more sensors.
Multiple lights can be controlled.
A mobile monitoring system can be developed.
Automatic brightness control can be added.
TEAM MEMBERS
Name:
Register Number:
Team:
