from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Motherboard import Motherboard
from Gpu import Gpu
from Komputer import Komputer

# Membuat komponen-komponen
cpu = Cpu("Intel", "Core i9", 8, 3.5)
motherboard = Motherboard("ASUS", "ROG Strix Z690", "Z690")
gpu = Gpu("NVIDIA", "RTX 4090", 24)

# Membuat objek komputer dengan CPU dan Motherboard (GPU bisa opsional)
komputer = Komputer(cpu, motherboard, gpu)

# Menambahkan RAM dan Harddrive ke dalam komputer
komputer.tambah_ram(Ram("Corsair", "Vengeance", 16))
komputer.tambah_ram(Ram("Corsair", "Vengeance", 16))  # Tambah lagi

komputer.tambah_harddrive(Harddrive("Samsung", "Evo 970", 1000, "SSD"))
komputer.tambah_harddrive(Harddrive("Seagate", "Barracuda", 2000, "HDD"))

# Menampilkan spesifikasi komputer
komputer.tampilkan_spesifikasi()
