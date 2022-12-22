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

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [sensor_ultrasonik_hcsr04.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/03_Menghitung%20Jarak%20Benda%20menggunakan%20Sensor%20Ultrasonik%20HC-SR04/sensor_ultrasonik_hcsr04.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

<p align="center">
<img src="/Gambar/jarak-ultrasonik-hcsr04.png" height="450">
</p>

Jika sketch sudah terupload dengan benar, maka saat kita membuka serial monitor akan tampil seperti pada gambar di atas. Kita bisa memberikan sebuah objek di depan sensor ultrasonik untuk mengukur jaraknya.

### Penjelasan Kode Sketch

```
#define pinEcho 2 
#define pinTrig 3 
```
Instruksi di atas digunakan untuk membuat variabel bernama **pinEcho** dan **pinTrig** masing-masing memiliki nilai 2 dan 3 yang mewakili nomor pin digital yang digunakan pada Arduino Uno.

```
long durasi; 
int jarak;
```
Instruksi di atas digunakan untuk membuat variabel bernama **durasi** bertipe data long dan **jarak** bertipe data int. Kedua variabel ini kita gunakan untuk menyimpan hasil perhitungan jaraknya.

```
pinMode(pinTrig, OUTPUT); 
pinMode(pinEcho, INPUT); 
```
Instruksi di atas digunakan untuk mengkonfigurasi **pinTrig** dijadikan sebagai output karena pin ini yang digunakan sebagai pemancar gelombang. Dan **pinEcho** dijadikan input karena pin ini yang akan membaca pantulan sinyal gelombangnya.

```
digitalWrite(pinTrig, LOW);
delayMicroseconds(2);
digitalWrite(pinTrig, HIGH);
delayMicroseconds(10);
digitalWrite(pinTrig, LOW);
```
<p align="center">
<img src="/Gambar/timing-sensor-hcsr04.png" height="300">
</p>

Pada saat kita mengirmkan sebuah **pulsa (HIGH)** pada pinTrig selama 10 mikrodetik, maka sensor akan menghasilkan beberapa gelombang ultrasonik seperti pada gambar di atas.

```
durasi = pulseIn(pinEcho, HIGH);
```
Waktu yang diperlukan gelombang suara terkena obyek didepannya kemudian memantul kembali kita simpan pada variabel yang bernama durasi. Perintah **pulseIn()** akan menghitung waktu jeda pinTrig dari sejak perubahan dari LOW ke HIGH hingga menerima sinyal LOW lagi.

Kaki Echo pada sensor ultrasonik akan **bernilai HIGH** jika menerima gelombang ultrasonik yang dihasilkan dari pin Trigger.

```
jarak = durasi * 0.034 / 2;
```
<p align="center">
<img src="/Gambar/timing-sensor-hcsr04-2.png" height="300">
</p>

Sekarang kita akan belajar besaran fisis yang dipakai oleh sensor ini :
```
v : kecepatan 
t : waktu (durasi)
s : jarak
```

Kecepatan dari gelombang ultrasonik yang dihasilkan adalah 340 m/s atau 0.034 cm/mikrodetik sehingga untuk menghitung waktu dapat menggunakan rumus di bawah ini :
```t = s/v```

Jika contohnya jarak sensor dengan benda yang diukur adalah 20cm, maka
```t = 20/0.034 = 588 mikrodetik```

Kita menghitung gelombang ultrasonik mulai dari saat dia dipancarkan dan dipantulkan, maka harus kita bagi 2 sehingga:
```s = t x 0.034/2```

```
Serial.print("Jarak: ");
Serial.print(jarak);
Serial.println(" cm");
```
Instruksi di atas digunakan untuk menampilkan hasil pengukuran yang dihasilkan oleh sensor HCSR04 ke serial monitor.

```
delay(100);
```
**Kita memerlukan sebuah delay** untuk setiap kali sensor mengirim gelombang dan juga membaca gelombang pantulan.

## Sensor Ultrasonik dengan Indikator LED dan Alarm

Setelah kita berhasil mendapatkan data jarak di atas, data tersebut bisa kita manfaatkan untuk banyak hal salah satunya bisa digunakan sebagai sistem alarm untuk parkir mobil. Jadi sensornya kita taruh pada bagian belakang mobil, ketika mobil bergerak mundur saat jarak antara bagian belakang mobil dengan benda yang ada di belakang mobil sudah dekat, maka alarm akan berbunyi.

Dengan adanya alarm akan sangat memudahkan kita ketika hendak memakirkan sebuah mobil.

**Bahan-bahan yang dibutuhkan :**
* 1x Sensor Ultrasonik HCSR04
* 1x LED Warna Merah
* 1x Resistor 1kOhm
* 1x Buzzer
* 1x Arduino Uno dan Kabel
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-hcsr04-led-buzzer.png" height="450">
</p>

**Konfigurasi Pin :**

| Sensor HC-SR04  | Arduino Uno |
| ------------- | ------------- |
| VCC | 5V  |
| GND | GND  |
| Trig | D3  |
| Echo | D2  |

| LED  | Arduino Uno | Resistor |
| ------------- | ------------- | ------------- |
| Anoda (+) | -  | Kaki (-)  |
| Katoda (-) | GND  | -  |
| - | D7  | Kaki (+)  |

| Buzzer  | Arduino Uno |
| ------------- | ------------- |
| Kaki (+) | D6  |
| Kaki (-) | GND  |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [sensor_ultrasonik_hcsr04.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/03_Menghitung%20Jarak%20Benda%20menggunakan%20Sensor%20Ultrasonik%20HC-SR04/sensor_ultrasonik_hcsr04.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.


