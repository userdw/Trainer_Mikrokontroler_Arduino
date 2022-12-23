# Menampilkan Karakter Menggunakan LCD 16x2

Pada bagian ini kita belajar untuk menggunakan display LCD 16x2.

Sebelum-sebelumnya, kita hanya memanfaatkan serial monitor untuk menampilkan sebuah data, sekarang kita akan mencoba untuk menampilkan data menggunakan LCD 16x2.

<p align="center">
<img src="/Gambar/LCD-16x2.png" height="300">
</p>

Gambar di atas merupakan LCD 16x2, LCD ini terdiri dari 16 kolom dan 2 baris yang dapat kita manfaatkan untuk menampilkan data. Pada gambar di atas kita melihat komponen ini memiliki banyak kaki, untuk mengirimkan data kita menggunakan pin D1 sampai D7 **(pengiriman data secara paralel)**. 

Jika data dikirimkan secara paralel, maka kita memerlukan banyak pin sehingga kita perlu menambahkan modul I2C agar **data dapat dikirimkan secara seri** sehingga kita tidak memerlukan banyak pin.

<p align="center">
<img src="/Gambar/LCD-16x2-i2c.png" height="300">
</p>

Dengan tambahan modul I2C, kita hanya menggunakan 4 buah kabel saja untuk menggunakan LCD 16x2.

**Bahan-bahan yang dibutuhkan :**
* 1x LCD 16x2
* 1x Arduino Uno dan Kabel USB
* Beberapa Kabel Male to Female

<p align="center">
<img src="/Gambar/rangkaian-lcd16x2-i2c.png" height="450">
</p>

**Konfigurasi Pin :**

| LCD 16x2 I2C  | Arduino Uno |
| ------------- | ------------- |
| VCC  | 5V  |
| GND | GND  |
| SCL | A5  |
| SDA | A4  |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Unduh library ini [LCD 16x2 I2C](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/LiquidCrystal-I2C-library-master.zip).
3. Jika sudah terunduh, silahkan tambahkan library tersebut di software Arduino IDE tutorial cara menambahkan library ada [di sini](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Menambahkan%20Library.md).
4. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
5. Unduh kode program [baca_remote_ir.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/04_Mencoba%20Remote%20Inframerah%20(IR)/data_remote_ir.ino).
6. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
7. Jangan lupa untuk memilih baudrate sebesar 9600.
