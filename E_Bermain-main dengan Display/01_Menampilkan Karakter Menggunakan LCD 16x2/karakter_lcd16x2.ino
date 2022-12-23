#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("ABCDEFGH");
  lcd.setCursor(0,1);
  lcd.print("123456789");
}
