#include <DHT.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(6, DHT11);

void setup(){
 Serial.begin(9600);
 lcd.begin();
 dht.begin();
 lcd.backlight();
}

void loop(){
 float kelembaban = dht.readHumidity();
 float suhu = dht.readTemperature();
 lcd.setCursor(0,0);
 lcd.print("Suhu: ");
 lcd.print(suhu);
 lcd.setCursor(0,1);
 lcd.print("Klembaban: ");
 lcd.print(kelembaban);
 delay(50);
 lcd.clear();
}
