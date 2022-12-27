# Menampilkan Digit Angka Menggunakan 7 Segment

7 segment merupakan salah satu jenis display yang tersusun dari 7 buah LED yang dirangkai sedemikian rupa sehingga menampilkan efek digit sebuah angka yang disusun dalam segmen-segment membentuk angka 8.

Jika dilihat berdasarkan commonnya, maka 7 segment akan terbagi menjadi 2 jenis, yaitu **common anoda** dan **common katoda**. Jika common anoda, maka semua kaki LED yang bagian anoda akan terhubung menjadi satu. Dan sebaliknya, jika katoda maka semua kaki LED yang bagian katoda akan terhubung menjadi satu seperti pada gambar di bawah ini.

<p align="center">
<img src="/Gambar/7-segment.png" height="400">
</p>

Selain 7 LED untuk menampilkan digit angkat, 7 segment juga memiliki 1 buah LED untuk **digit DP (drop poin)** sebagai tanda titik.

Cara menggunakan 7 segment seperti saat kita menghidupkan dan mematikan sebuah LED. Jika kita lihat dari gambar di atas, 7 segment yang kita miliki berjenis **common katoda**, sehingga pada **pin commonnya** kita hubungkan dengan **pin GND** kemudian untuk kaki lainnya kita kasih logika HIGH atau LOW untuk menghidupkan digit angka yang kita inginkan.

Pin common terletak pada pin nomor **3 dan 8**.

**Contoh:** jika kita ingin untuk menampilkan digit angka 2, maka tabel logikanya seperti di bawah ini:

| No | Pin | Logika |
| ------------- | ------------- |------------- |
| 1 | e  | HIGH |
| 2 | d  |HIGH  |
| 4 | c  |LOW  |
| 5 | dp  |LOW  |
| 6 | b  |HIGH  |
| 7 | a  | HIGH  |
| 9 | f  |LOW|
| 10 | g  |HIGH  |

Jadi untuk menampilkan digit angka 2, kita hanya perlu menghidupkan LED yang terletak pada segmen: **a, b, d, e, g**.

Sekarang kita akan mencoba untuk menampilkan angka 1 sampai 8 menggunakan 7 segment.

**Bahan-bahan yang dibutuhkan :**
* 1x 7 Segment
* 1x Resistor 220 Ohm
* 1x Arduino Uno dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-7-segment.png" height="450">
</p>

**Konfigurasi Pin :**

| 7 Segment | Arduino Uno | Resistor |
| ------------- | ------------- |------------- |
| 1 (e) | D6  | - |
| 2 (d) | D5  |-  |
| 3 (common) | - |Kaki (+)  |
| 4 (c) | D4  |-  |
| 6 (b) | D3  |-  |
| 7 (a) | D2  | -  |
| 9 (f) | D7  |-|
| 10 (g)| D8  |-  |
|- | GND |Kaki (-)  |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [7_segment.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/E_Bermain-main%20dengan%20Display/02_Menampilkan%20Digit%20Angka%20Menggunakan%207%20Segment/7_segment.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka display **7 segment akan menampilkan angka 0 hingga sampai 8**.

## Membuat Alat Penghitung dengan Tactile Switch dan 7 Segment

Sekarang kita akan mencoba membuat alat penghitung atau counter yang memiliki konsep yang sama seperti alat penghitung dzikir yang ada di pasaran.

Karena 7 segment kita hanya satu, maka angka yang ditambilkan hanya 1 digit saja dimulai dari angka 0 hingga sampai 9.

**Bahan-bahan yang dibutuhkan :**
* 1x 7 Segment
* 1x Resistor 220 Ohm
* 1x Tactile Switch
* 1x Arduino Uno dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-pb-7-segment.png" height="450">
</p>

**Konfigurasi Pin :**

| 7 Segment | Arduino Uno | Resistor |
| ------------- | ------------- |------------- |
| 1 (e) | D6  | - |
| 2 (d) | D5  |-  |
| 3 (common) | - |Kaki (+)  |
| 4 (c) | D4  |-  |
| 6 (b) | D3  |-  |
| 7 (a) | D2  | -  |
| 9 (f) | D7  |-|
| 10 (g)| D8  |-  |
|- | GND |Kaki (-)  |

| Tactile Switch | Arduino Uno | 
| ------------- | ------------- |
|Kaki (1) | D9 |
|Kaki (2) | GND |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [pb_7_segment.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/E_Bermain-main%20dengan%20Display/02_Menampilkan%20Digit%20Angka%20Menggunakan%207%20Segment/pb_7_segment.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka saat kita tekan tombol push buttonnya, maka akan merubah angka yang ditampilkan pada 7 segment.
