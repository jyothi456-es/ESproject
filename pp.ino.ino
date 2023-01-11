#include<LiquidCrystal.h>
#include<string.h>
#define buzzer 20;
int buttonstate=0;
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int redpin=9;
int greenpin=8;
user password="1234";
int position=0;
int wrong=0;
int total=0;
void setup()
{
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  lcd.begin(16,2);
  lcd.print("DOOR LOCK SYSTEM");
  delay(2000);
  lcd.clear();
  pinMode(buzzer,OUTPUT);
}
void loop()
{
 lcd.clear();
 lcd.print("Enter the password");
 delay(100);
 pushbutton=i;
 pushbutton=digitalRead(i);
 for(i=1;i<=9;i++)
 {
  if(pushbutton==HIGH)
  {
    digitalWrite(lcd.display(),HIGH);
  }
  else
  {
    digitalWrite(lcd.display(),LOW);
  }
 }
}
void locked()
{
  if(user password)
  {
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(redpin,HIGH);
    digitalWrite(greenpin,LOW);
    delay(1000);
  }
}
void buzzer()
{
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
  delay(1000);
  lcd.clear();
  lcd.setcursor(16,2);
  lcd.print("wrong password");
  delay(2000);
  while(1)
  {
    lcd.scrollDisplayLeft();
    delay(200);
  }
}
