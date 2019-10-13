
int ledpin1  = 13; 
int ledpin2  = 12; 
int ledpin3  = 11; 
int ledpin4  = 10; 
int ledpin5  = 9; 
int sensorpin = A0;
int sensorvalue = 0;
int buttonpin = 2;
int buttonstate = 0;


void setup() {
 
  
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(ledpin4,OUTPUT);
  pinMode(ledpin5,OUTPUT);
  pinMode(sensorpin,INPUT);
  pinMode(buttonpin,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  sensorvalue = analogRead(sensorpin);
   if(sensorvalue >= 0 && sensorvalue <= 204)
   {
    digitalWrite(ledpin1,HIGH);
    digitalWrite(ledpin2,LOW);
    digitalWrite(ledpin3,LOW);
    digitalWrite(ledpin4,LOW);
    digitalWrite(ledpin5,LOW);
    
    }
    if(sensorvalue >= 205 && sensorvalue <= 512)
   {
    digitalWrite(ledpin1,LOW);
    digitalWrite(ledpin2,HIGH);
    digitalWrite(ledpin3,LOW);
    digitalWrite(ledpin4,LOW);
    digitalWrite(ledpin5,LOW);
    
    }
    if(sensorvalue >= 512 && sensorvalue <= 818)
   {
    digitalWrite(ledpin1,LOW);
    digitalWrite(ledpin2,LOW);
    digitalWrite(ledpin3,HIGH);
    digitalWrite(ledpin4,LOW);
    digitalWrite(ledpin5,LOW);
    
    }
    if(sensorvalue >= 819 && sensorvalue <= 999)
   {
    digitalWrite(ledpin1,LOW);
    digitalWrite(ledpin2,LOW);
    digitalWrite(ledpin3,LOW);
    digitalWrite(ledpin4,HIGH);
    digitalWrite(ledpin5,LOW);
    
    }
    if(sensorvalue >= 1000)
   {
    digitalWrite(ledpin1,LOW);
    digitalWrite(ledpin2,LOW);
    digitalWrite(ledpin3,LOW);
    digitalWrite(ledpin4,LOW);
    digitalWrite(ledpin5,HIGH);
    
    }
    buttonstate = digitalRead(buttonpin);
    if(buttonstate == LOW){
      digitalWrite(ledpin1,LOW);
      digitalWrite(ledpin2,LOW);
      digitalWrite(ledpin3,LOW);
      digitalWrite(ledpin4,LOW);
      digitalWrite(ledpin5,LOW);
      
      }
    
    Serial.println(sensorvalue);
    Serial.println(sensorvalue);
    delay(200);
}
