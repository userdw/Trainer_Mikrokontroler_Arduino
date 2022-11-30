#define ledMerah 6
#define ledKuning 5

int dutyCycle_ledMerah = 255;
int dutyCycle_ledKuning = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(dutyCycle_ledKuning >= 255){
    dutyCycle_ledKuning = 0;
  }
  if(dutyCycle_ledMerah <= 0){
    dutyCycle_ledMerah = 255;
  }
  analogWrite(ledMerah, dutyCycle_ledMerah);
  analogWrite(ledKuning, dutyCycle_ledKuning);
  delay(5);
  dutyCycle_ledKuning++;
  dutyCycle_ledMerah--;
}
