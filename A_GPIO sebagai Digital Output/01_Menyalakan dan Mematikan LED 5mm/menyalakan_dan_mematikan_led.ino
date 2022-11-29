#define pinLedMerah 2

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLedMerah, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLedMerah, HIGH);
  delay(1000);
  digitalWrite(pinLedMerah, LOW);
  delay(1000);
}
