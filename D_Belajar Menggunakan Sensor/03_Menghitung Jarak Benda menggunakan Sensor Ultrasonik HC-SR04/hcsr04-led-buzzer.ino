#define pinEcho 2
#define pinTrig 3
#define pinBuzzer 6
#define pinLED 7

long durasi; 
int jarak; 

void setup() {
  Serial.begin(9600); 
  pinMode(pinTrig, OUTPUT); 
  pinMode(pinEcho, INPUT); 
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLED, OUTPUT);
}
void loop() {
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  durasi = pulseIn(pinEcho, HIGH);
  jarak = durasi * 0.034 / 2;
  Serial.print("Jarak: ");
  Serial.print(jarak);
  Serial.println(" cm");
  if(jarak <= 5){
    Serial.println("Buzzer Aktif");
    digitalWrite(pinLED, HIGH);
    digitalWrite(pinBuzzer, HIGH);
  }
  else{
    Serial.println("Buzzer Off");
    digitalWrite(pinLED, LOW);
    digitalWrite(pinBuzzer, LOW);
  }
  delay(100);
}
