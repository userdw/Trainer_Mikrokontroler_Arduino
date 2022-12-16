# Membuat Alarm dengan Saklar Reed Magnetic Sensor

Saklar Reed Magnetic merupakan saklar yang kondisinya dipengaruhi oleh medan magnet. Saklar yang kita gunakan pada kit ini memiliki 2 kaki, yaitu **C (Common)** dan **NO (Normally Open)**, jadi saat kondisi awal ketika saklar tidak dipengaruhi oleh medan magnet, maka kaki C tidak terhubung dengan kaki NO **(kondisi kontak saklar terputus)**.

<p align="center">
<img src="/Gambar/magnetic-reed-switch.png" height="300">
</p>

Kebalikannya, jika kita pengaruhi di sekitar saklar dengan medan magnet (yang dihasilkan dari benda magnet), maka kaki C akan tehubung dengan kaki NO **(kondisi kontak saklar terhubung)**. Sehingga kita bisa **memanfaatkan saklar ini untuk membaca data digital**, yang nantinya data ini bisa kita gunakan untuk hal-hal lainnya salah satunya untuk membuat alarm dengan buzzer.

**Bahan-bahan yang dibutuhkan :**
* 1x Saklar Reed Magnetic
* 1x Buzzer
* 1x Resistor 10kOhm
* 1x Arduino dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-reed-magnetic-pull-down.png" height="500">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [reed_magnetic_pull_down.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/05_Membuat%20Alarm%20dengan%20Saklar%20Reed%20Magnetic%20Sensor/reed_magnetic_pull_down.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat saklar tidak kita dekatkan dengan benda magnetik (benda yang menghasilkan medan magnet), maka kontak NO tidak terhubung dengan C (kontak terputus) sehingga data yang dibaca oleh Arduino Uno kita adalah **LOW/0/0V**.

## Menggunakan Internal Resistor Pull-Up

