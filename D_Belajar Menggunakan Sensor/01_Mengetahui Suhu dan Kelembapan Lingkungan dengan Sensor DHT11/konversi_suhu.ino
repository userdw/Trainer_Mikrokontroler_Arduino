#include <DHT.h>
DHT dht(2, DHT11);

float reamur = 0;
float fahrenheit = 0;
float kelvin = 0;

void setup(){
 Serial.begin(9600);
 dht.begin();
}

void loop(){
 float suhu = dht.readTemperature();
 reamur = 0.8*suhu;
 fahrenheit = (1.8*suhu) + 32;
 kelvin = suhu + 273;
 Serial.print("Suhu :");
 Serial.print("  ");
 Serial.print(suhu);
 Serial.print("°C");
 Serial.print("  ");
 Serial.print(reamur);
 Serial.print("°R");
 Serial.print("  ");
 Serial.print(fahrenheit);
 Serial.print("°F");
 Serial.print("  ");
 Serial.print(kelvin);
 Serial.println("°K");
}
