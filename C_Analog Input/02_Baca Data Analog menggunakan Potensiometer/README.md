# Membaca Data Analog menggunakan Potensiometer

Pada percobaan kali ini kita akan mencoba membaca data analog dengan Arduino Uno. Paling mudah, kita bisa memanfaatkan **potensiometer** untuk menghasilkan data analog yang nantinya dapat dibaca oleh Arduino Uno.

<p align="center">
<img src="/Gambar/bentuk-potensiometer.png" height="230">
</p>

Potensiometer merupakan komponen elektronika sama seperti dengan resistor, tetapi komponen ini nilai resistansinya dapat diubah-ubah (variabel) sehingga potensiometer juga sering disebut sebagai **variable resistor**.

Potensiometer terdiri dari 3 kaki terminal dengan sebuah tuas yang dapat diputar untuk mengatur nilai tahanan/resistansi dari potensiometer.  Ketika kita menghubungkan kaki 1 dan 3 dengan catu daya **kutub positif (+)** dan **negatif (-)**, maka pada kaki terminal 2, ketika kita memutar tuasnya akan didapatkan tegangan yang berubah-ubah dikarenakan nilai resistansi yang berubah-ubah.

Nilai **tegangan yang berubah-ubah** ini merupakan **sinyal analog** yang dapat kita baca menggunakan Arduino Uno.

Board Arduino Uno memiliki pin dengan fitur ADC sebanyak **6 channel (A0, A1, A2, A3, A4, dan A5)**.

Resolusi ADC yang dimiliki oleh Arduino Uno itu sebesar **10 bit** sehingga didapatkan nilai pembacaan analognya dimulai dari **0 (0V) ~ 1023 (5V)** dengan maksimal tegangan yang dibaca sebesar 5V.

**Bahan-bahan yang Dibutuhkan :**
* 1x Potensiometer
* 1x Arduino Uno dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-potensiometer.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [baca_analog_potensiometer.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/C_Analog%20Input/02_Baca%20Data%20Analog%20menggunakan%20Potensiometer/baca_analog_potensiometer.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, saat kita memutar tuas pada potensiometer, maka kita akan mendapatkan data analog dalam range 0 ~ 1023.

<p align="center">
<img src="/Gambar/baca-data-analog.png" height="450">
</p>

### Penjelasan Kode Sketch

```
#define pinPotensiometer A0
int bacaDataAnalog = 0;
```
Instruksi di atas digunakan untuk membuat variabel **pinPotensiometer** dengan nilai A0 yang mewakili pin analog yang kita gunakan. Dan **bacaDataAnalog** yang akan kita gunakan untuk menampung hasil data analog.

```
bacaDataAnalog = analogRead(pinPotensiometer);
```
Instruksi di atas digunakan untuk menampung hasil data analog dari pin A0 (pinPotensiometer) yang ditampung oleh variabel **bacaDataAnalog**. 
