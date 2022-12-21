## Menghitung Jarak Benda menggunakan Sensor Ultrasonik

Sensor Ultrasonik merupakan sensor yang dapat menghasilkan gelombang ultrasonik yang dapat kita manfaatkan untuk mengetahui jarak antara sensor dengan obyek yang diukur.

Sensor ultrasonik umumnya terdiri dari 2 bagian, yaitu bagian **transmitter (pemancar)** dan **bagian receiver (penerima)**. Bagian pemancar inilah yang bertugas untuk memancarkan gelombang ultrasonik sedangkan bagian receiver yang menerima gelombang ultrasonik yang dihasilkan oleh pemancar.

Bagaimana sensor ini dimanfaatkan untuk menghitung jarak ?

<p align="center">
<img src="/Gambar/konsep-kerja-sensor-ultrasonik-2.png" height="300">
</p>

Bagian pemancar akan menghasilkan gelombang ultrasonik sehingga jika ada obyek pada jalur gelombang tersebut, maka gelombang tersebut akan memantul kembali sehingga ditangkap oleh bagian pemancar. **Berdasarkan waktu perjalanan dan kecepatan gelombang** tersebut, maka dapat dihitung jarak suatu benda tersebut terhadap sensor.

Pada bagian ini kita akan belajar menggunakan sensor ultrasonik dengan tipe **HC-SR04**. 

<p align="center">
<img src="/Gambar/ultrasonik-sensor-hc-sr04.jpg" height="150">
</p>

Sensor ultrasonik HC-SR04 memiliki 4 kaki terminal :
* **VCC**, untuk catu daya kutub (+)
* **GND**, untuk catu daya kutub (-)
* **Trig**, bagian transmitter (pemancar)
* **Echo**, bagian receiver (penerima)

Sekarang kita akan mencoba menggunakan sensor ini untuk mengukur jarak.

**Bahan-bahan yang dibutuhkan :**
* 1x Sensor Ultrasonik HC-SR04
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-sensor-hcsr04.png" height="450">
</p>

**Konfigurasi Pin :**

| Sensor HC-SR04  | Arduino Uno |
| ------------- | ------------- |
| VCC | 5V  |
| GND | GND  |
| Trig | D5  |
| Echo | D6  |

