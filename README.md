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
<img src="/Gambar/arduino-uno-smd.png" height="700">
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

Informasi GPIO : [Pin Out](https://content.arduino.cc/assets/Pinout-UNOrev3SMD_latest.pdf?_gl=1*11b63fw*_ga*MTExNTg0MTIyNC4xNjY1NjMyOTg5*_ga_NEXN8H46L5*MTY2OTI2MTE5MC4xOC4xLjE2NjkyNjE0NDUuMC4wLjA.)

### Pin GPIO

<p align="center">
<img src="/Gambar/pin-digital.png" height="400">
</p>

Pin dengan label **D (Digital)** merupakan pin-pin yang dapat dikonfigurasi untuk membaca maupun mengeluarkan data digital, yaitu **1 (untuk HIGH/5V) atau 0 (untuk LOW/0V)**. Selain itu, pada gambar di atas juga terdapat SCL, SDA, SCK, CIPO, COPI, dan SS yang berarti pin tersebut memiliki fitur tambahan yang dapat digunakan untuk antarmuka serial.



## Konfigurasi Awal

Sebelum menggunakan Arduino Uno, ada beberapa hal yang harus kita persiapkan, yaitu:
* Menginstal Arduino IDE
* Menginstal Driver

### Arduino IDE

Arduino IDE (Integrated Development Environment) merupakan software yang digunakan untuk mengunduh program ke development board Arduino, salah satunya Arduino Uno. Aplikasi ini sangat berguna saat kita sedang mengembangkan sistem menggunakan Arduino. 

Selain itu mengunduh program ke Arduino, aplikasi ini juga menyediakan fitur-fitur untuk menampilkan data dalam bentuk karakter **(serial monitor)**, menampilkan data dalam bentuk grafik **(serial plotter)**, dan lain sebagainya.

<p align="center">
<img src="/Gambar/arduino-ide.png" height="300">
</p>

Link download : 
* [Windows](https://downloads.arduino.cc/arduino-1.8.19-windows.exe?_gl=1*10zb8qe*_ga*MTExNTg0MTIyNC4xNjY1NjMyOTg5*_ga_NEXN8H46L5*MTY2OTI1Nzg0NS4xNy4wLjE2NjkyNTc4NDUuMC4wLjA.)
* [Mac OS X](https://downloads.arduino.cc/arduino-1.8.19-macosx.zip?_gl=1*oxswi5*_ga*MTExNTg0MTIyNC4xNjY1NjMyOTg5*_ga_NEXN8H46L5*MTY2OTI1Nzg0NS4xNy4wLjE2NjkyNTc4NDUuMC4wLjA.)
* [Linux 32bit](https://downloads.arduino.cc/arduino-1.8.19-linux32.tar.xz?_gl=1*h5w09j*_ga*MTExNTg0MTIyNC4xNjY1NjMyOTg5*_ga_NEXN8H46L5*MTY2OTI1Nzg0NS4xNy4wLjE2NjkyNTc4NDUuMC4wLjA.) dan [Linux 64bit](https://downloads.arduino.cc/arduino-1.8.19-linux64.tar.xz?_gl=1*h5w09j*_ga*MTExNTg0MTIyNC4xNjY1NjMyOTg5*_ga_NEXN8H46L5*MTY2OTI1Nzg0NS4xNy4wLjE2NjkyNTc4NDUuMC4wLjA.)

Setelah file berhasil diunduh, lakukan instalasi sesuai dengan prosedur sistem operasi yang digunakan.

### Driver

Arduino Uno pada kit ini menggunakan CH430 USB Serial, sehingga perlu dilakukan instalasi driver agar chip CH430 dapat terdeteksi portnya di komputer yang kita gunakan. Kami mencobanya menggunakan Ubuntu 20.04 LTS dan Windows 10, untuk yang di Ubuntu driver sudah terkenali tanpa perlu melakukan instalasi driver. Sedangkan untuk yang di Windows 10 harus dilakukan instalasi drivernya terlebih dahulu.

Link download : [Driver CH430](https://sparks.gogo.co.nz/ch340.html)

## Memulai dengan Arduino UNO

Setelah software dan driver sudah terinstal dengan baik, sekarang kita bisa menghubungkan Arduino Uno ke komputer menggunakan kabel USB setelah itu periksa pada **device manager** untuk melihat di com port berapa Arduino Uno kita terbaca di komputer.

<p align="center">
<img src="/Gambar/com-port.png" height="400">
</p>

Pada gambar di atas, Arduino Uno sudah terdeteksi di com port 4 (COM4) yang menandakan bahwa Arduino Uno sudah bisa terdeteksi di komputer.



