#include<LiquidCrystal.h>
 LiquidCrystal lcd(2,3,4,5,12,11);
void setup() 
{
  // put your setup code here, to run once:
  lcd.begin(15,1);
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  lcd.print("BEGIN GAME");
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(digitalRead(8)==HIGH)
  {
  lcd.clear();
  }
  if(digitalRead(9)==HIGH&&digitalRead(10)==LOW)
  {
    lcd.print("PLAYER A WINS");
  }
  if(digitalRead(10)==HIGH&&digitalRead(9)==LOW)
  {
    lcd.print("PLAYER B WINS");
  }
  

}
