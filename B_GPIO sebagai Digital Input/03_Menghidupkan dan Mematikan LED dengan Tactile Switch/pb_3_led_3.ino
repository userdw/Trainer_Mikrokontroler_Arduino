#define pinLED_KeSatu 7
#define pinLED_KeDua 6
#define pinLED_KeTiga 5
#define pinPB_KeSatu 4
#define pinPB_KeDua 3
#define pinPB_KeTiga 2

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED_KeSatu, OUTPUT);
  pinMode(pinLED_KeDua, OUTPUT);
  pinMode(pinLED_KeTiga, OUTPUT);
  pinMode(pinPB_KeSatu, INPUT_PULLUP);
  pinMode(pinPB_KeDua, INPUT_PULLUP);
  pinMode(pinPB_KeTiga, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool bacaPB_KeSatu = digitalRead(pinPB_KeSatu);
  bool bacaPB_KeDua = digitalRead(pinPB_KeDua);
  bool bacaPB_KeTiga = digitalRead(pinPB_KeTiga);

  if(bacaPB_KeSatu == LOW && bacaPB_KeDua == HIGH && bacaPB_KeTiga == HIGH){
    digitalWrite(pinLED_KeSatu, HIGH);
    digitalWrite(pinLED_KeDua, LOW);
    digitalWrite(pinLED_KeTiga, LOW);
  }
  else if(bacaPB_KeSatu == HIGH && bacaPB_KeDua == LOW && bacaPB_KeTiga == HIGH){
    digitalWrite(pinLED_KeSatu, LOW);
    digitalWrite(pinLED_KeDua, HIGH);
    digitalWrite(pinLED_KeTiga, LOW);
  }
  else if(bacaPB_KeSatu == HIGH && bacaPB_KeDua == HIGH && bacaPB_KeTiga == LOW){
    digitalWrite(pinLED_KeSatu, LOW);
    digitalWrite(pinLED_KeDua, LOW);
    digitalWrite(pinLED_KeTiga, HIGH);
  }
  else{
    digitalWrite(pinLED_KeSatu, LOW);
    digitalWrite(pinLED_KeDua, LOW);
    digitalWrite(pinLED_KeTiga, LOW);
  }
}
