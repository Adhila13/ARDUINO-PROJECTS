// C++ code
//
int pinNum=4;
int delayTime=2000;
void setup()
{
  pinMode(pinNum, OUTPUT);
  
}

void loop()
{
  digitalWrite(pinNum, HIGH);
  delay(delayTime);
  digitalWrite(pinNum, LOW);
  delay(delayTime); 
}