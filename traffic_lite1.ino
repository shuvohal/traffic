// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}