/*
Created by: Adrina Peighambarzadeh
Project: Potentiometer + Servo Control
Servo angle changes based on potentiometer value
*/

#include <Servo.h>

// Servo setup
const int SERVO_PIN = 2;
Servo myServo;

// Potentiometer setup
const int POT_PIN = A0;

int potValue;
int angle;

void setup() {
  Serial.begin(9600);

  myServo.attach(SERVO_PIN);

  Serial.println("System Ready");
}

void loop() {

  // --- POTENTIOMETER CODE ---

  potValue = analogRead(POT_PIN);  // 0–1023

  Serial.print("Pot Value: ");
  Serial.println(potValue);


  // --- SERVO CONTROL ---

  // Manual conversion (no map function)
  angle = (potValue / 1023.0) * 180;

  myServo.write(angle);

  Serial.print("Servo Angle: ");
  Serial.println(angle);

  delay(10);
}
