#define pinLDR A0
#define LEDMerah 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDMerah, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacaLDR = analogRead(pinLDR);
  Serial.println(bacaLDR);
  if(bacaLDR <= 150){
    digitalWrite(LEDMerah, HIGH); 
  }
  else{
    digitalWrite(LEDHijau, LOW);
  }
}
