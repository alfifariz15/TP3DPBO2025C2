# TP3DPBO2025C2
Saya Muhammad Alfi Fariz dengan NIM 2311174 mengerjakan TP 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram dan penjelasannya 
![TP3 drawio](https://github.com/user-attachments/assets/f4d923f2-5411-425b-a401-1047d8161ac0)

Penjelasan Diagram
1. Komponen tetap sebagai base class (Super Class).
2. Cpu, Ram, Harddrive, Motherboard, dan Gpu adalah turunan dari Komponen (Inheritance).
3. Hubungan Komputer:
- Komputer harus memiliki 1 Cpu (association 1:1).
- Komputer harus memiliki 1 Motherboard (association 1:1).
- Komputer bisa memiliki 1 Gpu (opsional, bisa ada bisa tidak).
- Komputer harus memiliki setidaknya 1 Ram dan 1 Harddrive (komposisi, karena tanpa mereka komputer tidak bisa berjalan).

# Penjelasan desain program
Program ini bertujuan untuk membangun sistem representasi komponen komputer menggunakan OOP (Object-Oriented Programming).

Fitur Utama:
- Encapsulation (Menggunakan private/protected variabel dan getter/setter).
- Inheritance (Pewarisan dari Komponen ke CPU, RAM, Harddrive, Gpu, Motherboard).
- Composition (Objek Komputer memiliki RAM dan Harddrive dalam bentuk list).
- Polymorphism (Memungkinkan variasi class dengan metode serupa).

# Penjelasan alur code python dan cpp
# Alur Kode dalam C++
1. Class Komponen
- Sebagai Base Class (Induk) dari semua komponen dalam komputer.
- Menyimpan atribut dasar: string merk; dan string nama;
- Getter dan setter disediakan untuk akses aman terhadap atribut ini.
2. Class CPU, RAM, Harddrive
  Mewarisi Komponen dan menambahkan atribut khusus:
- CPU: jumlahCore, kecepatanGHz
- RAM: kapasitasGB
- Harddrive: kapasitasGB, tipe (SSD/HDD)
3. Class Motherboard (BARU)
- Mewarisi Komponen dan memiliki atribut: string chipset;
- Menunjukkan motherboard sebagai pusat koneksi untuk CPU, RAM, dan perangkat lainnya.
4. Class GPU (BARU)
- Mewarisi Komponen dan memiliki atribut: int vramGB;
- Menyimpan informasi jumlah VRAM yang digunakan untuk grafis
5. Class Komputer (Pusat Pengelolaan Semua Komponen)
- Memiliki objek CPU, Motherboard, GPU (1 buah).
- Memiliki list RAM dan Harddrive (bisa lebih dari 1).
- Metode utama:
  tambahRAM(Ram r): Menambahkan objek RAM ke daftar.
  tambahHarddrive(Harddrive h): Menambahkan hard drive ke daftar.
  displaySpecs(): Menampilkan spesifikasi lengkap komputer.
6. File main.cpp
- Membuat objek CPU, Motherboard, GPU, RAM, dan Harddrive.
- Menambahkan komponen-komponen ke objek Komputer.
- Memanggil displaySpecs() untuk mencetak hasilnya.

# Alur code dalam python 
kurang lebih sama kayak cpp
1. Class Komponen
- Sama seperti C++, menyimpan merk dan nama.
2. Class CPU, RAM, Harddrive
- Menyimpan atribut tambahan.
3. Class Komputer
- Memiliki CPU, Motherboard, RAM, Harddrive, dan opsional GPU.
4. File main.py
- Membuat dan menambahkan komponen ke komputer.
- Menampilkan spesifikasi dengan tampilkan_spesifikasi().
