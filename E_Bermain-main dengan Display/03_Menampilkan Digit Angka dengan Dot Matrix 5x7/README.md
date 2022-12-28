# Menampilkan Digit Angka dengan Dot Matrix 5x7

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



