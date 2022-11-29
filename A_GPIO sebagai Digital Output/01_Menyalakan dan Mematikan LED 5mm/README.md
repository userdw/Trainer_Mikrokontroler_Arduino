# Menyalakan dan Mematikan LED

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

## Percobaan

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

## Penjelasan Sketch

```
#define ledPinMerah 2
```

Instruksi di atas berguna untuk membuat variabel bernama **ledPinMerah** dengan memiliki nilai 2, yang mewakili nomor pin digital yang kita gunakan.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLedMerah, OUTPUT);
}
```

Instruksi ini **pinMode(pinLedMerah, OUTPUT)** digunakan untuk menkonfigurasi pin nomor 2 dijadikan sebagai digital output.
