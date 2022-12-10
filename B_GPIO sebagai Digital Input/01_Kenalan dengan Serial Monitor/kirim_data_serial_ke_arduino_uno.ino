char data_komputer;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 while(Serial.available() > 0){
    data_komputer = Serial.read();
    Serial.print(data_komputer); 
    delay(2);
  }
}
