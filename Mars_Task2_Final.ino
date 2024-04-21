int motorpin=5;
int dirpin=4;
int trigpin=10;
int echopin=11;
void setup()
{
  Serial.begin(9600);
  pinMode(motorpin,OUTPUT);
  pinMode(dirpin,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}
 
void loop()
{
  digitalWrite(trigpin,LOW);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  int time=pulseIn(echopin,HIGH);
  float distance=time*0.034/2;
  Serial.println(distance);
  delay(1000);
  if(distance>100)
  {
    analogWrite(motorpin,150);
    digitalWrite(dirpin,HIGH);
    delay(1000);
  }
  else if(distance>=75 && distance<=100)
  {
    analogWrite(motorpin,75);
    digitalWrite(dirpin,HIGH);
    delay(1000);
  }
  else if(distance>=50 && distance<75)
  {
    analogWrite(motorpin,0);
    delay(1000);
  }
  else if(distance>=25 && distance<50)
  {
    analogWrite(motorpin,75);
    digitalWrite(dirpin,LOW);
    delay(1000);
  }
  else if(distance<25)
  {
    analogWrite(motorpin,150);
    digitalWrite(dirpin,LOW);
    delay(1000);
  }
  delay(1000);
}
