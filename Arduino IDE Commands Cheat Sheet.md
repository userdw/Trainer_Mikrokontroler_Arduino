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
* **pin :** Nomor pin Arduino Uno
* **mode :** INPUT, OUTPUT, dan INPUT_PULLUP 

## digitalWrite()
Fungsi ```digitalWrite()``` berguna untuk menuliskan nilai **HIGH (1)** dan **LOW (0)** pada pin digital.
```
digitalWrite(pin, value)

Contoh:
digitalWrite(13, HIGH);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno
* **mode :** HIGH atau LOW

## Serial.print()
Fungsi ```Serial.print()``` digunakan untuk mencetak data ke port serial sebagai teks ASCII.
```
Serial.print(value)

Contoh:
Serial.print("Belajar Arduino Uno"); //menulis data karakter
Serial.print(13); //menulis data bilangan bulat
```
**Parameter :**
* **val :** Nilai yang akan dicetak

## digitalRead()
Fungsi ```digitalRead()``` digunakan untuk membaca data **HIGH (1)** atau **LOW (0)** dari pin digital.
```
digitalRead(pin)

Contoh:
digitalRead(13);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno
