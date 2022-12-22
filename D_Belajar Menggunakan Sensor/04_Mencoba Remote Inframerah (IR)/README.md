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

