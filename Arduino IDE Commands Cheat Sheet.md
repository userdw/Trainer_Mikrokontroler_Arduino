## Arduino IDE Commands Cheat Sheet

Halaman ini berisi beberapa **commands** dasar yang digunakan oleh Arduino, dengan memahami commands dasar di bawah ini akan membantu kita dalam membuat skecth pada Arduino IDE.

### setup()
Fungsi ```setup()``` akan dipanggal saat pertama kali saat Arduino Uno dalam keadaan hidup. Bagian ini biasanya digunakan untuk menginisialisasi variabel, konfigurasi mode pin, penggunaan library, dan sebagainya. Fungsi setup() hanya akan **dijalankan sekali saja**.
```
void setup(){

}
```

### loop()
Setelah membuat fungsi setup() hal selanjutnya yang harus kita buat adalah membuat fungsi ```loop()```, di fungsi inilah program utama kita dijalankan dan fungsi ini akan selalu **dijalankan berulang-ulang** selama Arduino Uno dalam kondisi hidup.
```
void loop(){

}
```

### pinMode()
Fungsi ```pinMode()``` digunakan untuk mengkonfigurasi pin apakah dijadikan sebagai **input** maupun **output**.
```
pinMode(pin, mode)

Contoh:
pinMode(13, OUTPUT);
```
**Parameter :**
* **pin :** Nomor pin Arduino Uno
* **mode :** INPUT, OUTPUT, dan INPUT_PULLUP 

