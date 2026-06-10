// C++ code
//
int redPin=3;
int yellowPin=4;
int greenPin=5;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop()
{
  digitalWrite(redPin,HIGH);
  digitalWrite(yellowPin,LOW);
  digitalWrite(greenPin,LOW);
  delay(5000); 
  
  digitalWrite(redPin,HIGH);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(greenPin,LOW);
  delay(2000); 
  
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,LOW);
  digitalWrite(greenPin,HIGH);
  delay(5000); 
  
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(greenPin,LOW);
  delay(2000); 
  

}