# Mengetahui Suhu dan Kelembapan Lingkungan dengan Sensor DHT11

Pada bagian ini kita akan belajar mengenai sensor DHT11.

Sensor DHT11 merupakan sensor yang dapat mengukur nilai suhu dan kelembapan di sekitar lingkungan.

<p align="center">
<img src="/Gambar/dht-11.jpg" height="300">
</p>

Gambar di atas merupakan bentuk dari modul sensor DHT11 yang memiliki 3 terminal kaki :
* **Terminal (+) :** Untuk catu daya kutub positif
* **Terminal (Out) :** Data output yang akan dibaca oleh Arduino Uno
* **Terminal (-) :** Untuk catu daya kutub negatif

Untuk menggunakan sensor ini kita memerlukan library tambahan agar sensor ini bisa diakses menggunakan Arduino Uno.

**Bahan-bahan yang Dibutuhkan :**
* 1x Sensor DHT11
* 3x Kabel Jumper Male to Female
* 1x Arduino Uno dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-dht11.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Unduh library ini [DHT11](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/DHT-sensor-library-master.zip) dan [Adafruit_Sensor](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/Adafruit_Sensor-master.zip).
3. Jika sudah terunduh, silahkan tambahkan library tersebut di software Arduino IDE tutorial cara menambahkan library ada [di sini](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Menambahkan%20Library.md).
4. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
5. Unduh kode program [input_saja.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/02_Membaca%20Data%20Digital%20Menggunakan%20Tactile%20Switch/input_saja.ino).
6. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
7. Jangan lupa untuk memilih baudrate sebesar 9600.
8. Coba amati saat tombolnya ditekan dan tidak ditekan.
