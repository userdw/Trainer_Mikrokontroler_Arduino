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

**Konfigurasi Pin:**

| DHT11  | Arduino Uno |
| ------------- | ------------- |
| +  | 5V  |
| OUT | D2  |
| - | GND  |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Unduh library ini [DHT11](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/DHT-sensor-library-master.zip) dan [Adafruit_Sensor](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/Adafruit_Sensor-master.zip).
3. Jika sudah terunduh, silahkan tambahkan library tersebut di software Arduino IDE tutorial cara menambahkan library ada [di sini](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Menambahkan%20Library.md).
4. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
5. Unduh kode program [baca_suhu_kelembapan_dht11.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/01_Mengetahui%20Suhu%20dan%20Kelembapan%20Lingkungan%20dengan%20Sensor%20DHT11/baca_suhu_dht11.ino).
6. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
7. Jangan lupa untuk memilih baudrate sebesar 9600.

Setelah sketch sudah terupload dengan benar silahkan buka serial monitor, maka akan tampil data suhu dan kelembapan seperti gambar di bawah ini:

<p align="center">
<img src="/Gambar/serial-monitor-dht11.png" height="450">
</p>

### Penjelasan Kode Sketch

```
#include <DHT.h>
```
Instruksi di atas digunakan untuk memanggil library DHT11.

```
DHT dht(2, DHT11);
```
Instruksi di atas digunakan untuk memberi nama **obyek dari library DHT dengan nama dht**. Obyek ini memiliki **inputan 2 parameter**, yaitu (2, DHT11). 2 merupakan pin yang kita gunakan pada Arduino Uno sedangkan DHT11 merupakan tipe sensor DHT yang kita gunakan.

```
dht.begin();
```
Instruksi di atas digunakan untuk memulai mengakses sensor DHT11.

```
float kelembaban = dht.readHumidity();
float suhu = dht.readTemperature();
```
Instruksi di atas digunakan untuk membuat variabel bernama kelembapan dan suhu dengan tipe data float (bilangan desimal) karena data yang dihasilkan oleh sensor merupakan data dalam bentuk bilangan desimal.
* **dht.readHumidity();**, digunakan untuk membaca data kelembapan.
* **dht.readTemperature();**, digunakan untuk membaca data suhu.

```
Serial.print("Kelembaban: ");
Serial.print(kelembaban);
Serial.print("%RH");
Serial.print(" ");
Serial.print("Suhu: ");
Serial.print(suhu);
Serial.println("°C");
```
Instruksi di atas digunakan untuk menampilkan data suhu (dalam celcius) dan kelembapan menggunakan serial monitor.

## Konversi Data Suhu

Data suhu yang dihasilkan oleh DHT11 itu dalam format celcius (°C) sedangkan kita tahu ada beberapa satuan suhu yang kita kenal, yaitu **reamur**, **fahrenheit**, dan **kelvin**.

Kita bisa mengkonversi data suhu celcius ke bentuk satuan-satuan suhu yang lainnya dengan bantuan rumus seperti pada gambar di bawah ini:

<p align="center">
<img src="/Gambar/satuan suhu.png" height="250">
</p>

Berdasarkan tabel di atas, maka dapat kita simpulkan:
* **Reamur (R)** = 4/5 x C atau 0.8 x C (Konversi Celcius ke Reamur)
* **Fahrenheit (F)** = 9/5 x C + 32 atau 1.8 x C + 32 (Konversi Celcius ke Fahrenheit)
* **Kelvin (K)** = C + 273 (Konversi Celcius ke Kelvin)

**Langkah-langkahnya :**
1. Rangkaian yang digunakan masih sama seperti yang di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [konversi_suhu.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/01_Mengetahui%20Suhu%20dan%20Kelembapan%20Lingkungan%20dengan%20Sensor%20DHT11/konversi_suhu.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, silahkan buka serial monitor maka akan tampil seperti pada gambar di bawah ini:

<p align="center">
<img src="/Gambar/serial-monitor-konversi-satuan-suhu.png" height="450">
</p>

Kita bisa mengoreksinya dengan rumus yang ada pada tabel di atas, apakah konversi yang kita lakukan sudah benar atau belum.

### Penjelasan Kode Sketch

```
float reamur = 0;
float fahrenheit = 0;
float kelvin = 0;
```
Instruksi di atas kita gunakan untuk membuat variabel bernama reamur, fahrenheit, dan kelvin yang masing-masing bertipe data float (bilangan desimal).

```
reamur = 0.8*suhu;
```
Instruksi di atas digunakan untuk mengkonversi satuan celcius ke reamur.

```
fahrenheit = (1.8*suhu) + 32;
```
Instruksi di atas digunakan untuk mengkonversi satuan celcius ke fahrenheit.

```
kelvin = suhu + 273;
```
Instruksi di atas digunakan untuk mengkonversi satuan celcius ke kelvin.
