/*
Created by: Adrina Peighambarzadeh
Created on: Mar 2026
RGB LED cycles through different colors
*/


void setup()
{
  pinMode(11, OUTPUT); // Red
  pinMode(12, OUTPUT); // Green
  pinMode(13, OUTPUT); // Blue
}

void loop()
{
  // RED  
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1000);

  // GREEN
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1000);

  // BLUE
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(1000);

  // RED + GREEN (YELLOW)
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1000);

  // GREEN + BLUE (CYAN)
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);

  // BLUE + RED (MAGENTA)
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(1000);

  // RED + GREEN + BLUE (WHITE)
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
}
