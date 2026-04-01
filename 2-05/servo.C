
/*
 Created by: Adrina. peighambarzadeh
 Created on: Mar 2025
 
 Turns an SERVO 90 DEGREES
*/


#include <Servo.h>

const int SERVO_PIN = 9; // Changed to Pin 9 for better compatibility
Servo myServo;

void setup() {
  Serial.begin(9600);
  Serial.println("--- Starting Servo Test ---");

  myServo.attach(SERVO_PIN);
  
  // Move to a true middle (90 degrees) to start
  Serial.println("Initializing to 90 degrees...");
  myServo.write(90); 
  delay(2000); 
}

void loop() {
  // Using a 30-150 range to avoid hitting mechanical limits
  Serial.println("Moving to 150 degrees");
  myServo.write(150);
  delay(1000);

  Serial.println("Moving to 30 degrees");
  myServo.write(30);
  delay(1000);
}
