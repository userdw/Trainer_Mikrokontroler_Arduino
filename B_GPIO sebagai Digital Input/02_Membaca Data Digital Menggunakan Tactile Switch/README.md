# Membaca Data Digital Menggunakan Tactile Switch

Pada bagian ini kita akan belajar membaca data digital **HIGH (1/5V)** dan **LOW (0/0V)** dengan menggunakan tactile switch. Pada mikrokontroler, saat kita gunakan pinnya sebagai input ada dua konfigurasi awal untuk menentukan kondisi data yang dibaca oleh pin tersebut. Konfigurasi tersebut adalah **resistor pull-up** dan **resistor pull-down**.

Dua konfigurasi tersebut sangat penting digunakan, jika kita tidak menggunakannya, maka pada kondisi awal pin akan membaca data floating (mengambang) yang berubah-ubah antara 1 dan 0.

Sekarang kita akan mencoba memanfaatkan GPIO sebagai digital input dengan 3 konfigurasi :
* Tanpa Resistor Pull-Up dan Pull-Down
* Dengan Resistor Pull-Up
* Dengan Resistor Pull-Down

## Tanpa Resistor Pull-Up dan Pull-Down

**Bahan-bahan yang Dibutuhkan :**
* 1x Arduino Uno dan Kabel USB
* 1x Tactile Switch
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-input-pb-tanpa-resistor-pullup.png" height="500">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [input_saja.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/02_Membaca%20Data%20Digital%20Menggunakan%20Tactile%20Switch/input_saja.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.
6. Coba amati saat tombolnya ditekan dan tidak ditekan.

<p align="center">
<img src="/Gambar/input-tanpa-pullup-tidak-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol tidak ditekan, bisa kita lihat bahwa data yang terbaca itu mengambang atau floating yang nilainya berubah-ubah antara 1 dan 0.

<p align="center">
<img src="/Gambar/input-tanpa-pullup-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol ditekan, bisa kita lihat bahwa data yang terbaca itu nilainya **0/0V/LOW**.

**Perhatian !**

Kondisi mengambang atau floating harus kita hindari agar alat yang kita buat tidak mengalami error **sehingga saat kita mengkonfigurasi sebuah pin sebagai digital input, maka kita harus menentukan apakah dia pull-up atau pull-down untuk menentukan kondisi saat tombol tidak ditekan**.

## Dengan Resistor Pull-Up

Sekarang kita akan mencoba dengan **resistor pull-up**, untuk konfigurasi ini kita bisa melakukannya melalui software ataupun melalui hardware. Jika kita memilih melakukannya melalui software, maka kita tinggal menambahkan parameter **INPUT_PULLUP** pada kode sketch di Arduino IDE. Sedangkan jika kita memilih melakukannya melalui hardware, maka kita memerlukan tambahan resistor pada rangkaian inputnya.

**Bahan-bahan yang Dibutuhkan :**
* 1x Arduino Uno dan Kabel USB
* 1x Tactile Switch
* 1x Project Board
* 1x Resistor 10k Ohm
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-input-pb-resistor-pullup.png" height="500">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [input_saja.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/02_Membaca%20Data%20Digital%20Menggunakan%20Tactile%20Switch/input_saja.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.
6. Coba amati saat tombolnya ditekan dan tidak ditekan.

<p align="center">
<img src="/Gambar/input-pullup-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol kita tekan, Arduino Uno membaca data **0/0V/LOW**.

<p align="center">
<img src="/Gambar/input-pullup-tidak-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol tidak kita tekan, Arduino Uno membaca data **1/5V/HIGH**.

Percobaan kita di atas kita mengkonfigurasi pin digital input secara hardware sehingga kita memerluka komponen tambahan, yaitu resistor. Sekarang kita juga bisa melakukan konfigurasinya melalui software sehingga kita tidak memerlukan komponen tambahan lagi.

<p align="center">
<img src="/Gambar/rangkaian-input-pb-tanpa-resistor-pullup.png" height="500">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [input_pullup.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/02_Membaca%20Data%20Digital%20Menggunakan%20Tactile%20Switch/input_pullup.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.
6. Coba amati saat tombolnya ditekan dan tidak ditekan.

<p align="center">
<img src="/Gambar/input-internal-pullup-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol kita tekan, Arduino Uno membaca data **0/0V/LOW**.

<p align="center">
<img src="/Gambar/input-internal-pullup-tidak-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol tidak kita tekan, Arduino Uno membaca data **1/5V/HIGH**.

### Penjelasan Kode Sketch

```
#define pinPushButton 4
```
Instruksi di atas digunakan untuk membuat variabel bernama **pinPushButton** yang memiliki nilai 4 yang dimana nilai **4** ini mempresentasikan nomor pin digital yang kita gunakan.

```
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinPushButton, INPUT_PULLUP);
}
```
Instruksi di atas ;
* **Serial.begin(9600);**, digunakan untuk memulai komunikasi serial dengan baudrate 9600 bps.
* **pinMode(pinPushButton, INPUT_PULLUP);**, digunakan untuk mengaktifkan resistor pull-up internal yang ada pada Arduino Uno.

```
void loop() {
  // put your main code here, to run repeatedly:
  bool baca_pb = digitalRead(pinPushButton);
  Serial.println(baca_pb); 
}
```
Instruksi di atas :
* **bool baca_pb = digitalRead(pinPushButton);**, kita membuat variabel bernama **baca_pb** bertipe data bool (boolean) yang dapat menampung 2 data, yaitu HIGH/1 dan LOW/0. Variabel ini kita gunakan untuk menampung nilai yang dibaca oleh **pinPushButton** dengan fungsi **digitalRead(pinPushButton)**. 
* **Serial.println(baca_pb);**, digunakan untuk menampilkan nilai dari variabel **baca_pb** ke serial monitor agar bisa kita lihat.

**Kesimpulan :** Saat dengan konfigurasi **resistor pull-up** saat tombol tidak kita tekan, maka Arduino Uno akan membaca logika 1/High sedangkan saat kita tekan, maka Arduino Uno akan membaca data 0/Low sehingga kondisi floating atau mengambang sudah teratasi dengan baik.

## Dengan Resistor Pull-Down

Sekarang kita akan mencoba dengan **resistor pull-down**, untuk konfigurasi ini kita hanya bisa melakukannya melalui hardware. Karena pada Arduino Uno hanya dilengkapi dengan internal resistor pull-up saja sehingga untuk konfigurasi resistor pull-down tidak bisa kita lakukan melalui software.

**Bahan-bahan yang Dibutuhkan :**
* 1x Arduino Uno dan Kabel USB
* 1x Tactile Switch
* 1x Project Board
* 1x Resistor 10k Ohm
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-input-pb-resistor-pulldown.png" height="500">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [input_saja.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/02_Membaca%20Data%20Digital%20Menggunakan%20Tactile%20Switch/input_saja.ino).
4. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
5. Jangan lupa untuk memilih baudrate sebesar 9600.
6. Coba amati saat tombolnya ditekan dan tidak ditekan.

<p align="center">
<img src="/Gambar/input-pulldown-tidak-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol tidak kita tekan, Arduino Uno membaca data **0/0V/LOW**.

<p align="center">
<img src="/Gambar/input-pulldown-ditekan.png" height="450">
</p>

Gambar di atas kondisi saat tombol kita tekan, Arduino Uno membaca data **1/5V/HIGH**.

**Kesimpulan :** Saat dengan konfigurasi **resistor pull-down** saat tombol tidak kita tekan, maka Arduino Uno akan membaca logika 0/LOW sedangkan saat kita tekan, maka Arduino Uno akan membaca data 1/HIGH sehingga kondisi floating atau mengambang sudah teratasi dengan baik.
