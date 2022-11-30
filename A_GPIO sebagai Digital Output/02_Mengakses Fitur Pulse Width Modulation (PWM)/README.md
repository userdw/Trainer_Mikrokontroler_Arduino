# Pulse Width Modulation (PWM)

Sekarang kita akan belajar mengenai PWM dan juga mencoba menggunakannya pada board Arduino Uno. Sebelum itu, kita kenalan dulu dengan yang namanya PWM.

Pulse Width Modulation (PWM) atau modulasi lebar pulsa adalah teknik untuk mendapatkan hasil analog dengan cara digital. Cara digital ini maksudnya dengan membuat gelombang persegi yang diaktifkan antara hidup dan mati.

Kondisi hidup-mati ini mensimulasikan tegangan antara **HIGH (5V) dan LOW (0V)**. Dimana durasi sinyal dalam waktu kondisi hidup disebut dengan **"waktu on"**, sedangkan untuk durasi sinyal dalam kondisi mati disebut dengan **"waktu off"**. Sehingga untuk mendapatkan nilai analog yang bervariasi kita hanya perlu bermain seberapa lama durasi **"waktu on"** itu terjadi.

<p align="center">
<img src="/Gambar/pulse-width-modulation.png" height="300">
</p>

**Rumusnya :**
* ```Duty Cycle : waktu on/(waktu on + waktu off)```
* ```Tegangan Output (Vout) : Duty Cycle x Vin```

**Dimana :**
* Waktu On = Kondisi saat sinyal dalam kondisi HIGH
* Waktu Off = Kondisi saat sinyal dalam kondisi LOW
* Waktu Total (Waktu on + Waktu off) = Periode satu gelombang

Pada pin GPIO Arduino Uno tidak semua pin memiliki fitur PWM hanya beberapa pin saja yang ditandai dengan **label "~"**. Untuk menggunakan fitur PWM kita hanya perlu memanggil fungsi ```analogWrite()```.

Ada 6 pin pada Arduino Uno yang memiliki fitur PWM ```3, 5, 6, 9, 10, 11```.

Dengan PWM, kita bisa menghasilkan tegangan yang bervariasi (analog) sehingga bisa kita terapkan salah satunya untuk mengatur tingkat kecerahan LED.

## Mengatur Tingkat Kecerahan LED dengan PWM

<p align="center">
<img src="/Gambar/pwm-led.png" height="500">
</p>

Jika kita lihat pada gambar di atas semakin besar **siklus kerja (duty cycle)**, maka nilai tegangan yang dihasilkan akan semakin besar sehingga mempengaruhi tingkat kecerahan dari LEDnya.

Sekarang kita akan mencoba membuktikannya dengan 2 buah LED (warna merah dan hijau), pada saat kondisi awal kita akan membuat LED merah akan menyala terang sedangkan LED hijau kita buat menyala redup. Nanti seiring dengan berjalannya waktu, LED merah akan semakin redup sedangkan LED hijau akan semakin terang.

**Bahan-bahan yang Dibutuhkan :**
* 1x Arduino Uno + Kabel USB
* 1x LED Merah
* 1x LED Kuning
* 2x Resistor 200 Ohm
* 7x Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/gpio-pwm-led.png" height="400">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti gambar di atas, pin PWM yang kita gunakan adalah pin nomor 5 dan 6
2. Unduhh kode program [pwm_led.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/A_GPIO%20sebagai%20Digital%20Output/02_Mengakses%20Fitur%20Pulse%20Width%20Modulation%20(PWM)/pwm_led.ino).
3. Setelah terunduh, silahkan buka software Arduino IDE lalu klik upload ke board Arduino Uno.
4. Jika tidak ada kesalahan, maka LED merah akan semakin redup sedangkan LED kuning akan semakin terang.
