#define pinReedMagnetic 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinReedMagnetic, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool baca_ReedMagnetic = digitalRead(pinReedMagnetic);
  Serial.println(baca_ReedMagnetic);
}
