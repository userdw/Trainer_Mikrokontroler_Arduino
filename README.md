# Trainer Mikrokontroler Arduino

Repositori ini dibuat sebagai panduan dalam menggunakan Trainer Mikrokontroler Arduino.

## Pengenalan Arduino

Arduino merupakan development board yang menggunakan chip mikrokontroler seperti ATmega, ARM, dan sebagainya yang memiliki pin GPIO (General Purpose Input Output) yang dapat diprogram oleh pengguna sesuai dengan kebutuhannya.

Di pasaran, Arduino memiliki banyak versi dengan perbedaan di kapasitas memori, chip prosesor yang digunakan beserta dengan kecepatan clocknya, lebar data, dan sebagainya. Beberapa macam versi Arduino yang ada di pasaran sebagai berikut:
* Arduino Uno
* Arduino Mega
* Arduino Nano
* Arduino Due
* Dan lain sebagainya

Pada kit ini, kita akan menggunakan ```Arduino UNO```.

<p align="center">
<img src="/Gambar/spek-arduino-uno.jpg" height="400">
</p>

**Spesifikasi :**
* Catu Daya : 7 ~ 12V
* Mikrokontroler : ATmega328
* Clock Speed : 16MHz
* I/O Digital : 14 Pin
* PWM : 6 Channel
* Analog : 6 Channel
* Memori Flash : 32KB
* SRAM : 2KB
* EEPROM : 1KB


## Konfigurasi Awal

Sebelum menggunakan Arduino Uno, ada beberapa hal yang harus kita persiapkan, yaitu:
* Menginstal Arduino IDE
* Menginstal Driver

### Arduino IDE

Arduino IDE (Integrated Development Environment) merupakan software yang digunakan untuk mengunduh program ke development board Arduino, salah satunya Arduino Uno. Aplikasi ini sangat berguna saat kita sedang mengembangkan sistem menggunakan Arduino. 

Selain itu mengunduh program ke Arduino, aplikasi ini juga menyediakan fitur-fitur untuk menampilkan data dalam bentuk karakter **(serial monitor)**, menampilkan data dalam bentuk grafik **(serial plotter)**, dan lain sebagainya.

