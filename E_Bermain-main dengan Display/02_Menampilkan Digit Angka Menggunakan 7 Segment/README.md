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
