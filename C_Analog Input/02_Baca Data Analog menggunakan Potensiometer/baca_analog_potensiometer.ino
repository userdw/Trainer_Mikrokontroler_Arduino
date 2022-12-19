#define pinPotensiometer A0
int bacaDataAnalog = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bacaDataAnalog = analogRead(pinPotensiometer);
  Serial.println(bacaDataAnalog);
}
