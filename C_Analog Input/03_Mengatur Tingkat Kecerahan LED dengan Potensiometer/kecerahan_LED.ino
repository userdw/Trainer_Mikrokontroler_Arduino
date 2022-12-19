#define pinPotensiometer A0
#define pinLED 6
int bacaDataAnalog = 0;
int dataScale = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bacaDataAnalog = analogRead(pinPotensiometer);
  dataScale = map(bacaDataAnalog, 0, 1023, 0, 255);
  analogWrite(pinLED, dataScale);
  Serial.print("Data Analog :");
  Serial.print(bacaDataAnalog);
  Serial.print("   ");
  Serial.print("Hasil Scale :");
  Serial.print(dataScale);
  Serial.println("   "); 
}
