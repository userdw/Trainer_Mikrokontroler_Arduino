# Arduino IDE Commands Cheat Sheet

Halaman ini berisi beberapa **commands** dasar yang digunakan oleh Arduino, dengan memahami commands dasar di bawah ini akan membantu kita dalam membuat skecth pada Arduino IDE.

## setup()
Fungsi ```setup()``` akan dipanggal saat pertama kali saat Arduino Uno dalam keadaan hidup. Bagian ini biasanya digunakan untuk menginisialisasi variabel, konfigurasi mode pin, penggunaan library, dan sebagainya. Fungsi setup() hanya akan **dijalankan sekali saja**.
```
void setup(){

}
```

## loop()
Setelah membuat fungsi setup() hal selanjutnya yang harus kita buat adalah membuat fungsi ```loop()```, di fungsi inilah program utama kita dijalankan dan fungsi ini akan selalu **dijalankan berulang-ulang** selama Arduino Uno dalam kondisi hidup.
```
void loop(){

}
```

## pinMode()
Fungsi ```pinMode()``` digunakan untuk mengkonfigurasi pin apakah dijadikan sebagai **input** maupun **output**.
```
pinMode(pin, mode)

Contoh:
pinMode(13, OUTPUT);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno.
* **mode :** INPUT, OUTPUT, dan INPUT_PULLUP.

## digitalWrite()
Fungsi ```digitalWrite()``` berguna untuk menuliskan nilai **HIGH (1)** dan **LOW (0)** pada pin digital.
```
digitalWrite(pin, value)

Contoh:
digitalWrite(13, HIGH);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno.
* **mode :** HIGH atau LOW.

## digitalRead()
Fungsi ```digitalRead()``` digunakan untuk membaca data **HIGH (1)** atau **LOW (0)** dari pin digital.
```
digitalRead(pin)

Contoh:
digitalRead(13);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno.

## analogRead()
Fungsi ```analogRead()``` digunakan untuk membaca data analog dari pin analog, nilai yang dibaca dalam range 0 ~ 1023.
```
analogRead(pin)

Contoh:
analogRead(A0);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno.

## analogWrite()
Fungsi ```analogWrite()``` digunakan untuk menulis sebuah nilai analog pada pin digital dengan cara digital atau biasa dikenal dengan **modulasi lebar pulsa (PWM)**.
```
analogWrite(pin, value)

Contoh:
analogWrite(13, 150);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno.
* **value :** Duty Cycle dengan range 0 ~ 255 (0 merepresentasikan tegangan 0V dan 255 merepresentasikan tegangan 5V).

## delay()
Fungsi ```delay``` digunakan untuk mem-pause program selama rentang waktu yang ditentukan.
```
delay(ms)

Contoh:
delay(1000); //mempause program selama 1000ms atau 1 detik
```
**Parameter :**
* **ms :** Lama waktu untuk mempause program dalam milidetik.

## Serial.begin()
Fungsi ```Serial.begin()``` digunakan untuk membuka port serial dan menentukan baudrate komunikasi serialnya.
```
Serial.begin(speed)

Contoh:
Serial.begin(9600); //baudrate 9600
```
**Parameter :**
* **speed :** baudrate (9600, 115200, dan sebagainya).

## Serial.print()
Fungsi ```Serial.print()``` digunakan untuk mencetak data ke port serial sebagai teks ASCII.
```
Serial.print(value)

Contoh:
Serial.print("Belajar Arduino Uno"); //menulis data karakter
Serial.print(13); //menulis data bilangan bulat
```
**Parameter :**
* **val :** Nilai yang akan dicetak.
