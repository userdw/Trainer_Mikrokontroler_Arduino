#define pin1DM 13
#define pin2DM 12
#define pin5DM 11
#define pin7DM 10
#define pin8DM 9
#define pin9DM 8
#define pin14DM 7

#define pin3DM A0
#define pin4DM A1
#define pin6DM A2
#define pin10DM A3
#define pin13DM A4

#define 1 HIGH
#define 0 LOW

bool pin1, pin2, pin3, pin4, pin5, pin6;
bool pin7, pin8, pin9, pin10, pin13, pin14;

void dot_matrix(pin1, pin2, pin3, pin4, pin5, pin6, pin7, pin8, pin9, pin10, pin13, pin14){
  //Anoda
  digitalWrite(pin1DM, pin1);
  digitalWrite(pin2DM, pin2);
  digitalWrite(pin5DM, pin5);
  digitalWrite(pin7DM, pin7);
  digitalWrite(pin8DM, pin8);
  digitalWrite(pin9DM, pin9);
  digitalWrite(pin14DM, pin14);  

  //Katoda
  digitalWrite(pin3DM, pin3);
  digitalWrite(pin4DM, pin4);
  digitalWrite(pin6DM, pin6);
  digitalWrite(pin10DM, pin10);
  digitalWrite(pin13DM, pin13);
}

void baris_satu(){
  dot_matrix(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
}

void baris_dua(){
  dot_matrix(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
}

void baris_tiga(){
  dot_matrix(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0);
}

void baris_empat(){
  dot_matrix(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
}

void baris_lima(){
  dot_matrix(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void baris_enam(){
  dot_matrix(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0);
}

void baris_tujuh(){
  dot_matrix(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void kolom_satu(){
  dot_matrix(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1);
}

void kolom_dua(){
  dot_matrix(1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
}

void kolom_tiga(){
  dot_matrix(1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
}

void kolom_empat(){
  dot_matrix(1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1);
}

void kolom_lima(){
  dot_matrix(1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1DM, OUTPUT);
  pinMode(pin2DM, OUTPUT);
  pinMode(pin3DM, OUTPUT);
  pinMode(pin4DM, OUTPUT);
  pinMode(pin5DM, OUTPUT);
  pinMode(pin6DM, OUTPUT);
  pinMode(pin7DM, OUTPUT);
  pinMode(pin8DM, OUTPUT);
  pinMode(pin9DM, OUTPUT);
  pinMode(pin10DM, OUTPUT);
  pinMode(pin13DM, OUTPUT);
  pinMode(pin14DM, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  baris_satu();
  delay(100);
  baris_dua();
  delay(100);
  baris_tiga();
  delay(100);
  baris_empat();
  delay(100);
  baris_lima();
  delay(100);
  baris_enam();
  delay(100);
  baris_tujuh();
  delay(100);

  kolom_satu();
  delay(100);
  kolom_dua();
  delay(100);
  kolom_tiga();
  delay(100);
  kolom_empat();
  delay(100);
  kolom_lima();
  delay(100);
}
