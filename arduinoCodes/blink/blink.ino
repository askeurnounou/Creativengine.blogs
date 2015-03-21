const int ledPin=13;// give name to pin 13
void setup()// this runs just once
{
  pinMode(ledPin,OUTPUT);// set the pin 13 to output
  digitalWrite(ledPin,LOW);// pull pin 13 to ground
}
void loop()// keeps on running again and again
{
  digitalWrite(ledPin,HIGH);// turn on the LED
  delay(1000);// wait for 1sec.
  digitalWrite(ledPin,LOW);//turn off the led
  delay(1000);
  
}
