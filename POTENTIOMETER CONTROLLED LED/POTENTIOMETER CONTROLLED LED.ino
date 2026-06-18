// C++ code
//
int ledPin=2;
int potPin=A0;
int potVal;
void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(potPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  potVal=analogRead(A0);
  Serial.println(potVal);
  if(potVal>200){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }  
}