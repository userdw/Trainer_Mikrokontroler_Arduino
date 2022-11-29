#define pinLedSatu 6
#define pinLedDua 5
#define pinLedTiga 4
#define pinLedEmpat 3
#define pinLedLima 2

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLedSatu, OUTPUT);
  pinMode(pinLedDua, OUTPUT);
  pinMode(pinLedTiga, OUTPUT);
  pinMode(pinLedEmpat, OUTPUT);
  pinMode(pinLedLima, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLedSatu, HIGH);
  digitalWrite(pinLedDua, HIGH);
  digitalWrite(pinLedTiga, HIGH);
  digitalWrite(pinLedEmpat, HIGH);
  digitalWrite(pinLedLima, HIGH);
  delay(1000);
  digitalWrite(pinLedSatu, LOW);
  digitalWrite(pinLedDua, LOW);
  digitalWrite(pinLedTiga, LOW);
  digitalWrite(pinLedEmpat, LOW);
  digitalWrite(pinLedLima, LOW);
  delay(1000);
}
