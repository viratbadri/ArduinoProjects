#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(2,OUTPUT);
//Serial.begin(9600);
  lcd.begin(16, 2);
//    lcd.print("Bala murali");

}

void loop() {
  // put your main code here, to run repeatedly:
    lcd.print ("   Temperature ");
  lcd.setCursor(8,1);
  lcd.print(" C");
float temp = analogRead(A0);
float val=0;
val=(5.0*temp*100.0)/1024;
//Serial.println(val);
lcd.setCursor(4,1);
lcd.print(val);
delay(300);
lcd.clear();
//if (val > 300){
//  digitalWrite(2,HIGH);
//  delay(5000);
//  digitalWrite(2,LOW);
//}

}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
