#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.clear();
  pinMode(10,OUTPUT);
  digitalWrite(10,HIGH);
}

int c = 1;
int c2 = 1;
void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  c = c2;
  while(c){
    lcd.print("*");
    c = c-1;
    }
  //delay(200);
  c2 =  c2 + 1;
  if(c2 == 17){c2 = 1;}
  lcd.setCursor(0,1);
  c = c2;
  while(c){
    lcd.print("*");
    c = c-1;
  }
  delay(200);
  lcd.clear();
}
