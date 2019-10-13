//a
#include <LiquidCrystal.h>


LiquidCrystal lcd(12 , 11, 5, 4, 3, 2);
int buttonpin = 8;
int buttonstate = 0;


void setup()
{
pinMode(buttonpin,INPUT);
lcd.begin(20,2);
	
}

void loop()
{
  buttonstate = digitalRead(buttonpin);
  if(buttonstate == LOW){
    lcd.setCursor(0,0);
    lcd.print("Nirun C");
    lcd.setCursor(0,1);
    lcd.print("DMT#10 60080501609");
    }
	
}
