// C++ code
//
int ledPin=9;
int buttonPin=5;
int pushButton;
void setup()
{
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  
}

void loop()
{
  pushButton=digitalRead(buttonPin);
  if(pushButton==1){
    digitalWrite(ledPin,LOW);
    
  }
  if(pushButton==0){
    digitalWrite(ledPin,HIGH);
  }  
   
  
}