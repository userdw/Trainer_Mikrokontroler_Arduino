## Mencoba Remote Inframerah (IR)

Pada bagian ini kita akan mempelajari remote infra merah (IR). Umumnya remote IR sudah sering kita temui pada perangkat-perangkat elektronika seperti televisi, AC, MP3, dan sebagainya. 

<p align="center">
<img src="/Gambar/remote-ir.png" height="300">
</p>

Remote IR terdiri dari 2 bagian, bagian **remote (pemancar)** dan **penerima**. Bagian pemancar akan memancarkan sinar infra merah yang kemudia akan ditangkap oleh bagian penerima.

Bagian penerima inilah yang akan kita hubungkan dengan pin input dari Arduino Uno yang kita miliki. **Setiap tombol pada remote ir memiliki kode alamat yang berbeda-beda** sehingga pada percobaan awal ini kita akan mencoba membaca data tersebut, yang nantinya data tersebut bisa kita gunakan untuk mengendalikan kondisi hidup dan mati dari perangkat elektronika.

**Bahan-bahan yang dibutuhkan :**
* 1x Remote Inframerah (IR)
* 1x Arduino Uno dan Kabel USB
* 1x Project Board
* Beberapa Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-remote-ir.png" height="450">
</p>

**Konfigurasi Pin :**

| Remote IR  | Arduino Uno |
| ------------- | ------------- |
| Kaki (+) | 5V  |
| Kaki (-) | GND  |
| S | D2  |

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti di atas.
2. Unduh library ini [IRRemote](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Kumpulan%20Library/IRRemote.zip).
3. Jika sudah terunduh, silahkan tambahkan library tersebut di software Arduino IDE tutorial cara menambahkan library ada [di sini](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/Menambahkan%20Library.md).
4. Pilih COM PORT pada Arduino IDE sesuai dengan port Arduino Uno kita.
5. Unduh kode program [baca_remote_ir.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/D_Belajar%20Menggunakan%20Sensor/04_Mencoba%20Remote%20Inframerah%20(IR)/data_remote_ir.ino).
6. Upload kode sketch tersebut, jika sudah silahkan buka serial monitor pada Arduino IDE.
7. Jangan lupa untuk memilih baudrate sebesar 9600.

Jika sketch sudah terupload dengan benar, maka saat kita menekan setiap tombol pada remote akan menghasilkan kode yang berbeda-beda setiap tombolnya seperti pada gambar di bawah ini:

<p align="center">
<img src="/Gambar/data-remote-ir-serial-monitor.png" height="450">
</p>

### Penjelasan Kode Sketch

