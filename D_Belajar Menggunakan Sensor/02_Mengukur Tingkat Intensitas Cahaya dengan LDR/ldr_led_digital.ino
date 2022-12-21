#define pinLDR 5
#define LEDMerah 4
#define LEDHijau 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDMerah, OUTPUT);
  pinMode(LEDHijau, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool bacaLDR = digitalRead(pinLDR);
  Serial.println(bacaLDR);
  if(bacaLDR == LOW){
    digitalWrite(LEDHijau, HIGH);
    digitalWrite(LEDMerah, LOW); 
  }
  else{
    digitalWrite(LEDHijau, LOW);
    digitalWrite(LEDMerah, HIGH);
  }
}
