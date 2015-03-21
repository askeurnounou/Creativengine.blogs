const int ledPin=13;
void setup()
{
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);
}
void loop()
{
  digitalWrite(ledPin,!digitalRead(ledPin));
  delay(1000);
}
}
