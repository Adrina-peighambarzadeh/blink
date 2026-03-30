/*
 Created by: Adrina. peighambarzadeh
 Created on: Mar 2025
 
 Turns an andistance sensor on 
*/


const int trigPin = 3;  // Connected to Trig
const int echoPin = 2;  // Connected to Echo

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  // Clear the trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the bounce back time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  // Distance = (Time x Speed of Sound) / 2
  distance = duration * 0.034 / 2;

  // Print to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(200); // Wait a bit before the next reading
}
