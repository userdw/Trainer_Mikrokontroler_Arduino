# Membuat Alarm dengan Saklar Reed Magnetic Sensor

Saklar Reed Magnetic merupakan saklar yang kondisinya dipengaruhi oleh medan magnet. Saklar yang kita gunakan pada kit ini memiliki 2 kaki, yaitu **C (Common)** dan **NO (Normally Open)**, jadi saat kondisi awal ketika saklar tidak dipengaruhi oleh medan magnet, maka kaki C tidak terhubung dengan kaki NO **(kondisi kontak saklar terputus)**.

<p align="center">
<img src="/Gambar/magnetic-reed-switch.png" height="300">
</p>

Kebalikannya, jika kita pengaruhi di sekitar saklar dengan medan magnet (yang dihasilkan dari benda magnet), maka kaki C akan tehubung dengan kaki NO **(kondisi kontak saklar terhubung)**. Sehingga kita bisa **memanfaatkan saklar ini untuk membaca data digital**, yang nantinya data ini bisa kita gunakan untuk hal-hal lainnya salah satunya untuk membuat alarm dengan buzzer.

**Bahan-bahan yang dibutuhkan :**
* 1x Saklar Reed Magnetic
* 1x Buzzer
* 1x Resistor 10kOhm
* 1x Arduino dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Female dan Male to Male

<p align="center">
<img src="/Gambar/rangkaian-reed-magnetic-pull-down.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [reed_magnetic_pull_down.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/05_Membuat%20Alarm%20dengan%20Saklar%20Reed%20Magnetic%20Sensor/reed_magnetic_pull_down.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat saklar tidak kita dekatkan dengan benda magnetik (benda yang menghasilkan medan magnet), maka kontak NO tidak terhubung dengan C (kontak terputus) sehingga data yang dibaca oleh Arduino Uno kita adalah **LOW/0/0V**. Sebaliknya, ketika saklar kita dekatkan dengan benda magnetik (benda yang menghasilkan medan magnet), maka kontak NO akan terhubung dengan C (kontak terhubung) sehingga data yang dibaca oleh Arduino Uno kita adalah **HIGH/1/5V**.

## Menggunakan Internal Resistor Pull-Up

Setelah mencoba dengan konfigurasi pull-down, sekarang kita akan mencoba dengan konfigurasi resistor pull-up. Kita akan menggunakan internal pull-up yang sudah ada pada Arduino Uno yang bisa kita aktifkan melalui software dengan fungsi **INPUT_PULLUP**.

**Bahan-bahan yang dibutuhkan :**
* 1x Saklar Reed Magnetic
* 1x Resistor 10kOhm
* 1x Arduino dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Female dan Male to Male

<p align="center">
<img src="/Gambar/rangkaian-reed-magnetic-pull-up.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [reed_magnetic_pull_up.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/05_Membuat%20Alarm%20dengan%20Saklar%20Reed%20Magnetic%20Sensor/reed_magnetic_pull_up.ino).
5. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka saat saklar tidak kita dekatkan dengan benda magnetik (benda yang menghasilkan medan magnet), maka kontak NO tidak terhubung dengan C (kontak terputus) sehingga data yang dibaca oleh Arduino Uno kita adalah **HIGH/1/5V**. Sebaliknya, ketika saklar kita dekatkan dengan benda magnetik (benda yang menghasilkan medan magnet), maka kontak NO akan terhubung dengan C (kontak terhubung) sehingga data yang dibaca oleh Arduino Uno kita adalah **LOW/0/0V**.

## Buzzer dan Saklar Reed Magnetic untuk Menghasilkan Bunyi

Data digital yang kita baca dengan memanfaatkan saklar reed magnetic dapat kita manfaatkan untuk mengendalikan perangkat-perangkat elektronika, salah satunya dapat kita manfaatkan untuk membuat alarm menggunakan buzzer.

**Bahan-bahan yang dibutuhkan :**
* 1x Saklar Reed Magnetic
* 1x Resistor 10kOhm
* 1x Arduino dan Kabel USB
* 1x Project Board
* 1x Buzzer
* Beberapa Kabel Jumper Male to Female dan Male to Male

<p align="center">
<img src="/Gambar/rangkaian-reed-magnetic-buzzer-2.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian di atas.
2. Hubungkan board Arduino Uno ke port USB komputer.
3. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
4. Unduh kode program [reed_magnetic_buzzer.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/B_GPIO%20sebagai%20Digital%20Input/05_Membuat%20Alarm%20dengan%20Saklar%20Reed%20Magnetic%20Sensor/reed_magnetic_buzzer.ino).
5. Upload kode sketch tersebut.

Jika sketch yang kita upload sudah benar, maka saat kita mendekatkan bahan magnetik ke saklar, maka buzzer akan berbunyi. Begitu juga dengan sebaliknya.

### Penjelasan Kode Sketch
```
#define pinBuzzer 3
#define pinReedMagnetic 4
```
Instruksi di atas digunakan untuk membuat variabel bernama **pinBuzzer** dan **pinReedMagnetic** dengan memiliki nilai yang merepresentasikan nomor pin Arduino yang kita gunakan.

```
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinReedMagnetic, INPUT_PULLUP);
  pinMode(pinBuzzer, OUTPUT);
}
```
Instruksi di atas digunakan untuk memulai komunikasi serial dan juga untuk mengkonfigurasi pin-pin yang digunakan sebagai input maupun output.

```
void loop() {
  // put your main code here, to run repeatedly:
  bool baca_ReedMagnetic = digitalRead(pinReedMagnetic);
  if(baca_ReedMagnetic == HIGH){
    digitalWrite(pinBuzzer, HIGH);
  }
  else{
    digitalWrite(pinBuzzer, LOW);
  }
}
```
Instruksi di atas menggunakan seleksi kondisi if dimana saat kondisinya bernilai **True**, maka buzzer akan berbunyi sedangkan jika kondisi if'nya bernilai **False**, maka buzzernya tidak akan berbunyi.
