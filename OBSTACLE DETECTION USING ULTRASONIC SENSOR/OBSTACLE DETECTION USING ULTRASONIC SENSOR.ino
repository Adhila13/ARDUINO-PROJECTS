// C++ code
//
int buzzPin=2;
int sensorPin=3;
long duration;
float distance;
void setup()
{
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  pinMode(sensorPin, OUTPUT );
  digitalWrite(sensorPin,LOW);
  delayMicroseconds(2);
  digitalWrite(sensorPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(sensorPin,LOW);
  pinMode(sensorPin, INPUT);
  duration=pulseIn(sensorPin,HIGH);
  distance=duration*0.0343/2;
  Serial.print("distance ");
  Serial.println(distance);
  if(distance<20.0){
      tone(buzzPin, 1000);
  }
  else{
      noTone(buzzPin);
  }
}