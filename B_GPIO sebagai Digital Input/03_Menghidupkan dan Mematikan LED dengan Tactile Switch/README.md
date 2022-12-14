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

```
void loop() {
  // put your main code here, to run repeatedly:
  bool baca_pb = digitalRead(pinPushButton);
  if(baca_pb == HIGH){
    digitalWrite(pinLED, HIGH);
  }
  else{
    digitalWrite(pinLED, LOW);
  }
}
```
Instruksi di atas jika **baca_pb** bernilai HIGH/1, maka lampu LED akan menyala. Sedangkan, jika **baca_pb** bernilai LOW/0, maka LED akan mati.

## Menghidupkan dan Mematikan 3 Buah LED dengan 3 Buah Tactile Switch

Sekarang kita akan mencoba dengan 3 buag tactile switch untuk menghidupkan dan mematikan 3 buah LED.

**Bahan-bahan yang Dibutuhkan :**
* 3x Resistor 1kOhm
* 3x Tactile Switch
* 1x LED Warna Merah
* 1x LED Warna Kuning
* 1x LED Warna Hijau
* 1x Arduino Uno dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-input-pb-3-led-3.png" height="500">
</p>

Pada gambar di atas, kita akan menggunakan **internal resistor pull-up** dengan mengakses fitur **INPUT_PULLUP** yang ada pada Arduino Uno sehingga kita tidak memerlukan tambahan resistor.

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [pb_3_led_3.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/03_Menghidupkan%20dan%20Mematikan%20LED%20dengan%20Tactile%20Switch/pb_3_led_3.ino).
5. Upload kode sketch tersebut.

**Keterangan :**
* pinLED_KeSatu = LED Warna Merah
* pinLED_KeDua = LED Warna Kuning
* pinLED_KeTiga = LED Warna Hijau

**Jika sketch sudah berhasil diupload dengan benar, maka :**
* Tombol Kesatu ditekan = LED warna merah akan hidup
* Tombol kedua ditekan = LED warna kuning akan hidup
* Tombol ketiga ditekan = LED warna hijau akan hidup
* Tombol tidak ada yang ditekan = semua LED tidak ada yang hidup

### Penjelasan Kode Sketch

```
#define pinLED_KeSatu 7
#define pinLED_KeDua 6
#define pinLED_KeTiga 5
#define pinPB_KeSatu 4
#define pinPB_KeDua 3
#define pinPB_KeTiga 2
```
Instruksi di atas digunakan untuk membuat variabel bernama **pinLED_KeSatu**, **pinLED_KeDua**, **pinLED_KeTiga**, **pinPB_KeSatu**, **pinPB_KeDua**, dan **pinPB_KeTiga** di mana setiap variabel tersebut memiliki nilai yang mempresentasikan nomor pin digital yang kita gunakan.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED_KeSatu, OUTPUT);
  pinMode(pinLED_KeDua, OUTPUT);
  pinMode(pinLED_KeTiga, OUTPUT);
  pinMode(pinPB_KeSatu, INPUT_PULLUP);
  pinMode(pinPB_KeDua, INPUT_PULLUP);
  pinMode(pinPB_KeTiga, INPUT_PULLUP);
}
```
Instruksi di atas digunakan untuk mengkonfigurasi pin-pin yang digunakan sebagai output maupun input, pada instruksi ini kita mengaktifkan **internal resistor pull-up** dengan perintah **INPUT_PULLUP**.

```
bool bacaPB_KeSatu = digitalRead(pinPB_KeSatu);
bool bacaPB_KeDua = digitalRead(pinPB_KeDua);
bool bacaPB_KeTiga = digitalRead(pinPB_KeTiga);
```
Instruksi di atas kita membuat 3 variabel yang bernama **bacaPB_KeSatu**, **bacaPB_KeDua**, dan **bacaPB_KeTiga** yang akan digunakan untuk menampung data dari tactile switch. Karena data yang kita tampung merupakan **data logika (HIGH dan LOW)**, maka kita menggunakan **tipe data bool**.

```
  if(bacaPB_KeSatu == LOW && bacaPB_KeDua == HIGH && bacaPB_KeTiga == HIGH){
    digitalWrite(pinLED_KeSatu, HIGH);
    digitalWrite(pinLED_KeDua, LOW);
    digitalWrite(pinLED_KeTiga, LOW);
  }
  else if(bacaPB_KeSatu == HIGH && bacaPB_KeDua == LOW && bacaPB_KeTiga == HIGH){
    digitalWrite(pinLED_KeSatu, LOW);
    digitalWrite(pinLED_KeDua, HIGH);
    digitalWrite(pinLED_KeTiga, LOW);
  }
  else if(bacaPB_KeSatu == HIGH && bacaPB_KeDua == HIGH && bacaPB_KeTiga == LOW){
    digitalWrite(pinLED_KeSatu, LOW);
    digitalWrite(pinLED_KeDua, LOW);
    digitalWrite(pinLED_KeTiga, HIGH);
  }
  else{
    digitalWrite(pinLED_KeSatu, LOW);
    digitalWrite(pinLED_KeDua, LOW);
    digitalWrite(pinLED_KeTiga, LOW);
  }
```
Instruksi di atas merupakan struktur seleksi menggunakan if di mana saat kondisi if'nya bernilai **True**, maka bagian isi instruksinya akan dijalankan.
* **If(bacaPB_KeSatu == LOW && bacaPB_KeDua == HIGH && bacaPB_KeTiga == HIGH)**, kondisi ini akan bernilai **True** saat tombol kesatu ditekan sedangkan tombol kedua dan ketiga tidak ditekan.
* **else If(bacaPB_KeSatu == HIGH && bacaPB_KeDua == LOW && bacaPB_KeTiga == HIGH)**, kondisi ini akan bernilai **True** saat tombol kedua ditekan sedangkan tombol kesatu dan ketiga tidak ditekan.
* **else If(bacaPB_KeSatu == HIGH && bacaPB_KeDua == HIGH && bacaPB_KeTiga == LOW)**, kondisi ini akan bernilai **True** saat tombol ketiga ditekan sedangkan tombol kesatu dan kedua tidak ditekan.
* Ketika semua tombol tidak ada yang ditekan, maka program akan membaca semua instruksi yang ada di dalam **else**.

