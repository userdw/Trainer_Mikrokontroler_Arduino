#define pinBuzzer 3
#define pinReedMagnetic 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinReedMagnetic, INPUT_PULLUP);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool baca_ReedMagnetic = digitalRead(pinReedMagnetic);
  if(baca_ReedMagnetic == HIGH){
    digitalWrite(pinBuzzer, HIGH);
  }
  else{
    digitalWrite(pinBuzzer, LOW);
  }
}
