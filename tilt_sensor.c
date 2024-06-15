/*
    Project name : Tilt Sensor
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-tilt-sensor
*/

const int tiltSensorPin = 2; // Digital pin connected to tilt sensor module

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(tiltSensorPin, INPUT); // Set tilt sensor pin as input
}

void loop() {
  int sensorValue = digitalRead(tiltSensorPin); // Read tilt sensor state

  // Check if tilt sensor is tilted or not
  if (sensorValue == HIGH) {
    Serial.println("Tilt sensor is tilted!");
  } else {
    Serial.println("Tilt sensor is not tilted.");
  }

  delay(500); // Add a small delay before the next reading
}
