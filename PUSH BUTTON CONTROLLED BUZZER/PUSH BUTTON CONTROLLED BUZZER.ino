// C++ code
//
int buzzPin=2;
int dT=1000;
int pushPin=3;
int buttonVal;
void setup()
{
  pinMode(buzzPin, OUTPUT);
  pinMode(pushPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonVal=digitalRead(pushPin);
  Serial.println(buttonVal);
  if(buttonVal==0){
    digitalWrite(buzzPin, HIGH);
  }
  else{
    digitalWrite(buzzPin, LOW);
    
  }  
}