# Mengontrol Beban Listrik Menggunakan Relay

Pada bagian ini kita akan mencoba mengontrol beban listrik menggunakan relay. Umumnya beban listrik terbagi menjadi 2 jenis, yaitu **beban listrik DC (arus searah)** dan **listrik AC (arus bolak-balik)**, pada percobaan ini kita akan menggunakan beban listrik DC karena dalam paket pembelajaran ini komponen elektronika yang digunakan bekerja pada listrik DC.

Relay ini merupakan saklar elektronik, yang kondisi on atau offnya dipengaruhi oleh arus listrik.

Relay terbagi menjadi 2 bagian, yaitu bagian **kontak** dan **coil (kumparan)**. Bagian coil ini yang dikendalikan untuk mempengaruhi kondisi kontak. Pada bagian kontak terbagi 3 bagian, yaitu COM, NO, dan NC yang dapat diatur melalui kumparan.

<p align="center">
<img src="/Gambar/komponen-relay.jpg" height="200">
</p>

Jadi cara kerja sederhanya, saat pada kumparan dialiri oleh arus listrik, maka pada kumparan akan membangkitkan medan magnet. Medan magnet inilah yang menarik tuas pada bagian kontak yang nantinya akan merubah kondisi NO maupun NC pada relay.

Perubahan kondisi kontak inilah yang bisa kita manfaatkan untuk mengendalikan kondisi on dan off dari beban-beban listrik.

Sekarang kita akan mencoba mengendalikan beban listrik dengan Relay menggunakan Arduino Uno.

**Bahan-bahan yang dibutuhkan :**
* 1x Arduino Uno
* 1x Relay 1 Channel
* 1x Projectboard
* 3x Kabel Jumper Male to Female
* 4x Kabel Jumper Male to Male

<p align="center">
<img src="/Gambar/rangkaian-relay.png" height="450">
</p>

**Langkah-langkahnya :**
1. Ikuti rangkaian seperti gambar di atas, pin yang kita gunakan adalah pin digital nomor 3
2. Unduhh kode program [kontrol_beban_listrik_relay.ino](https://github.com/userdw/Trainer_Mikrokontroler_Arduino/blob/main/A_GPIO%20sebagai%20Digital%20Output/05_Mengontrol%20Beban%20Listrik%20dengan%20Relay%201%20Channel/kontrol_beban_listrik_relay.ino).
3. Setelah terunduh, silahkan buka software Arduino IDE lalu klik upload ke board Arduino Uno.
4. Jika tidak ada kesalahan, maka Buzzer akan bergantian bunyi dan diam setiap 1 detik sekali.

**Perhatian :** Modul relay yang kita gunakan itu berjenis **aktif low**, jadi untuk mengubah kondisi kontaknya kita hanya perlu mengirimkan **sinyal logika LOW (0V)** dari pin Arduino Uno ke pin **IN** dari modul relay yang kita gunakan.

### Penjelasan Kode Sketch

```
#define pinRelay 3
```
Instruksi di atas digunakan untuk membuat variabel bernama pinRelay dengan nilai 3 yang merepresentasikan nomor pin digital Arduino Uno.

```
void setup() {
  // put your setup code here, to run once:
  pinMode(pinRelay, OUTPUT);
  digitalWrite(pinRelay, HIGH);
}
```
Instruksi di atas digunakan untuk mengkonfigurasi pin nomor 3 dijadikan sebagai digital output dan juga mengatur pada saat kondisi awal, relay dalam kondisi **tidak aktif** karena kita mengirimkan **logika HIGH** pada kaki **IN** di modul relay.

```
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRelay, LOW);
}
```
Instruksi di atas digunakan untuk membuat modul relay **menjadi aktif** karena kita mengirimkan sinyal **berlogika LOW** pada pin **IN**nya sehingga akan mengaktifkan relay. Sehingga LED akan menyala karena kontak NO terhubung dengan COM dimana pada COM kita hubungkan dengan tegangan 5V sehingga akan mengalir arus listrik dari COM ke NO yang kemudian ke LED dan berakhir di GND.

### Modifikasi Kode Sketch

Sekarang kita akan mencoba memodifikasi kode sketch untuk menghidupkan dan mematikan relay (Blink) sehingga nantinya LED akan menyala dan mati bergantian dengan selang interval 1 detik. Coba ganti pada bagian **void loop()** dengan sketch di bawah ini:
```
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRelay, LOW);
  delay(1000);
  digitalWrite(pinRelay, HIGH);
  delay(1000);
}
```
Jika sketch di atas dijalankan, maka LED akan menyala dan mati bergantian selama 1 detik.
