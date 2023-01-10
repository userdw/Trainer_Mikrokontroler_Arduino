# Mencoba Display Dot Matrix 5x7

Pada percobaan ini kita akan belajar menggunakan LED Dot Matrix 5x7.

Dot matrix salah satu display yang disusun oleh beberapa LED sama persis seperti 7 segment, hanya saja berbeda pada segmennya. Kalau dot matrix segmennya menggunakan dot atau titik sesuai dengan namanya.

Dot matrix yang akan kita gunakan memiliki ukuran 5x7 berarti memiliki **5 bagian kolom dan 7 baris** dengan disusun LED sebanyak 35 buah yang dirangkai sedemikian rupa.

<p align="center">
<img src="/Gambar/dot-matrix-5x7.png" height="400">
</p>

Jika dilihat dari konfigurasinya, maka dot matrix terbagi menjadi 2 macam, yaitu **tipe n dan m** sedangkan dot matrix yang akan kita gunakan memiliki **tipe n**.

Untuk tipe n, maka pin anoda dan katodanya sebagai berikut :

<p align="center">
<img src="/Gambar/dot-matrix-5x7(2).png" height="400">
</p>

Sekarang kita akan mencoba untuk menghidupkan secara bergantian pada bagian kolom dan barisnya.

**Bahan-bahan yang dibutuhkan :**
* 1x Dot Matrix 5x7
* 5x Resistor 220 Ohm
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male dan Male to Female

<p align="center">
<img src="/Gambar/rangkaian-dot-matrix-5x7 (2).png" height="450">
</p>

**Konfigurasi Pin :**

| Dot Matrix 5x7 (Anoda) | Arduino Uno | 
| ------------- | ------------- |
| Pin 1 | D13  |
| Pin 2 | D12 |
| Pin 5 | D11 |
| Pin 7 | D10  |
| Pin 8 | D9  |
| Pin 9 | D8  |
| Pin 14 | D7  |

| Dot Matrix 5x7 (Katoda) | Resistor (1) | Resistor (2) |Resistor (3) |Resistor (4) |Resistor (5) |
| ------------- | ------------- |------------- |------------- |------------- |------------- |
| Pin 3 | Kaki (1) | - | - | - | - |
| Pin 4 | - | Kaki (1) | - | - | - |
| Pin 6 | - |-  | Kaki (1)  | - | - |
| Pin 10 |-  |-  |-  | Kaki (1)  |  |
| Pin 13 | - | - | - | -  | Kaki (1) |

| Arduino Uno | Resistor (1) | Resistor (2) |Resistor (3) |Resistor (4) |Resistor (5) |
| ------------- | ------------- |------------- |------------- |------------- |------------- |
| A0 | Kaki (2) | - | - | - | - |
| A1 | - | Kaki (2) | - | - | - |
| A2 | - |-  | Kaki (2)  | - | - |
| A3 |-  |-  |-  | Kaki (2)  |  |
| A4 | - | - | - | -  | Kaki (2) |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [baris_kolom.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/E_Bermain-main%20dengan%20Display/03_Mencoba%20Display%20Dot%20Matrix/baris_kolom_dotmatrix.ino).
4. Upload kode sketch tersebut.

Jika sketch tersebut sudah terupload dengan benar, maka tampilan dot matrix 5x7 kita akan bergantian hidupnya dari baris ke-1 hingga ke-7 kemudian berganti dari kolom ke-1 sampai ke-5.

### Penjelasan Kode Sketch

```
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
```
Instruksi di atas digunakan membuat variabel untuk pin-pin yang dipakai oleh dot matrix, **pin1DM** maksudnya pin nomor 1 dot matrix.

```
#define 1 HIGH
#define 0 LOW
```
Kita mendefinisikan 1 sebagai HIGH dan 0 sebagai LOW.

```
bool pin1, pin2, pin3, pin4, pin5, pin6;
bool pin7, pin8, pin9, pin10, pin13, pin14;
```
Instruksi di atas kita gunakan untuk membuat beberapa variabel dengan **tipe data bool**, karena akan digunakan untuk menampung nilai logika 1 atau 0.

```
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
```
Kita membuat sebuah fungsi bernama **dot_matrix**, fungsi ini memiliki 12 parameter input **(pin1, pin2, pin3, pin4, pin5, pin6, pin7, pin8, pin9, pin10, pin13, pin13)** yang akan digunakan untuk mengatur kondisi logika yang akan masuk ke dot matrix.

```
digitalWrite(pin1DM, pin1);
```
Kondisi dari **pin1DM** akan dipengaruhi nilainya oleh **pin1** yang sebagai parameter input dari fungsi **dot_matrix()**

```
void baris_satu(){
  dot_matrix(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);
}
```
Instruksi di atas merupakan perintah untuk menghidupkan semua segmen dot pada baris ke-1 dengan perintah **dot_matrix(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0);**. Jika seperti ini, maka logikanya:
* **pin1 :** bernilai LOW
* **pin2 :** bernilai LOW
* **pin3 :** bernilai LOW
* **pin4 :** bernilai LOW
* **pin5 :** bernilai LOW
* **pin6 :** bernilai LOW
* **pin7 :** bernilai LOW
* **pin8 :** bernilai LOW
* **pin9 :** bernilai HIGH
* **pin10 :** bernilai LOW
* **pin13 :** bernilai LOW
* **pin14 :** bernilai LOW

Sehingga:
**digitalWrite(pin9DM, pin9);** akan menghasilkan logika HIGH karena pin9 kita beri nilai 1.

```
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
```
Kita menghidupkan segmen dot matrix mulai dari baris ke-1 sampai ke-7 kemudian akan menghidupkan kolom ke-1 hingga ke-5.
