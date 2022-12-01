#define ledMerah 2
#define ledHijau 3
#define ledBiru 4

void warnaRGB(bool logikaMerah, bool logikaHijau, bool logikaBiru){
  digitalWrite(ledMerah, logikaMerah);
  digitalWrite(ledHijau, logikaHijau);
  digitalWrite(ledBiru, logikaBiru);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ledMerah, OUTPUT);
  pinMode(ledHijau, OUTPUT);
  pinMode(ledBiru, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  warnaRGB(LOW, HIGH, HIGH);
  delay(1000);
  warnaRGB(HIGH, LOW, HIGH);
  delay(1000);
  warnaRGB(HIGH, HIGH, LOW);
  delay(1000);
}
