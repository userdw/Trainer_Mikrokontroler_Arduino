# Membuat Bunyi dengan Buzzer

Pada bagian ini kita akan mencoba membuat suara dengan komponen Buzzer. Buzzer sendiri merupakan komponen elektronika yang mengubah energi listrik menjadi suara, komponen ini memiliki 2 kaki yaitu kaki positif (+) dan negatif (-).

Umumnya, buzzer sendiri terbagi menjadi 2 jenis, yaitu **passive buzzer** dan **aktif buzzer**. 

<p align="center">
<img src="/Gambar/aktif-pasif-buzzer.jpg" height="300">
</p>

Untuk yang **passive buzzer**, kita membutuhkan gelombang kotak dan frekuensi untuk membuatnya berbunyi sehingga buzzer jenis ini umumnya digunakan sebagai speaker untuk memutar musik.

Sedangkan untuk yang **aktif buzzer**, kita hanya membutuhkan tegangan saja untuk membuatnya berbunyi sehinggi buzzer jenis ini umumnya digunakan sebagai alarm di sekolah, kantor, maupun tempat-tempat lainnya.

Sekarang kita akan mencoba membuat bunyi dari buzzer ini dengan menggunakan Arduino Uno.

**Bahan-bahan yang dibutuhkan :**
* 1x Arduino Uno
* 1x Aktif Buzzer
* 4x Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-buzzer.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti gambar di atas, pin PWM yang kita gunakan adalah pin digital nomor 5
2. Unduhh kode program [membunyikan_buzzer.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/A_GPIO%20sebagai%20Digital%20Output/04_Membuat%20Bunyi%20Beep-Beep%20dengan%20Buzzer/membunyikan_buzzer.ino).
3. Setelah terunduh, silahkan buka software Arduino IDE lalu klik upload ke board Arduino Uno.
4. Jika tidak ada kesalahan, maka Buzzer akan bergantian bunyi dan diam setiap 1 detik sekali.

### Penjelasan Kode Sketch

```
#define pinBuzzer 3
```
Instruksi di atas digunakan untuk membuat variabel bernama pinBuzzer dengan nilai 3 yang merepresentasikan nomor pin digital Arduino Uno.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(pinBuzzer, OUTPUT);
}
```
Instruksi di atas digunakan untuk mengkonfigurasi pin nomor 3 dijadikan sebagai digital output.

```
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinBuzzer, HIGH);
  delay(1000);
  digitalWrite(pinBuzzer, LOW);
  delay(1000);
}
```
Instruksi di atas digunakan untuk membuat Buzzer saling bergantian berbunyi dan diam setiap 1 detik sekali.
