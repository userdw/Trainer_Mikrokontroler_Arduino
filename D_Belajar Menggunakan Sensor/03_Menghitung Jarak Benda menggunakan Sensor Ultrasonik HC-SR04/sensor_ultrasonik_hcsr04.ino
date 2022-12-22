#define pinEcho 6 
#define pinTrig 5

long durasi; 
int jarak; 

void setup() {
  Serial.begin(9600); 
  pinMode(pinTrig, OUTPUT); 
  pinMode(pinEcho, INPUT); 
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
  delay(100);
}
