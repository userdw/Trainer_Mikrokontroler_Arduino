# Fitur Serial Monitor

**Serial Monitor** merupakan salah satu fitur yang ada pada aplikasi Arduino IDE. Fitur ini sangat berguna saat kita melakukan komunikasi serial pada board Arduino Uno, dengan fitur ini kita bisa melakukan proses mengirim dan melihat data saat terjadi komunikasi serial pada Arduino.

<p align="center">
<img src="/Gambar/serial-monitor.png" height="400">
</p>

Fitur serial monitor dapat diakses dengan mengklik tombol seperti pada gambar di atas. Sekarang kita akan belajar bagaimana komunikasi serial antara komputer dengan Arduino Uno yang kita punya.

## Kirim Data secara Serial dari Arduino Ke Komputer

**Langkah-langkahnya :**
1. Hubungkan board Arduino Uno ke port USB komputer.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [kirim_data_serial_ke_komputer.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/01_Kenalan%20dengan%20Serial%20Monitor/kirim_data_serial_ke_komputer.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

<p align="center">
<img src="/Gambar/kirim-data-serial-ke-komputer.png" height="400">
</p>

Pada gambar di atas merupakan tampilan data yang dikirimkan oleh Arduino Uno ke komputer. Data yang kita kirimkan merupakan data yang ditampung oleh variabel **penghitung** yang setiap iterasi atau looping ditambah sebesar 1 sehingga nilai dari **penghitung** akan bertambah sebesar 1 setiap kali looping.

### Penjelasan Kode Sketch

```
int penghitung = 0;
```
Instruksi di atas digunakan untuk membuat variabel bernama **penghitung** dengan tipe data integer (int) yang memiliki nilai awal sebesar 0.
```
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
```
Instruksi di atas kita gunakan untuk memulai komunikasi serial dengan **baudrate sebesar 9600 bps** (bit perdetik).
```

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(penghitung);
  penghitung++;
  delay(1000);
}
```
Instruksi di atas:
* **Serial.println(penghitung);** digunakan untuk mengirimkan data integer (int) secara serial dari Arduino Uno ke Komputer.
* **penghitung++;** nilai dari variabel **penghitung** akan ditambahkan sebesar 1 setiap kali looping atau perulangan.

## Kirim Data secara Serial dari Komputer ke Arduino Uno

Setelah kita mencoba untuk mengirim data dari Arduino Uno ke komputer sekarang kita akan mencoba sebaliknya, yaitu mengirim data dari komputer ke Arduino Uno.

**Langkah-langkahnya :**
1. Hubungkan board Arduino Uno ke port USB komputer.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [kirim_data_serial_ke_arduino-uno.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/01_Kenalan%20dengan%20Serial%20Monitor/kirim_data_serial_ke_arduino_uno.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

<p align="center">
<img src="/Gambar/kirim-data-serial-ke-arduino.png" height="400">
</p>

Gambar di atas digunakan untuk mengirimkan data secara serial dari komputer ke Arduino Uno, kita akan mencoba mengirimkan data kumpulan karakter "Aku" lalu kemudian kita klik tombol **Send** untuk mengirimkan data.

<p align="center">
<img src="/Gambar/kirim-data-serial-ke-arduino-2.png" height="400">
</p>

Gambar di atas adalah data yang diterima oleh Arduino Uno dari komputer yang kemudian dikirimkan kembali oleh Arduino Uno ke komputer agar kita bisa melihat data yang diterima oleh Arduino Uno melalui serial monitor.

### Penjelasan Kode Sketch

```
char data_komputer;
```
Instruksi di atas digunakan untuk membuat variabel bernama **data_komputer** dengan **bertipe data char (karakter)**, variabel inilah yang akan kita gunakan untuk menampung data yang dikirimkan oleh komputer ke board Arduino Uno.
```
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
```
Instruksi di atas kita gunakan untuk memulai komunikasi serial dengan **baudrate sebesar 9600 bps** (bit perdetik).
```
void loop() {
  // put your main code here, to run repeatedly:
 while(Serial.available() > 0){
    data_komputer = Serial.read();
    Serial.print(data_komputer); 
    delay(2);
  }
}
```
Instruksi di atas:
* **while(Serial.available() > 0)** digunakan untuk mengecek buffer pada port serial, jika buffer pada port serial ada data, maka kondisi ini akan bernilai True.
* **data_komputer = Serial.read();** Serial.read() digunakan untuk membaca data pada buffer yang kemudian ditampung oleh variabel **data_komputer**.
* **Serial.print(data_komputer);** data yang ditampung oleh variabel **data_komputer** kita kirimkan kembali ke komputer agar datanya bisa kita lihat melalui **Serial Monitor** apakah sudah benar atau tidak.

