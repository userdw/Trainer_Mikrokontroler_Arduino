#include <DHT.h>
DHT dht(2, DHT11);

void setup(){
 Serial.begin(9600);
 dht.begin();
}

void loop(){
 float kelembaban = dht.readHumidity();
 float suhu = dht.readTemperature();
 Serial.print("Kelembaban: ");
 Serial.print(kelembaban);
 Serial.print("%RH");
 Serial.print(" ");
 Serial.print("Suhu: ");
 Serial.print(suhu);
 Serial.println("°C");
}
