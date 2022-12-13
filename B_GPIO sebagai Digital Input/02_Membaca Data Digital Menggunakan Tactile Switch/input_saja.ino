#define pinPushButton 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinPushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool baca_pb = digitalRead(pinPushButton);
  Serial.println(baca_pb);
}
