#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define pinPB_KeSatu 2
#define pinPB_KeDua 3

void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  pinMode(pinPB_KeSatu, INPUT_PULLUP);
  pinMode(pinPB_KeDua, INPUT_PULLUP);
  lcd.setCursor(0,0);
  lcd.print("Halo");
  lcd.setCursor(0,1);
  lcd.print("Selamat Pagi");
}

void loop(){
  bool bacaPB_KeSatu = digitalRead(pinPB_KeSatu);
  bool bacaPB_KeDua = digitalRead(pinPB_KeDua);
  if(bacaPB_KeSatu == LOW){
    Serial.println("Ditekan");
    lcd.noBacklight();
  }
  else{
    lcd.backlight();
  }
  if(bacaPB_KeDua == LOW){
    Serial.println("Ditekan");
    lcd.clear();
  }
}
