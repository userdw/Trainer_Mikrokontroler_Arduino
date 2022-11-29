## Menyalakan dan Mematikan LED

Pada proyek ini kita akan memanfaatkan GPIO pada Arduino Uno sebagai output. Karena dijadikan sebagai output, nantinya pin yang kita jadikan output akan dapat mengeluarkan data digital/tegangan yang nilainya hanya 2, yaitu **High (1/5V)** dan **Low (0/0V)**.

Berikut alat-alat yang kita butuhkan:
* 1x Arduino Uno + Kabel USB
* 1x Resistor 1kOhm
* 4x Kabel Jumper Male to Male
* 1x LED 5mm Merah

Sebelum itu, kita kenalan dulu dengan komponen elektronika yang akan kita gunakan dalam proyek ini, yaitu **LED** dan **resistor**.

### Resistor

Resistor merupakan komponen pasif yang memiliki fungsi sebagai pembatas arus listrik yang mengalir pada suatu rangkaian listrik. Pada proyek ini kita memerlukan resistor untuk membatasi arus listrik yang akan mengalir pada LED.



Untuk hubungan komponennya bisa dilihat seperti gambar di bawah ini:

<p align="center">
<img src="/Gambar/gpio-output-led.png" height="500">
</p>

Pin yang kita gunakan adalah pin nomor 2, kita jadikan dia sebagai output untuk menyalakan dan mematikan LED.
