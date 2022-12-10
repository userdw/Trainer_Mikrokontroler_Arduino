# Membaca Data Digital Menggunakan Tactile Switch

Pada bagian ini kita akan belajar membaca data digital **HIGH (1/5V)** dan **LOW (0/0V)** dengan menggunakan tactile switch. Pada mikrokontroler, saat kita gunakan pinnya sebagai input ada dua konfigurasi awal untuk menentukan kondisi data yang dibaca oleh pin tersebut. Konfigurasi tersebut adalah **resistor pull-up** dan **resistor pull-down**.

Dua konfigurasi tersebut sangat penting digunakan, jika kita tidak menggunakannya, maka pada kondisi awal pin akan membaca data floating (mengambang) yang berubah-ubah antara 1 dan 0.
