# Bermain-main dengan LED RGB (Red, Green, dan Blue)

LED RGB merupakan komponen elektronika yang mengubah energi listrik menjadi cahaya sama seperti dengan LED. Namun, LED RGB memiliki karakteristik yang unik, karena komponen ini mampu menampilkan jumlah warna yang banyak dengan menggunakan kombinasi campuran 3 warna dasar, yaitu merah (Red), hijau (Green), dan biru (Blue) sehingga komponen ini disebut dengan LED RGB.

LED RGB terdiri dari 2 jenis, yaitu **Common Cathode** dan **Common Anode**. Komponen ini memiliki 4 kaki, dimana untuk common cathode terdapat **3 kaki positif untuk warna merah (R), hijau (G), biru (B) dan 1 kaki negatif**. Sedangkan untuk common anode terdapat **3 kaki negatif untuk warna merah (R), hijau (G), biru (B) dan 1 kaki positif**. Pada trainer kit ini, kita akan menggunakan LED RGB berjenis **common anoda**.

<p align="center">
<img src="/Gambar/led-rgb.jpg" height="250">
</p>

LED RGB berjenis common anoda untuk kaki positifnya harus terhubung dengan pin 5V dari Arduino Uno. Sedangkan untuk kaki warnanya terhubung dengan pin digital Arduino Uno, namun sebelum itu kita tetap harus menseri tiap kakinya dengan sebuah resistor agar arus listrik yang mengalir pada masing-masing kakinya tidak besar yang dapat merusak komponen tersebut.

Ketika kita ingin menampilkan warna merah, maka hal yang harus kita lakukan adalah dengan membuat arus listrik mengalir dari kutub positif menuju ke kaki merah lalu menuju ke kutub negatif. 

Jadi, logikanya kita harus membuat pin digital yang terhubung dengan kaki merah harus kita kondisikan bertegangan LOW (0V) sedangkan untuk kaki lainnya kita kondisikan bertegangan HIGH (5V) sehingga nanti LED RGB akan menampilkan warna merah, begitu juga kalau ingin menampilkan warna biru maupun hijau.

Selain menampilkan warna merah, biru, dan hijau, kita juga bisa membuat warna lain dengan mencampurkan ketiga warna tersebut, misalnya kita mencampurkan warna merah, biru, dan hijau nanti akan menjadi warna putih misalnya.

<p align="center">
<img src="/Gambar/rangkaian-led-rgb.png" height="500">
</p>

**Pin-pin yang kita gunakan :**
* **Kaki Positif :** Hubungkan ke 5V.
* **Kaki Merah :** Diseri dengan resistor lalu hubungkan ke pin digital nomor 2.
* **Kaki Hijau :** Diseri dengan resistor lalu hubungkan ke pin digital nomor 3.
* **Kaki Biru :** Diseri dengan resistor lalu hubungkan ke pin digital nomor 4.

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti gambar di atas.
2. Unduhh kode program [led_rgb.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/A_GPIO%20sebagai%20Digital%20Output/03_Bermain-main%20dengan%20LED%20RGB%20(Red%2C%20Green%2C%20dan%20Blue)/led_rgb.ino).
3. Setelah terunduh, silahkan buka software Arduino IDE lalu klik upload ke board Arduino Uno.
4. Jika tidak ada kesalahan, maka LED RGB akan menyala bergantian dari warna merah, hijau, dan biru.

### Penjelasan Kode Sketch

```
#define ledMerah 2
#define ledHijau 3
#define ledBiru 4
```
Instruksi di atas berguna untuk membuat variabel yang bernama **ledMerah**, **ledHijau**, dan **ledBiru**.

```
void warnaRGB(bool logikaMerah, bool logikaHijau, bool logikaBiru){
  digitalWrite(ledMerah, logikaMerah);
  digitalWrite(ledHijau, logikaHijau);
  digitalWrite(ledBiru, logikaBiru);
}
```
Di atas merupakan fungsi warnaRGB() yang memiliki input dengan nama variabel logikaMerah, logikaHijau, dan logikaBiru. Dimana variabel ini bertipe data bool (tipe data logika), yang bernama bisa bernilai **True (1) atau False (0)**.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(ledMerah, OUTPUT);
  pinMode(ledHijau, OUTPUT);
  pinMode(ledBiru, OUTPUT);
}
```
Instruksi di atas digunakan untuk mengkonfigurasi pin-pin yang digunakan sebagai output.

```
void loop() {
  // put your main code here, to run repeatedly:
  warnaRGB(LOW, HIGH, HIGH);
  delay(1000);
  warnaRGB(HIGH, LOW, HIGH);
  delay(1000);
  warnaRGB(HIGH, HIGH, LOW);
  delay(1000);
}
```
Instruksi di atas berfungsi untuk membuat LED RGB menyala warna merah, hijau, dan biru secara bergantian.
* **warnaRGB(LOW, HIGH, HIGH);** fungsi warnaRGB memiliki tiga inputan ```LOW, HIGH, HIGH``` yang dimana ketiga nilai digital ini akan dijadikan nilai dari variabel logikaMerah, logikaHijau, dan logikaBiru. Pada fungsi ini berdasarkan inputannya, maka variabel ```logikaMerah akan bernilai LOW```, ```logikaHijau bernilai HIGH```, dan ```logikaBiru bernilai HIGH``` sehingga akan membuat LED RGB akan menghasilkan warna merah.

Dengan **mengganti nilai dari warnaRGB()**, kita bisa mendapatkan beragam warna dari percampuran 3 warna dasar yang ada pada LED RGB.

