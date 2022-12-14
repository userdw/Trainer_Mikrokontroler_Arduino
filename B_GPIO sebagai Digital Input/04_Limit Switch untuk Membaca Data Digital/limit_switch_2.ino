#define pinLimitSwitch 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLimitSwitch, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool bacaPin_LS = digitalRead(pinLimitSwitch);
  Serial.println(bacaPin_LS);
}
