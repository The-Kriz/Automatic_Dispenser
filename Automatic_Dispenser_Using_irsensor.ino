 // pins and variables
#define irSensor 9
#define delayTime 3000
#define motorPin 10           
int distance;
int long duration;

void setup()
{
  
  pinMode(irSensor,INPUT);        // defining pin modes  
  pinMode(motorPin, OUTPUT);  
}

void loop()
{
  if (digitalRead(irSensor) == 0)   // if the hand/object comes under ir sensor it dispense sanitizer 
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

 
