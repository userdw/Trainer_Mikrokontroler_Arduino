# Limit Switch untuk Membaca Data Digital

Ada banyak sekali sensor-sensor yang bisa kita gunakan untuk membaca data digital, sebelumnya kita sudah belajar membaca data digital menggunakan tactile switch, sekarang kita akan belajar membaca data digital menggunakan **limit switch**.

<p align="center">
<img src="/Gambar/limit-switch.png" height="300">
</p>

Umumnya limit switch memiliki 3 kaki, yaitu **C (Common)**, **NC (Normally Close)**, dan **NO (Normally Close)**. 

Pada kaki C, kita bisa memberinya referensi catu daya baik positif (+) ataupun negatif (-) sesuai dengan kebutuhan kita. Pada bagian ini kita akan mencoba menggunakan kutub positif (+) maupun negatif (-) pada kaki Commonnya.

## Kaki Common Terhubung dengan Kutub Positif

Pada saat kaki common terhubung dengan kutub positif (+), maka saat tuas limit switchnya kita tekan, maka posisi NO akan terhubung dengan Common sehingga saat kita menghubungkan pin NO ke pin digital Arduino Uno, maka board kita akan membaca data **HIGH/1/5V**. Saat tuas tidak kita tekan, maka data yang terbaca mengambang atau floating sehingga kita memerlukan konfigurasi resistor pull-down untuk mengatasi hal tersebut.

**Bahan-bahan yang dibutuhkan :**
* 1x Limit Switch
* 1x Resistor 10kOhm
* 1x Arduino dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-limit-switch.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [limit_switch.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/04_Limit%20Switch%20untuk%20Membaca%20Data%20Digital/limit_switch.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat tuas limit switchnya kita tekan, maka data yang terbaca adalah **HIGH/1/5V** sedangkan jika tuasnya tidak kita tekan, maka data yang terbaca adalah **LOW/0/0V**.

## Kaki Common Terhubung dengan Kutub Negatif

Pada saat kaki common terhubung dengan kutub negatif (-), maka saat tuas limit switchnya kita tekan, maka posisi NO akan terhubung dengan Common sehingga saat kita menghubungkan pin NO ke pin digital Arduino Uno, maka board kita akan membaca data **LOW/0/0V**. Saat tuas tidak kita tekan, maka data yang terbaca mengambang atau floating sehingga kita memerlukan konfigurasi resistor pull-up untuk mengatasi hal tersebut.

Karena pada Arduino Uno sudah ada internal resistor pull-up, maka kita tidak perlu tambahan resisotr cukup konfigurasi melalui software saja dengan fungsi INPUT_PULLUP.

**Bahan-bahan yang dibutuhkan :**
* 1x Limit Switch
* 1x Arduino dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-limit-switch-2.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [limit_switch_2.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/04_Limit%20Switch%20untuk%20Membaca%20Data%20Digital/limit_switch_2.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat tuas limit switchnya kita tekan, maka data yang terbaca adalah **LOW/0/0V** sedangkan jika tuasnya tidak kita tekan, maka data yang terbaca adalah **HIGH/1/5V**.

Dengan data digital yang kita baca ini, kita bisa memanfaatkannya untuk mengendalikan sesuatu salah satunya seperti menghidupkan dan mematikan lampu.
