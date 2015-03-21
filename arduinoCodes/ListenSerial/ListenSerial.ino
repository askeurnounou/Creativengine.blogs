const int ledPin=13;
char val;
void setup()
{
  Serial.begin(9600);// Enable Serial at a baud rate of 9600
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);
}
void loop()
{
  if(Serial.available()>0)// gets the number of bytes available to read
  {
    val=Serial.read();// reads the character and stores in in val
    if(val=='h')// checks if the received character is 'h' or not
    {
  digitalWrite(ledPin,!digitalRead(ledPin));// toggles the LED
 
    }
  }
}
