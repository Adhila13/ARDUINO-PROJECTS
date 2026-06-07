// C++ code
//
int pinNum1=2;
int pinNum2=3;
int pinNum3=4; 
int delayTime=2000;
void setup()
{
  pinMode(pinNum1, OUTPUT);
  pinMode(pinNum2, OUTPUT);
  pinMode(pinNum3, OUTPUT);
}

void loop()
{
  digitalWrite(pinNum1, HIGH);
  digitalWrite(pinNum2, LOW);
  digitalWrite(pinNum3, HIGH);
  delay(delayTime);

  digitalWrite(pinNum1, LOW);
  digitalWrite(pinNum2, HIGH);
  digitalWrite(pinNum3, LOW);
  delay(delayTime);
}