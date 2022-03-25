 // pins and variables
#define echoPin 4               
#define trigPin 5
#define delayTime 3000
#define motorPin 10           
int distance;
int long duration;

void setup()
{
  pinMode(echoPin,INPUT);        // defining pin modes
  pinMode(trigPin,OUTPUT);  
  pinMode(motorPin, OUTPUT);        
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance=(duration*0.034/2);   // now you got the distance 

  if(distance<=20)               // if the hand/object comes under 20cm it dispense sanitizer
  {  
    digitalWrite(motorPin,HIGH);    
    delay(delayTime);                  
    digitalWrite(motorPin,LOW);     
    delay(delayTime);                 
  }
  else 
  {
    digitalWrite(motorPin,LOW);     
  }
}
