# Mengukur Tingkat Intensitas Cahaya dengan LDR

Sekarang pada percobaan ini kita akan mencoba modul sensor LDR. Sensor LDR merupakan singkatan dari Light Dependent Resistor (LDR), sensor ini memiliki nilai resistansi atau hambatan yang dapat berubah-ubah. Perubahan nilai resistansinya dipengaruhi oleh intensitas cahaya yang diterima oleh sensor ini. 

<p align="center">
<img src="/Gambar/modul-sensor-ldr.jpg" height="250">
</p>

Modul sensor LDR yang kita miliki memikiki 4 kaki terminal:
* **VCC**, kaki untuk catu daya kutub positif.
* **GND**, kaki untuk catu daya kutub negatif.
* **DO**, kaki untuk output data digital.
* **AO**, kaki untuk output data analog.

Jika dilihat dari kaki terminalnya, sensor ini memiliki **2 jenis data output**, yaitu **data digital dan analog**.

Dalam modul sensor ini terdapat komponen op-amp yang akan membandingkan tegangan keluaran dari LDR dengan tegangan referensi, jika tegangan keluaran dari LDR lebih besar dari tegangan referensi ini, maka output dari op-amp akan HIGH (1), jika sebaliknya maka keluaran dari op-amp ini adalah LOW (0). **Kondisi HIGH menandakan bahwa LDR mendeteksi adanya cahaya dan kondisi LOW menandakan bahwa LDR mendeteksi tidak adanya cahaya**.

Selain data digital, sensor ini juga menghasilkan data analog, berbeda dari data digital yang memanfaatkan perbandingan dengan komponen op-amp, untuk **data analog datanya langsung keluar dari sensornya sehingga untuk data ini bisa langsung kita baca melalui pin Analog input yang ada pada Arduino Uno**.

## Membaca Data Digital dari Sensor LDR

Sekarang kita akan mencoba membaca data digital dari sensor ini. 

Pada bagian board sensor terdapat resistor variabel (berwarna biru), resistor ini berfungsi untuk mengatur besar atau kecilnya tegangan referensi op-amp, sehingga kita bisa mengatur tingkat sensitivitasnya sesuai dengan kebutuhan kita.

Selain itu, modul ini juga dilengkapi dengan LED indikator untuk output digitalnya, jadi saat keluaran op-ampnya HIGH(1), maka LED indikator ini akan menyala sedangkan jika output op-ampnya LOW (0), maka LED indikator mati.

**Bahan-bahan yang dibutuhkan :**
* 1x Senter atau Cahaya HP
* 1x Modul Sensor LDR
* 1x Project Board
* 1x Arduino Uno dan Kabel USB
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-sensor-ldr-digital.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [baca_digital_ldr.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/02_Mengukur%20Tingkat%20Intensitas%20Cahaya%20dengan%20LDR/baca_digital_LDR.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Pada board modul sensor LDR ini sudah dilengkapi dengan **rangkaian resistor pull-up** sehingga kita tidak memerlukan resistor tambahan lagi.

Jika sketch sudah terupload dengan benar, maka saat LDR tidak mendeteksi adanya cahaya (sinar HP), maka data yang terbaca adalah HIGH (1) dengan LED indikator mati. Sedangkan jika LDR mendeteksi adanya cahaya, maka data yang terbaca di Arduino Uno adalah LOW (0) dengan LED indikator hidup.

## Membaca Data Analog dari Sensor LDR

Setelah kita mencoba keluaran data digital dari sensor LDR, sekarang kita akan mencoba membaca data analognya.

**Bahan-bahan yang dibutuhkan :**
* 1x Senter atau Cahaya HP
* 1x Modul Sensor LDR
* 1x Project Board
* 1x Arduino Uno dan Kabel USB
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-sensor-ldr-analog.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [baca_analog_ldr.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/02_Mengukur%20Tingkat%20Intensitas%20Cahaya%20dengan%20LDR/baca_analog_LDR.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka saat kita membuka serial monitor, nilai analog akan semakin besar jika LDR tidak menerima cahaya begitu juga sebaliknya nilai analognya semakin kecil jika LDR kita dekatkan dengan sinar lampu dari HP.

## Menggunakan Data Digital untuk Membuat Indikator dengan LED

Data digital dan analog yang sudah kita dapatkan di atas bisa kita manfaatkan untuk menghidupkan sebuah LED.

**Bahan-bahan yang dibutuhkan :**
* 1x Senter atau Cahaya Lampu HP
* 1x Modul Sensor LDR
* 1x LED Warna Merah
* 1x Resistor 1kOhm 
* 1x Project Board
* 1x Arduino Uno dan Kabel USB
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-sensor-ldr-led-digital-2.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [ldr_led_digital.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/02_Mengukur%20Tingkat%20Intensitas%20Cahaya%20dengan%20LDR/ldr_led_digital.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka saat LDR kita dekatkan dengan cahaya HP, maka LED warna hijau akan menyala sedangkan jika LDR tidak kita dekatkan dengan cahaya HP, maka LED warna merah yang akan menyala.

### Penjelasan Kode Sketch


