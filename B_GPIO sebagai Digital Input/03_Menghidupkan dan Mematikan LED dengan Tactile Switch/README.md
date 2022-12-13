# Menghidupkan dan Mematikan LED dengan Tactile Switch

Pada bagian sebelumnya, kita telah belajar bagaimana cara membaca data digital menggunakan tactile switch. Data digital yang berhasil kita baca itu bisa kita manfaatkan untuk banyak hal, salah satunya adalah kita bisa memanfaatkan data digital untuk menghidupkan mematikan LED.

## Menghidupkan dan Mematikan 1 Buah LED dengan 1 Buah Tactile Switch 

**Bahan-bahan yang Dibutuhkan :**
* 1x Resistor 1kOhm
* 1x Resistor 10kOhm
* 1x Tactile Switch
* 1x LED Warna Merah
* 1x Arduino Uno dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-pb-dan-led.png" height="500">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [menghidupkan_dan_mematikan_led_dengan_tactile_switch.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/03_Menghidupkan%20dan%20Mematikan%20LED%20dengan%20Tactile%20Switch/menghidupkan_dan_mematikan_LED_dengan_Tactile_Switch.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat kita menekan tombol tactile switch, maka LED akan menyala. Sedangkan jika kita tidak menekan tombol tactile switchnya, maka LED akan mati.

### Penjelasan Kode Sketch

```
#define pinPushButton 4
#define pinLED 5
```
Instruksi di atas digunakan untuk membuat variabel bernama **pinPushButton** dan **pinLED** yang masing-masing memiliki nilai 4 dan 5 yang mempresentasikan nomor pin digital yang digunakan.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(pinPushButton, INPUT);
  pinMode(pinLED, OUTPUT);
}
```
Instruksi di atas digunakan untuk mengkonfiguasi **pinPushButton** sebagai input dan **pinLED** sebagai output.
