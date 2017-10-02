#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};

byte frowney[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B01110,
  B10001,
  B00000,
  B00000
};  

void setup() {
  
  lcd.createChar(0, smiley);
//  lcd.createChar(1,frowney);
  lcd.begin(16, 2);  
  lcd.print("1*10 = 10");
  lcd.setCursor(10,0);
  lcd.write(byte(0));
  
//  lcd.write(byte(1));
}

void loop() {}

