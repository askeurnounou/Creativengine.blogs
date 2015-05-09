// Deepankar Maithani
float temp;
int gas;
int tempPin = A0;
int gasPin=A1

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  temp = analogRead(tempPin);
  gas=analogRead(gasPin);
  temp = temp * 0.48828;
  Serial.print("Temperature=")
  Serial.print(temp);
  Serial.print(',');
  Serial.print("Gas Sensor output")
  Serial.print(gas);
  delay(1000);
}

