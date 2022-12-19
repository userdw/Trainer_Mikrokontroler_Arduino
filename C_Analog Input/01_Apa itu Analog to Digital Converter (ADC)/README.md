# Apa itu Analog to Digital Converter (ADC) ?

Arduino Uno maupun semua perangkat komputer yang ada dalam kehidupan kita semuanya bekerja secara digital. Bekerja secara digital itu maksudnya perangkat-perangkat tersebut hanya mengenali 2 data saja, yaitu 1 (HIGH) dan 0 (LOW).

Dalam kehidupan kita sehari-hari, data yang ada di lingkungan kita itu tidak hanya data digital, melainkan ada juga data analog.

Sehingga agar data analog dapat diproses menggunakan perangkat digital salah satunya Arduino Uno, maka dibutuhkan perangkat **Analog to Digital Converter (ADC)**, yang dapat mengubah data analog menjadi data digital 1 (HIGH) dan 0 (LOW).

Beberapa contoh data analog di sekitar kita itu seperti suara, intensitas cahaya, suhu, dan lain sebagainya. 

Dalam proses pengubahan sinyal analog menjadi digital oleh ADC, ada 2 faktor yang mempengaruhinya, yaitu **resolusi dan kecepatan sampel (sample speed)**.

## Resolusi

Sebagai contoh, apabila sinyal 1V diubah menjadi sinyal Digital dengan menggunakan ADC 3 bit, maka akan menghasilkan 8 tingkatan pembagian (2 <sup>3</sup> = 8 atau dalam biner adalah 111). Dengan kata lain, terdapat 8 tingkatan untuk mencapai output 1V. Masing-masing satu tingkatan adalah 0,125V (1/8 = 0,125V). Jadi perubahan minimum dari ADC 3 bit untuk 1V ini adalah 0,125V atau 125mV setiap tingkatan.

Apabila kita menaikan Bit Rate yang lebih tinggi, maka akan mendapatkan hasil sinyal yang lebih presisi dan baik. Contoh, apabila 1V dikonversikan dengan Resolusi ADC yang menggunakan 6 bit maka setiap tingkatannya akan menjadi 0.0156V atau sekitar 15,6mV.

<p align="center">
<img src="/Gambar/adc-resolusi.png" height="300">
</p>

## Kecepatan Sampel

Jumlah sampel konversi dari analog ke digital yang dapat dibuat oleh konverter dalam setiap detik disebut dengan **Kecepatan Sampel (Sample Speed atau Sample Rate)**. Sample Speed ini diukur dalam satuan S/s (Sample per Detik) atau SPS (Sample per Second). Misalnya ADC yang bagus dapat memiliki sample rate atau rasio pengambilan sample hingga 300Ms/s (bisa dibaca menjadi 300 juta sampel per detik).
