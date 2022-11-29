# Menyalakan dan Mematikan 1 Buah LED

Pada proyek ini kita akan memanfaatkan GPIO pada Arduino Uno sebagai output. Karena dijadikan sebagai output, nantinya pin yang kita jadikan output akan dapat mengeluarkan data digital/tegangan yang nilainya hanya 2, yaitu **High (1/5V)** dan **Low (0/0V)**.

Berikut alat-alat yang kita butuhkan:
* 1x Arduino Uno + Kabel USB
* 1x Resistor 1kOhm
* 4x Kabel Jumper Male to Male
* 1x LED 5mm Merah

Sebelum itu, kita kenalan dulu dengan komponen elektronika yang akan kita gunakan dalam proyek ini, yaitu **LED** dan **resistor**.

### Resistor

Resistor merupakan komponen pasif yang memiliki fungsi sebagai pembatas arus listrik yang mengalir pada suatu rangkaian listrik. Pada proyek ini kita memerlukan resistor untuk membatasi arus listrik yang akan mengalir pada LED.

<p align="center">
<img src="/Gambar/resistor.jpg" height="200">
</p>

Resistor memiliki 2 kaki namun tidak memiliki polaritas pada kakinya sehingga dalam penggunaannya dapat dibolak-balik kakinya. Selain sebagai pembatas arus listrik, ada banyak penerapan yang bisa kita lakukan menggunakan resistor salah satunya dijadikan sebagai **pull-up** maupun **pull-down**.

### LED

LED (Light Emiting Diode) merupakan komponen elektronika yang mengubah energi listrik menjadi cahaya. Komponen ini memiliki 2 kaki yang memiliki polaritas positif (+) dan negatif (-) sehingga dalam pemasangannya harus diperhatikan dengan baik.

<p align="center">
<img src="/Gambar/led.png" height="300">
</p>

LED dapat bekerja dengan baik saat arus listrik yang melewatinya tidak lebih dari 20mA, jika lebih dapat berpeluang merusak komponen LED itu sendiri sehingga dalam penggunaannya LED harus diseri dengan sebuah resistor untuk membatasi arus listrik yang melewatinya.

### Percobaan

<p align="center">
<img src="/Gambar/gpio-output-led.png" height="500">
</p>

<p align="center">
<img src="/Gambar/rangkaian-gpio-output-led.png" height="400">
</p>

**Langkah-Langkahnya:**
1. Ikuti seperti rangkaian di atas.
2. Unduhh kode program [menyalakan_dan_mematikan_led.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/A_GPIO%20sebagai%20Digital%20Output/01_Menyalakan%20dan%20Mematikan%20LED%205mm/menyalakan_dan_mematikan_led.ino).
3. Setelah terunduh, silahkan buka software Arduino IDE lalu klik upload ke board Arduino Uno.
4. Jika tidak ada kesalahan, maka LED akan hidup dan mati secara bergantian setiap 1 detik sekali.

### Penjelasan Kode Sketch

```
#define pinLedMerah 2
```

Instruksi di atas berguna untuk membuat variabel bernama **pinLedMerah** dengan memiliki nilai 2, yang mewakili nomor pin digital yang kita gunakan.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLedMerah, OUTPUT);
}
```

Instruksi ini **pinMode(pinLedMerah, OUTPUT)** digunakan untuk menkonfigurasi pin nomor 2 dijadikan sebagai digital output.

```
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLedMerah, HIGH);
  delay(1000);
  digitalWrite(pinLedMerah, LOW);
  delay(1000);
}
```

Ini merupakan blok program utama yang berguna untuk menghidupkan dan mematikan LED secara bergantian setiap 1 detik sekali.
* Instruksi **digitalWrite(pinLedMerah, HIGH)** berguna untuk membuat pin digital nomor 2 mengeluarkan tegangan sebesar 5V.
* **delay(1000)** berguna untuk mendelay atau mempause program selama 1 detik.
* **digitalWrite(pinLedMerah, LOW)** berguna untuk membuat pin digital nomor 2 mengeluarkan tegangan sebesar 0V.
* **delay(1000)** berguna untuk mendelay atau mempause program selama 1 detik.

Kita bisa mengedit sketch di atas sesuai yang kita inginkan seperti menambah atau mengurangi waktu delay.

## Menyalakan dan Mematikan 5 Buah LED

Setelah kita belajar menghidupkan dan mematikan 1 buah LED, sekarang kita akan belajar untuk memcoba menghidupkan dan mematikan lebih dari 1 LED. Berarti kita akan membutuhkan 5 buah pin GPIO yang akan kita jadikan sebagai digital output.

Pin-pin yang kita gunakan ```Pin 2, 3, 4, 5, dan 6```.

Berikut alat-alat yang kita butuhkan:
* 1x Arduino Uno
* 5x Resistor 1k Ohm
* 5x LED Merah 
* 9x Kabel Jumper Male to Male

### Percobaan

<p align="center">
<img src="/Gambar/rangkaian-gpio-output-led-2.png" height="500">
</p>

**Langkah-Langkahnya:**
1. Ikuti seperti rangkaian di atas.
2. Unduhh kode program [menyalakan_dan_mematikan_5_buah_led.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/A_GPIO%20sebagai%20Digital%20Output/01_Menyalakan%20dan%20Mematikan%20LED%205mm/menyalakan_dan_mematikan_5_buah_led.ino).
3. Setelah terunduh, silahkan buka software Arduino IDE lalu klik upload ke board Arduino Uno.
4. Jika tidak ada kesalahan, maka 5 buah LED akan hidup dan mati secara bersamaan setiap 1 detik sekali.

### Penjelasan Kode Sketch

```
#define pinLedSatu 6
#define pinLedDua 5
#define pinLedTiga 4
#define pinLedEmpat 3
#define pinLedLima 2
```
Instruksi di atas berguna untuk membuat variabel dengan nilai-nilai yang sesuai dengan pin yang akan kita gunakan sebagai digital output.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLedSatu, OUTPUT);
  pinMode(pinLedDua, OUTPUT);
  pinMode(pinLedTiga, OUTPUT);
  pinMode(pinLedEmpat, OUTPUT);
  pinMode(pinLedLima, OUTPUT);
}
```
Instruksi di atas berguna untuk mengkonfigurasi pin-pin yang digunakan dijadikan sebagai digital output.

```
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLedSatu, HIGH);
  digitalWrite(pinLedDua, HIGH);
  digitalWrite(pinLedTiga, HIGH);
  digitalWrite(pinLedEmpat, HIGH);
  digitalWrite(pinLedLima, HIGH);
  delay(1000);
  digitalWrite(pinLedSatu, LOW);
  digitalWrite(pinLedDua, LOW);
  digitalWrite(pinLedTiga, LOW);
  digitalWrite(pinLedEmpat, LOW);
  digitalWrite(pinLedLima, LOW);
  delay(1000);
}
```
Ini merupakan blok program utama yang berguna untuk menghidupkan dan mematikan 5 buah LED secara bersamaan setiap 1 detik sekali.

Kita bisa mengedit sketch di atas sesuai dengan yang kita inginkan seperti menambah atau mengurangi waktu delay.
