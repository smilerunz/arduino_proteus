int trigpin = 13;
int echopin = 12;
int ledpin1 = 5;
int ledpin2 = 6;
int ledpin3 = 7;
long duration;
 float cm;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin1,OUTPUT);
   pinMode(ledpin2,OUTPUT);
    pinMode(ledpin3,OUTPUT);
    pinMode(echopin,INPUT);
 pinMode(trigpin,OUTPUT);
}

void loop() {
 
 
 digitalWrite(trigpin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW); 
 duration = pulseIn(echopin,HIGH);
 cm = microsecondsToCentimeters(duration);
 
 delay(500); 
 if(cm >= 0 && cm <=199){
  digitalWrite(ledpin1,HIGH);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
  }

  if(cm >= 200 && cm <=399){
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,LOW);
  }

  if(cm >= 400 ){
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,HIGH);
  }


  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

}
float microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
  }
