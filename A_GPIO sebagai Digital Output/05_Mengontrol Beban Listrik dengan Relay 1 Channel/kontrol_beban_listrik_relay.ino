#define pinRelay 3

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRelay, OUTPUT);
  digitalWrite(pinRelay, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRelay, LOW);
}
