#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(2,OUTPUT);
Serial.begin(9600);
lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
float temp_lm35 = analogRead(A0);
float temp_ldr  = analogRead(A1);
float temp_ir   = analogRead(A2);
float val=0;
val=(5.0*temp_lm35*100.0)/1024;
Serial.println(temp_ir);

lcd.print ("Temp:");
lcd.setCursor(8,0);
lcd.print(val);
lcd.setCursor(0,1);
lcd.print ("Inte:");
lcd.setCursor(8,1);
lcd.print(temp_ldr/10);
lcd.setCursor(12,1);
if (temp_ir > 75)
  lcd.print("Near");
else
  lcd.print("Far");
delay(1000);
lcd.clear();


//if (val > 300){
//  digitalWrite(2,HIGH);
//  delay(5000);
//  digitalWrite(2,LOW);
//}

}
