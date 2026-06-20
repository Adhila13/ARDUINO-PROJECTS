// C++ code
//
int ledPin=2;
int sensorVal;
float voltageVal;
float tempVal;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorVal=analogRead(A0);
  Serial.print(sensorVal);
  Serial.println("sensor value");
  voltageVal=sensorVal*(5.0/1023.0);
  tempVal=(voltageVal-0.5)*100;
  Serial.print(tempVal);
  Serial.println("temperature");
  if(tempVal>25.0){
      digitalWrite(ledPin, HIGH);
  }
  else{
      digitalWrite(ledPin, LOW);
  }
}