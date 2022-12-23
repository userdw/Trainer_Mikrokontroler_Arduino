# Menampilkan Karakter Menggunakan LCD 16x2

Pada bagian ini kita belajar untuk menggunakan display LCD 16x2.

Sebelum-sebelumnya, kita hanya memanfaatkan serial monitor untuk menampilkan sebuah data, sekarang kita akan mencoba untuk menampilkan data menggunakan LCD 16x2.

<p align="center">
<img src="/Gambar/LCD-16x2.png" height="300">
</p>

Gambar di atas merupakan LCD 16x2, LCD ini terdiri dari 16 kolom dan 2 baris yang dapat kita manfaatkan untuk menampilkan data. Pada gambar di atas kita melihat komponen ini memiliki banyak kaki, untuk mengirimkan data kita menggunakan pin D1 sampai D7 **(pengiriman data secara paralel)**. 

Jika data dikirimkan secara paralel, maka kita memerlukan banyak pin sehingga kita perlu menambahkan modul I2C agar **data dapat dikirimkan secara seri** sehingga kita tidak memerlukan banyak pin.

<p align="center">
<img src="/Gambar/LCD-16x2-i2c.png" height="300">
</p>

Dengan tambahan modul I2C, kita hanya menggunakan 4 buah kabel saja untuk menggunakan LCD 16x2.

**Bahan-bahan yang dibutuhkan :**
* 1x LCD 16x2
* 1x Arduino Uno dan Kabel USB
* Beberapa Kabel Male to Female

<p align="center">
<img src="/Gambar/rangkaian-lcd16x2-i2c.png" height="450">
</p>

**Konfigurasi Pin :**

| LCD 16x2 I2C  | Arduino Uno |
| ------------- | ------------- |
| VCC  | 5V  |
| GND | GND  |
| SCL | A5  |
| SDA | A4  |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Unduh library ini [LCD 16x2 I2C](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/LiquidCrystal-I2C-library-master.zip).
3. Jika sudah terunduh, silahkan tambahkan library tersebut di software Arduino IDE tutorial cara menambahkan library ada [di sini](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Menambahkan%20Library.md).
4. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
5. Unduh kode program [karakter_lcd16x2.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/E_Bermain-main%20dengan%20Display/01_Menampilkan%20Karakter%20Menggunakan%20LCD%2016x2/karakter_lcd16x2.ino).
6. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
7. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka pada baris ke-1 LCD akan menampilkan karakter huruf "**ABCDEFGH**" dan baris ke-2 akan menampilkan karakter angka "**123456789**".

### Penjelasan Kode Sketch

```
LiquidCrystal_I2C lcd(0x27, 16, 2);
```
Instruksi di atas kita gunakan untuk memberi nama library kita dengan nama **lcd**, kemudian untuk parameter **(0x27, 16, 2);** :
* **0x27**, merupakan alamat perangkat I2C LCD 16x2.
* **16**, merupakan banyaknya kolom pada LCD 16x2.
* **2**, merupakan banyaknya baris pada LCD 16x2.

```
lcd.setCursor(0,0);
lcd.print("ABCDEFGH");
```
* **lcd.setCursor(0,0)**, digunakan untuk menentukan posisi karakter yang mau ditampilkan di LCD **(kolom, baris)**.
* **lcd.print("ABCDEFGH")**, digunakan untuk mencetak karakter **ABCDEFGH** pada layar LCD.

## Manipulasi Layar LCD

Ada beberapa fungsi yang akan kita pelajar, yaitu **lcd.Backlight()**, **lcd.noBacklight()**, dan **lcd.clear()**.
* **lcd.Backlight()**, untuk menghidupkan lampu screen dari LCD.
* **lcd.noBacklight()**, untuk mematikan lampu screen dari LCD.
* **lcd.clear()**, untuk membersihkan data pada LCD.

**Bahan-bahan yang dibutuhkan :**
* 1x LCD 16x2 I2C
* 2x Tactile Switch
* 1x Arduino Uno dan Kabel USB
* 1x Project Board

<p align="center">
<img src="/Gambar/rangkaian-lcd16x2-pb.png" height="450">
</p>

**Konfigurasi Pin :**

| LCD 16x2 I2C  | Arduino Uno |
| ------------- | ------------- |
| VCC  | 5V  |
| GND | GND  |
| SCL | A5  |
| SDA | A4  |

| PB Ke-1 | PB Ke-2 | Arduino Uno |
| ------------- | ------------- |------------- |
| Kaki 2 | Kaki 2 | GND |
| Kaki 1 | - | D2 |
|- | Kaki 1 | D3 |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [manipulasi_lcd16x2.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/E_Bermain-main%20dengan%20Display/01_Menampilkan%20Karakter%20Menggunakan%20LCD%2016x2/manipulasi_lcd16x2.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka saat tombol ke-1 kita tekan, maka backlight pada LCD akan mati. Dan jika tombol ke-2 kita tekan, maka data yang ditampilkan pada LCD akan terhapus.

### Penjelasan Kode Sketch

```
void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  pinMode(pinPB_KeSatu, INPUT_PULLUP);
  pinMode(pinPB_KeDua, INPUT_PULLUP);
  lcd.setCursor(0,0);
  lcd.print("Halo");
  lcd.setCursor(0,1);
  lcd.print("Selamat Pagi");
}
```
Pada bagian **void setup()**, kita langsung menampilkan karakter pada LCD sehingga instruksi ini akan dijalankan sekali saja. Karena nantinya pada **void loop()** saat kita menghapus data karakter pada LCD, tidak ada instruksi lagi untuk menampilkan karakter pada LCD.

```
if(bacaPB_KeSatu == LOW){
  Serial.println("Ditekan");
  lcd.noBacklight();
}
else{
  lcd.backlight();
}
```
Jika tombol ke-1 kita tekan, maka perintah **lcd.noBacklight();** akan dijalankan sehingga akan mematikan backlight pada LCD. Sedangkan jika tombol ke-1 tidak kita tekan, maka **lcd.backlight()** akan dijalankan sehingga akan menghidupkan backligth pada LCD.

```
if(bacaPB_KeDua == LOW){
  Serial.println("Ditekan");
  lcd.clear();
}
```
Jika tombol ke-2 kita tekan, maka perintah **lcd.clear()** akan dijalankan sehingga akan menghapus data yang sudah kita tampilkan pada LCD. Untuk menampilkan data lagi, kita harus **mereset Arduino Uno** agar **void setup()** dijalankan yang didalamnya terdapat perintah untuk menampilkan data karakter pada LCD.

