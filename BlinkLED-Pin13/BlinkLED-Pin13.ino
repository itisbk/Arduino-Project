// C++ code
//
/*
  Program to blink LED connected to pin 13 of
  Arduino Uno R3
*/

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Set to High for 1 sec
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // Set to Low for 1 sec
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}