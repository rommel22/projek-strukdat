# JUDUL_PROYEK

Anggota Kelompok:
* Rommel Malik Kusandi (140810200002)
* Jonathan Victor Goklas (140810200024)
* Fasya Nurina Izzati (140810200052)
---
## Latar Belakang
Melihat kembali satu tahun yang telah kita lewati, dunia diguncangkan dengan hal buruk yang telah dirasakan satu abad tahun sebelumnya, yaitu pandemi. Pandemi flu spanyol telah merenggut banyak jiwa dan hal tersebut kembali terjadi dengan pandemi baru, pandemi Covid-19. Pandemi Covid-19 ini pertama kali ditemukan di kota Wuhan, China pada akhir Desember 2019. Virus ini menular dengan sangat cepat dan telah menyebar ke hampir semua negara, termasuk Indonesia, hanya dalam waktu beberapa bulan.

Hal ini tentu membuat panik seluruh dunia karena dikagetkan dengan virus ini. Alhasil, beberapa negara pun menerapkan banyak kebijakan seperti memberlakukan lockdown, mewajibkan mengikuti protokol kesehatan, dan membatasi jumlah orang di berbagai tempat dalam rangka mencegah penyebaran dari virus Covid-19. Di Indonesia sendiri, pemerintah memberlakukan Pembatasan Sosial Berskala Besar (PSBB) untuk menekan dan mencegah penyebaran dari virus ini.

Virus Covid-19 adalah virus yang menginfeksi sistem pernapasan. Virus ini dapat menyebabkan infeksi pernapasan ringan, seperti flu dan infeksi pernapasan berat, seperti infeksi paru-paru (pneumonia). Virus ini menular melalui droplet dari saluran pernapasan, ketika kita berada di ruang tertutup yang ramai dan mempunyai sirkulasi udara yang kurang baik, penyebaran virus ini dapat terjadi bagi orang-orang yang ada di dalam ruangannya tersebut.

Namun, kabar gembira telah tiba bagi masyarakat yang terdampak oleh virus Covid-19 ini. Vaksin telah tiba untuk menurunkan dan mencegah penyebaran Covid-19. Tentu saja, vaksin ini pasti diinginkan dan diperlukan oleh banyak masyarakat agar masyarakat dapat beraktivitas kembali seperti sebelumnya tanpa terhalangi dan dapat meningkatkan ekonomi. Akan tetapi, untuk sekarang jumlah vaksin masih belum dapat dinikmati oleh seluruh masyarakat Indonesia karena jumlahnya yang minim.

Oleh sebab itu, golongan-golongan pun dibuat dalam penerima vaksin agar pihak-pihak yang diutamakan dapat menerima vaksin Covid-19 terlebih dahulu agar dapat melaksanakan dan menekan jumlah penyebaran Covid-19 di kemudian hari dan mengurangi korban jiwa pada populasi anak-anak dan lansia. 

Untuk memudahkan pendistribusian vaksin, diperlukan pendataan tiap penerima yang terstruktur dan efektif. Maka dari itu, kami merancang program yang dapat memudahkan penerima vaksin dengan golongan-golongannya dapat menerima vaksin dengan efektif juga merata.


## Tujuan dan Manfaat
Program ini bertujuan untuk memudahkan pendataan pasien dan juga stok vaksin yang tersedia, serta mempermudah para tenaga medis untuk mendata dan “keeping track of” jumlah vaksin yang ada.


## Penjelasan Aplikasi
Aplikasi ini menggunakan tiga macam struktur data yaitu stack, linked list, dan priority queue. Linked list digunakan untuk menampung semua data pasien yang ingin divaksin. Priority queue digunakan untuk menampung data pasien yang diutamakan dalam penerimaan vaksin, yakni golongan 1 (tenaga medis) prioritas. Stack digunakan sebagai penyimpanan vaksin dimana dapat menunjukkan total jumlah vaksin yang tersedia. Pasien yang diprioritaskan akan masuk ke priority queue terlebih dahulu dan setelah semuanya sudah ada di priority queue, maka program akan melakukan dequeue yang menandakan bahwa pasien tersebut telah divaksin dan juga program akan melakukan pop pada stack menandakan bahwa satu vaksin telah digunakan dan menunjukkan jumlah sisa vaksin. Setelah semua pasien prioritas telah divaksin, maka sisa pasien dimasukkan ke dalam priority queue dan di-dequeue sampai jumlah vaksin habis.


## Gambar Rancangan Antar Muka
--------------------------------------------------------------------------------------------------------------------------------------------------
Program vaksinasi Masyarakat
Rumah Sakit Bahagia Sembuh
Jl_Ankasa Raya No.14
--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka yang tertera pada layar (ketik 0 untuk keluar)
1. Admin
2. Pasien
Masukkan angka :
--------------------------------------------------------------------ADMIN-------------------------------------------------------------------------
Masukkan angka yang tertera pada layar, ketik 0 untuk kembali
1. Vaksinasi Pasien
2. Update Jumlah Vaksin
3. Menunjukkan semua data pasien
4. Menunjukkan semua data pasien prioritas

Masukkan angka : 1
--------------------------------------------------------------------------------------------------------------------------------------------------
Jumlah Vaksin : 18 //menunjukkan jumlah vaksin yang terdapat pada stack
Sisa Jumlah Pasien Prioritas : 6 // menunjukkan jumlah pasien yang terdapat pada priority queue
Sisa Jumlah Pasien Total : 19

Masukkan angka 1 jika pasien (nama,golongan) sudah divaksin, ketik 0 untuk kembali
1
--------------------------------------------------------------------------------------------------------------------------------------------------
Pasien (nama,golongan) sudah divaksin
sisa pasien tinggal 5 orang
sisa vaksin tinggal 17 buah
--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka 1 jika pasien (nama,golongan) sudah divaksin , ketik 0 untuk kembali
1
--------------------------------------------------------------------------------------------------------------------------------------------------
Pasien (nama,golongan) sudah divaksin
semua pasien sudah divaksin
sisa vaksin tinggal 12 buah

Apakah pasien lainnya ingin dimasukkan ke dalam antrian ??? (Y/N)
Y
Semua pasien sudah dimasukkan ke antrian
--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka 1 jika pasien (nama,golongan) sudah divaksin
1
--------------------------------------------------------------------------------------------------------------------------------------------------
Pasien (nama,golongan) sudah divaksin
Sisa pasien tinggal 13 orang
vaksin sudah habis
Ketik 0 untuk kembali
0
--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka yang tertera pada layar, ketik 0 untuk kembali
1. Vaksinasi Pasien
2. Update Jumlah Vaksin
3. Menunjukkan semua data pasien
4. Menunjukkan semua data pasien prioritas

Masukkan angka : 2
--------------------------------------------------------------------------------------------------------------------------------------------------
Jumlah Vaksin : 18

Berapa jumlah vaksin yang ingin ditambah
2

Jumlah vaksin berhasil ditambah 
Jumlah Vaksin : 20

Apakah ingin menambah jumlah vaksin lagi ? (Y/N)
N
--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka yang tertera pada layar, ketik 0 untuk kembali
1. Vaksinasi Pasien
2. Update Jumlah Vaksin
3. Menunjukkan semua data pasien
4. Menunjukkan semua data pasien prioritas

Masukkan angka : 3/4
--------------------------------------------------------------------------------------------------------------------------------------------------
//Menunjukkan semua data pasien

--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka yang tertera pada layar, ketik 0 untuk kembali
1. Vaksinasi Pasien
2. Update Jumlah Vaksin
3. Menunjukkan semua data pasien
4. Menunjukkan semua data pasien prioritas

Masukkan angka : 0
--------------------------------------------------------------------------------------------------------------------------------------------------
Program vaksinasi Masyarakat
Rumah Sakit Bahagia Sembuh
Jl_Ankasa Raya No.14
--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka yang tertera pada layar
1. Admin
2. Pasien
Masukkan angka : 2

--------------------------------------------------------------------PASIEN------------------------------------------------------------------------
Masukkan no KTP,nama, alamat, umur dan pekerjaan

no KTP : 11443234564
nama : Rommel
Alamat : Jl.kuningan no.12
Umur : 20
Pekerjaan (masukkan nomor yang sesuai) :
1. Tenaga Medis, Pendidikna, dan sishankam
2. PNS
3. Karyawan Swasta
Masukkan nomor : 1

Data anda berhasil dimasukkan
Harap ditunggu untuk informasi selanjutnya
Jika ada pertanyaan dapat menghubungi no.Telp : 08124556677

Ketik 0 untuk kembali
0
--------------------------------------------------------------------------------------------------------------------------------------------------
Program vaksinasi Masyarakat
Rumah Sakit Bahagia Sembuh
Jl_Ankasa Raya No.14
--------------------------------------------------------------------------------------------------------------------------------------------------
Masukkan angka yang tertera pada layar (ketik 0 untuk keluar)
1. Admin
2. Pasien
Masukkan angka : 0


## Rencana Pengerjaan Projek
Projek ini dikerjakan dan dikoordinasikan bersama melalui meet. Pembagian projek ini dibagi menjadi tiga dan diambil oleh masing-masing anggota, tiap anggota mengambil salah satu struktur data, yaitu stack, linked list, dan priority queue. Setelah itu, kami membuat framework-nya masing masing. Terakhir, kami melakukan meet bersama dan mengintegrasikan ketiga framework tersebut menjadi satu dan membuat antarmuka yang baik serta memoleskan program tersebut.


## Lisensi

MIT License 2021