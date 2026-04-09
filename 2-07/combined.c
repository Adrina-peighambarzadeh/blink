/*
Created by: Adrina Peighambarzadeh
Project: Distance Sensor + Servo Control
If object is closer than 50 cm, servo moves
*/

#include <Servo.h>

// Servo setup
const int SERVO_PIN = 9;
Servo myServo;

// Distance sensor setup
const int TRIG_PIN = 3;
const int ECHO_PIN = 2;

long duration;
int distance;

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  myServo.attach(SERVO_PIN);

  // Start at neutral position
  myServo.write(90);
  Serial.println("System Ready");
}

void loop() {

  // --- DISTANCE SENSOR CODE ---

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


  // --- SERVO CONTROL ---

  if (distance < 50) {
    Serial.println("Object detected! Moving servo");

    myServo.write(150);
    delay(500);

    myServo.write(30);
    delay(500);
  }
  else {
    // Stay in middle if nothing is close
    myServo.write(90);
  }

  delay(200);
}
