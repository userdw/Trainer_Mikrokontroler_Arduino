# Mengendalikan Posisi Servo SG90

Pada bagian ini kita akan belajar aktuator. Aktuator ada banyak jenisnya, seperti motor dc, pneumatic, motor servo, dan lain sebagainya. Pada bagian ini, kita akan belajar mengendalikan sebuah **motor servo**.

Motor servo merupakan salah satu jenis motor dc yang memiliki **sistem loop tertutup**. Artinya akan ada umpan balik nilai untuk menentukan kepresisian posisi dari motor ini. 

Sama seperti dengan motor dc lainnya, motor servo memiliki sebuah **poros yang dapat dikendalikan** seberapa jauh pergerakannya **(jarak pergerakan porosnya dalam derajat)** sehingga bisa digunakan untuk keperluan posisi seperti buka tutup gerbang parkir, buka tutup katup kran, dan lain sebagainya.

<p align="center">
<img src="/Gambar/servo-sg90.png" height="300">
</p>

Motor servo memiliki 3 kabel, yaitu :
* **Merah :** Kutub Positif (+)
* **Cokelat :** Kutub Negatif (-)
* **Orange :** Orange

**Bahan-bahan yang dibutuhkan :**
* 1x Motor Servo SG90
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-motor-servo.png" height="450">
</p>

**Konfigurasi Pin :**

| Motor Servo | Arduino Uno |
| ------------- | ------------- |
| Merah | 5V  |
| Coklat |GND  |
| Orange | D5 |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [motor_servo.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/F_Aktuator/01_Mengendalikan%20Posisi%20Servo%20SG90/motor_servo.ino).
4. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka poros servo akan bergerak sejauh 90°.

### Penjelasan Kode Skecth

```
#include <Servo.h>
```
Instruksi di atas digunakan untuk memanggil library **Servo.h**

```
Servo myservo; 
```
Instruksi di atas digunakan untuk memberi nama obyek dari library **Servo.h** dengan nama **myservo**.

```
void setup() {
  myservo.attach(5);
}
```
Instruksi di atas digunakan untuk proses inisialisasi pin yang digunakan oleh motor servo, motor servo digital dikendalikan dengan sinyal PWM.

```
int sudut = 90;
```
Instruksi di atas digunakan untuk membuat variabel **sudut** bertipe data integer (int) yang memiliki nilai 90. Variabel ini akan kita jadikan sebagai nilai sudut untuk mengendalikan pergerakan motor servo.

```
myservo.write(sudut); 
```
Instruksi di atas digunakan untuk mengirimkan sinyal PWM ke motor servo, **myservo.write(parameter)** pada bagian parameter ini kita bisa mengisikan nilai sudut dari 0° hingga sampai 180°. 

## Membuat Gerakan Sequence dari 0° ~ 180° Motor Servo

Sekarang kita akan menggerakkan porosnya secara sequence dari sudut 0° hingga 180°.

Bahan dan rangkaian masih sama seperti percobaan di atas.

**Langkah-langkahnya :**
1. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
2. Unduh kode program [sequence_motor_servo.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/F_Aktuator/01_Mengendalikan%20Posisi%20Servo%20SG90/sequence_motor_servo.ino).
3. Upload kode sketch tersebut.

Jika sketch sudah terupload dengan benar, maka poros servo akan bergerak dari sudut 0° hingga 180° kemudian 180° hingga 0°.

### Penjelasan Kode Sketch

```
void setup() {
  myservo.attach(5);
  myservo.write(0);
  delay(1000);
}
```
Pada bagian **void setup()** kita membuat posisi awal servo pada sudut 0°

```
for(int pos = 0; pos <= 180; pos++){
  myservo.write(pos);
  delay(20);
}
```
Instruksi di atas merupakan perulangan dengan **for**, jadi kita membuat variabel **pos** yang nilai awalnya adalah 0, setiap terjadi looping, maka nilai pos ini akan bertambah sebesar 1 karena perintah **pos**. Nilai pos ini akan kita jadikan sebagai nilai sudut untuk menggerakkan poros servo sehingga servo akan bergerak dari sudut 0° hingga 180°. Ketika nilai pos bernilai 180, maka perulangan akan dihentikan.

```
for(int pos = 180; pos >= 0; pos--){
  myservo.write(pos);
  delay(20);
}
```
Perulangan di atas akan dijalankan ketika posisi servo pada sudut 180° kemudian nilai pos akan dikurangi setiap kali looping karena perintah **pos--**. Sehingga servo akan bergerak dari sudut 180° hingga 0°. Jika variabel pos sudah bernilai 0, maka perulangan akan dihentikan.

## Membuat Nilai Sudut dari Potensiometer

**myservo.write(parameter)**, parameter ini merupakan nilai sudut yang akan kita gunakan untuk menentukan seberapa jauh pergerakan poros dari motor servo. Nilai dari parameter ini bisa kita isi langsung dengan nilai ataupun dipengaruhi oleh perangkat lain, salah satunya **potensiometer**.

Pada percobaan potensiometer, kita mengetahui bahwa potensiometer dapat menghasilkan data analog yang dapat kita manfaatkan untuk dijadikan sebagai input sudut dari parameter **myservo.write(parameter)** sehingga kita bisa mengendalikan motor servo melalui potensiometer.

**Bahan-bahan yang dibutuhkan :**
* 1x Motor Servo
* 1x Potensiometer
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-potensiometer-motor-servo.png" height="450">
</p>

**Konfigurasi Pin :**

| Motor Servo | Arduino Uno |
| ------------- | ------------- |
| Merah | 5V  |
| Coklat |GND  |
| Orange | D5 |

| Potensiometer | Arduino Uno |
| ------------- | ------------- |
| Kaki (1) | 5V  |
| Kaki (2) |A0  |
| Kaki (3) | GND |

**Langkah-langkahnya :**
1. Ikuti seperti rangkaian di atas.
2. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
3. Unduh kode program [sequence_motor_servo.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/F_Aktuator/01_Mengendalikan%20Posisi%20Servo%20SG90/sequence_motor_servo.ino).
4. Upload kode sketch tersebut.
