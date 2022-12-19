# Mengatur Kecerahan LED dengan Potensiometer

Pada percobaan sebelumnya, kita sudah bisa membaca data analog yang memiliki range 0 ~ 1023 (10bit). Sekarang kita bisa memanfaatkan data tersebut untuk menghasilkan tegangan yang berubah-ubah untuk mengatur tingkat kecerahan LED.

Jadi, kita akan memanfaatkan pin PWM, namun pada percobaan PWM kita mengetahui **duty cycle** yang dihasilkan memiliki range **0 (0V) ~ 255 (5V)** sedangkan data analog yang kita hasilkan memiliki range **0 ~ 1023** sehingga kita harus men-scale data analog 0 ~ 1023 selinier dengan nilai range PWM, yaitu 0 ~ 255.

<p align="center">
<img src="/Gambar/scale.png" height="200">
</p>

Seperti gambar di atas, kita akan men-scale hasil ADC menjadi sesuai nilai range dalam fungsi PWM.

**Bahan-bahan yang Dibutuhkan :**
* 1x Potensiometer
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-potensiometer.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [scale_analog.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/C_Analog%20Input/03_Mengatur%20Tingkat%20Kecerahan%20LED%20dengan%20Potensiometer/scale_analog.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat kita membuka serial monitor, maka akan tampil nilai data analog dan juga nilai hasil scale. Ketika nilai data analog sebesar 1023, maka nilai scale akan bernilai 255.

<p align="center">
<img src="/Gambar/data-analog-dan-scale.png" height="450">
</p>

### Penjelasan Kode Sketch

```
#define pinPotensiometer A0
int bacaDataAnalog = 0;
int dataScale = 0;
```
Instruksi di atas digunakan untuk membuat 3 variabel yang bernama **pinPotensiometer**, **bacaDataAnalog**, dan **dataScale**.

```
bacaDataAnalog = analogRead(pinPotensiometer);
```
Instruksi di atas digunakan untuk menampung hasil pembacaan data analog dari pin yang disimpan dalam variabel **bacaDataAnalog**.

```
dataScale = map(bacaDataAnalog, 0, 1023, 0, 255);
```
Instruksi di atas digunakan untuk **menscale data analog** yang bernilai 0 ~ 1023 menjadi 0 ~ 255 yang hasil konversinya ditampung pada variabel **dataScale**. Dalam men-scale nilainya, kita menggunakan fungsi map yang ada pada Arduino IDE.

```
Serial.print("Data Analog :");
Serial.print(bacaDataAnalog);
Serial.print("   ");
Serial.print("Hasil Scale :");
Serial.print(dataScale);
Serial.println("   ");
```
Instruksi di atas digunakan untuk mencetak data ke serial monitor untuk monitoring data pembacaan analog dan juga nilai hasil scale.

## Mengatur Kecerahan LED dengan Data Hasil Scale

Percobaan kita di atas sudah menghasilkan data hasil scale yang didapatkan dari analog input dengan nilai yang sesuai dalam range PWM, yaitu 0 sampai 255. Sekarang kita akan memanfaatkannya untuk mengatur tingkat kecerahan dari LED.

**Bahan-bahan yang Dibutuhkan :**
* 1x Potensiometer
* 1x LED Warna Merah
* 1x Resistor 1kOhm
* 1x Arduino Uno dan Kabel
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-potensiometer-led.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [kecerahan_LED.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/C_Analog%20Input/03_Mengatur%20Tingkat%20Kecerahan%20LED%20dengan%20Potensiometer/kecerahan_LED.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat kita putar tuas dari potensiometernya, maka LED akan menyala sesuai dengan nilai scale yang dihasilkan, jika nilai scalenya 255, maka LED akan menyala dengan full. Kita juga bisa membuka serial monitor untuk melihat datanya.

<p align="center">
<img src="/Gambar/pwm-led.png" height="400">
</p>

### Penjelasan Kode Sketch

```
#define pinPotensiometer A0
#define pinLED 6
int bacaDataAnalog = 0;
int dataScale = 0;
```
Instruksi di atas digunakan untuk membuat variabel **pinPotensiometer**, **pinLED**, **bacaDataAnalog**, dan **dataScale** yang memiliki nilai masing-masing.

```
bacaDataAnalog = analogRead(pinPotensiometer);
```
Instruksi di atas digunakan untuk menampung data analog yang dihasilkan oleh **analogRead**, yang datanya akan ditampung pada variabel **bacaDataAnalog**.

```
dataScale = map(bacaDataAnalog, 0, 1023, 0, 255);
```
Instruksi di atas digunakan untuk **menscale data analog** yang bernilai 0 ~ 1023 menjadi 0 ~ 255 yang hasil konversinya ditampung pada variabel **dataScale**. Dalam men-scale nilainya, kita menggunakan fungsi map yang ada pada Arduino IDE.

```
analogWrite(pinLED, dataScale);
```
Instruksi di atas digunakan untuk memberikan nilai tegangan PWM yang nilai duty cyclenya dipengaruhi oleh nilai **dataScale**.

```
Serial.print("Data Analog :");
Serial.print(bacaDataAnalog);
Serial.print("   ");
Serial.print("Hasil Scale :");
Serial.print(dataScale);
Serial.println("   ");
```
Instruksi di atas digunakan untuk mencetak data ke serial monitor untuk monitoring data pembacaan analog dan juga nilai hasil scale.
