# Mengontrol Beban Listrik Menggunakan Relay

Pada bagian ini kita akan mencoba mengontrol beban listrik menggunakan relay. Umumnya beban listrik terbagi menjadi 2 jenis, yaitu **beban listrik DC (arus searah)** dan **listrik AC (arus bolak-balik)**, pada percobaan ini kita akan menggunakan beban listrik DC karena dalam paket pembelajaran ini komponen elektronika yang digunakan bekerja pada listrik DC.

Relay ini merupakan saklar elektronik, yang kondisi on atau offnya dipengaruhi oleh arus listrik.

Relay terbagi menjadi 2 bagian, yaitu bagian **kontak** dan **coil (kumparan)**. Bagian coil ini yang dikendalikan untuk mempengaruhi kondisi kontak. Pada bagian kontak terbagi 3 bagian, yaitu COM, NO, dan NC yang dapat diatur melalui kumparan.

<p align="center">
<img src="/Gambar/komponen-relay.jpg" height="200">
</p>

Jadi cara kerja sederhanya, saat pada kumparan dialiri oleh arus listrik, maka pada kumparan akan membangkitkan medan magnet. Medan magnet inilah yang menarik tuas pada bagian kontak yang nantinya akan merubah kondisi NO maupun NC pada relay.

Perubahan kondisi kontak inilah yang bisa kita manfaatkan untuk mengendalikan kondisi on dan off dari beban-beban listrik.

Sekarang kita akan mencoba mengendalikan beban listrik dengan Relay menggunakan Arduino Uno.

**Bahan-bahan yang dibutuhkan :**
* 1x Arduino Uno
* 1x Relay 1 Channel
* 4x Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-relay.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti gambar di atas, pin PWM yang kita gunakan adalah pin digital nomor 5
2. Unduhh kode program [membunyikan_buzzer.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/A_GPIO%20sebagai%20Digital%20Output/04_Membuat%20Bunyi%20Beep-Beep%20dengan%20Buzzer/membunyikan_buzzer.ino).
3. Setelah terunduh, silahkan buka software Arduino IDE lalu klik upload ke board Arduino Uno.
4. Jika tidak ada kesalahan, maka Buzzer akan bergantian bunyi dan diam setiap 1 detik sekali.

