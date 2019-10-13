const int buttonPin = 2;
const int ledPin = 13;
const int ledPin2 = 12;
int buttonState = 0;
void setup()
{
pinMode(ledPin, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(buttonPin,INPUT);
}
void loop()
{
buttonState = digitalRead(buttonPin);
if (buttonState == LOW)
{
digitalWrite(ledPin, HIGH);
delay (1800);
digitalWrite(ledPin2, HIGH);

}
else
{
digitalWrite(ledPin, LOW);
}
}
