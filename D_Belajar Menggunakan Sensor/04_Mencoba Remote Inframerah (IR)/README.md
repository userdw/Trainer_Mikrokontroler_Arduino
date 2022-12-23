## Mencoba Remote Inframerah (IR)

Pada bagian ini kita akan mempelajari remote infra merah (IR). Umumnya remote IR sudah sering kita temui pada perangkat-perangkat elektronika seperti televisi, AC, MP3, dan sebagainya. 

<p align="center">
<img src="/Gambar/remote-ir.png" height="300">
</p>

Remote IR terdiri dari 2 bagian, bagian **remote (pemancar)** dan **penerima**. Bagian pemancar akan memancarkan sinar infra merah yang kemudia akan ditangkap oleh bagian penerima.

Bagian penerima inilah yang akan kita hubungkan dengan pin input dari Arduino Uno yang kita miliki. **Setiap tombol pada remote ir memiliki kode alamat yang berbeda-beda** sehingga pada percobaan awal ini kita akan mencoba membaca data tersebut, yang nantinya data tersebut bisa kita gunakan untuk mengendalikan kondisi hidup dan mati dari perangkat elektronika.

**Bahan-bahan yang dibutuhkan :**
* 1x Remote Inframerah (IR)
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-remote-ir.png" height="450">
</p>

**Konfigurasi Pin :**

| Remote IR  | Arduino Uno |
| ------------- | ------------- |
| Kaki (+) | 5V  |
| Kaki (-) | GND  |
| S | D2  |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Unduh library ini [IRRemote](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/IRRemote.zip).
3. Jika sudah terunduh, silahkan tambahkan library tersebut di software Arduino IDE tutorial cara menambahkan library ada [di sini](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Menambahkan%20Library.md).
4. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
5. Unduh kode program [baca_remote_ir.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/04_Mencoba%20Remote%20Inframerah%20(IR)/data_remote_ir.ino).
6. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
7. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka saat kita menekan setiap tombol pada remote akan menghasilkan kode yang berbeda-beda setiap tombolnya seperti pada gambar di bawah ini:

<p align="center">
<img src="/Gambar/data-remote-ir-serial-monitor.png" height="450">
</p>

**Sekarang kita coba untuk mencatat kode dari setiap tombol :**

| Tombol  | Kode |
| ------------- | ------------- |
| 1 | 69 |
| 2 | 70  |
| 3 | 71  |
| 4 | 68 |
| 5 | 64  |
| 6 | 67  |
| 7 | 7 |
| 8 | 21 |
| 9 | 9  |
| 0 | 25 |
| * | 22  |
| # | 13  |
| Atas | 24 |
| Kanan | 90  |
| Bawah | 8 |
| Kiri | 82  |
| OK | 28 |

### Penjelasan Kode Sketch

```
#include <Wire.h>
#include <Arduino.h>
#include "EcadioIRremote.h"
```
Instruksi di atas digunakan untuk memanggil library **Wire.h**, **Arduino.h**, dan **EcadioIRremote.h** ketiga library ini kita butuhkan saat mengakses remote inframerah (IR).

```
#define RECV_PIN 2
```
Instruksi di atas digunakan untuk membuat variabel bernama **RECV_PIN** dengan nilai 2 yang merepresentasikan nomor pin digital Arduino Uno yang kita gunakan karena output sinyal dari penerima dihubungkan dengan nomor pin digital 2.

```
IRrecv IR(RECV_PIN);
```
Instruksi di atas digunakan untuk inisialisasi atau memberikan nama obyek library yang kita gunakan, yaitu dengan nama **IR**.

```
IR.enableIRIn();
```
Instruksi di atas kita gunakan untuk memulai receiver.

```
if (IR.decode()){
```
Instruksi di atas digunakan untuk menyaring sinyal inframerah antara pemancar dengan penerima, jika valid, maka kondisi IR.decode akan bernilai True.

```
if (IR.isReleased()){
```
Instruksi di atas digunakan jika sinyal inframerah yang valid telah lengkap dipancarkan dan diterima oleh receiver, maka kondisi IR.isReleased akan True.

```
Serial.print("Kode Tombol : ");
Serial.println(IR.keycode, DEC);
Serial.println("*************"); 
```
Instruksi **IR.keycode** digunakan untuk membaca kode dari tombol yang ditekan. Hasil kode setiap tombol itu bentuknya dalam bilangan heksa agar mudah kita baca, kita konversi menggunakan perintah **DEC**, yang berguna untuk mengkonversi bilangan heksa ke dalam bilangan desimal.

```
IR.resume();
```
Digunakan untuk mulai menerima sinyal inframerah lagi.

## Menghidupkan dan Mematikan LED dengan Remote IR

Dari percobaan di atas, dapat kita simpulkan bahwa setiap tombol remote memiliki kode yang berbeda-beda sehingga kode tersebut bisa kita manfaatkan untuk mengendalikan komponen-komponen elektronika salah satunya LED.

**Bahan-bahan yang dibutuhkan :**
* 1x LED Merah, 1x LED Kuning, 1x LED Hijau
* 1x Remote IR (Pemancar dan Penerima)
* 3x Resistor 1kOhm
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-remote-ir-led.png" height="450">
</p>

**Konfigurasi Pin :**

| Remote IR  | Arduino Uno |
| ------------- | ------------- |
| Kaki (+) | 5V  |
| Kaki (-) | GND  |
| S | D2  |

| Resistor untuk LED Merah  | Arduino Uno | LED Merah |
| ------------- | ------------- |------------- |
| - |  GND |Katoda (-) |
| Kaki (+) | D7  |- |
| Kaki (-) |  |Anoda (+) |

| Resistor untuk LED Kuning  | Arduino Uno | LED Kuning |
| ------------- | ------------- |------------- |
| - |  GND |Katoda (-) |
| Kaki (+) | D6  |- |
| Kaki (-) |  |Anoda (+) |

| Resistor untuk LED Hijau  | Arduino Uno | LED Hijau |
| ------------- | ------------- |------------- |
| - |  GND |Katoda (-) |
| Kaki (+) | D5  |- |
| Kaki (-) |  |Anoda (+) |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [remote_ir_led.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/04_Mencoba%20Remote%20Inframerah%20(IR)/remote_ir_led.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka kondisi akan mengikuti seperti tabel di bawah ini:
|  | LED Merah (On) |LED Merah (Off) |LED Kuning (On) |LED Kuning (Off) |LED Hijau (On) |LED Hijau (Off) |
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |
| **Tombol** | 1 |4 |2 |5 |3 |6|

### Penjelasan Kode Sketch

```
      if(IR.keycode == 69){
        digitalWrite(LEDMerah, HIGH);    
      }
      else if(IR.keycode == 70){
        digitalWrite(LEDKuning, HIGH);
      }
      else if(IR.keycode == 71){
        digitalWrite(LEDHijau, HIGH);
      }
      else if(IR.keycode == 68){
        digitalWrite(LEDMerah, LOW);
      }
      else if(IR.keycode == 64){
        digitalWrite(LEDKuning, LOW);
      }
      else if(IR.keycode == 67){
        digitalWrite(LEDHijau, LOW);
      }
```
Instruksi di atas merupakan seleksi kondisi dengan if, jadi logikanya jika :
* IR.keycode bernilai 69, maka LED merah akan menyala.
* IR.keycode bernilai 70, maka LED kuning akan menyala.
* IR.keycode bernilai 71, maka LED hijau akan menyala.
* IR.keycode bernilai 68, maka LED merah akan mati.
* IR.keycode bernilai 64, maka LED kuning akan mati.
* IR.keycode bernilai 67, maka LED hijau akan mati.

