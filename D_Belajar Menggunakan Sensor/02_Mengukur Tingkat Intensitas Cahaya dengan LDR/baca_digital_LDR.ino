#define pinLDR  5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLDR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool bacaLDR = digitalRead(pinLDR);
  Serial.println(bacaLDR); 
}
