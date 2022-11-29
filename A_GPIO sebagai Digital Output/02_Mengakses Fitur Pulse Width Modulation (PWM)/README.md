# Pulse Width Modulation (PWM)

Sekarang kita akan belajar mengenai PWM dan juga mencoba menggunakannya pada board Arduino Uno. Sebelum itu, kita kenalan dulu dengan yang namanya PWM.

Pulse Width Modulation (PWM) atau modulasi lebar pulsa adalah teknik untuk mendapatkan hasil analog dengan cara digital. Cara digital ini maksudnya dengan membuat gelombang persegi yang diaktifkan antara hidup dan mati.

Kondisi hidup-mati ini mensimulasikan tegangan antara HIGH (5V) dan LOW (0V). Dimana durasi sinyal dalam waktu kondisi hidup disebut dengan **"waktu on"**, sedangkan untuk durasi sinyal dalam kondisi mati disebut dengan **"waktu off"**. Sehingga untuk mendapatkan nilai analog yang bervariasi kita hanya perlu bermain seberapa lama durasi **"waktu on"** itu terjadi.

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

