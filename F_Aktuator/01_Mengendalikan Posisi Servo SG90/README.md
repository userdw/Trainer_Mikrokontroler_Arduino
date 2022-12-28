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

