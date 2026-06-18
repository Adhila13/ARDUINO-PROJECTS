// C++ code
//
int ledPin=3;
int ldrPin=A0;
int ldrVal;
int digVal;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  ldrVal=analogRead(A0);
  Serial.println(ldrVal);
  digVal=map(ldrVal,6,650,255,0);
  digVal=constrain(digVal,0,255);
  Serial.println(digVal);
  analogWrite(ledPin,digVal);
  
}