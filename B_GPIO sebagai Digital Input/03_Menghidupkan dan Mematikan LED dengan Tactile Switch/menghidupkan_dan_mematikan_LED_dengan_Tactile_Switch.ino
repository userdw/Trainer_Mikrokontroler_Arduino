#define pinPushButton 4
#define pinLED 5

void setup() {
  // put your setup code here, to run once:
  pinMode(pinPushButton, INPUT);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool baca_pb = digitalRead(pinPushButton);
  if(baca_pb == HIGH){
    digitalWrite(pinLED, HIGH);
  }
  else{
    digitalWrite(pinLED, LOW);
  }
}
