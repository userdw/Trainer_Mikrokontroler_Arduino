#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define pinPotensiometer A0

void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
}

void loop(){
  int bacaAnalog = analogRead(pinPotensiometer);
  lcd.setCursor(0,0);
  lcd.print("Analog : ");
  lcd.setCursor(10,0);
  lcd.print(bacaAnalog);
  delay(50);
  lcd.clear();
}
