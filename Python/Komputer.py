class Komputer:
    def __init__(self, cpu, motherboard, gpu=None):
        self.__cpu = cpu
        self.__motherboard = motherboard
        self.__gpu = gpu  # Bisa None (Opsional)
        self.__ram_list = []  # List Komposisi RAM
        self.__harddrive_list = []  # List Komposisi Harddrive

    # Method untuk menambahkan RAM dan Harddrive
    def tambah_ram(self, ram):
        self.__ram_list.append(ram)

    def tambah_harddrive(self, harddrive):
        self.__harddrive_list.append(harddrive)

    def tampilkan_spesifikasi(self):
        print("===== Spesifikasi Komputer =====")
        print(f"CPU: {self.__cpu.get_nama()} ({self.__cpu.get_merk()}, {self.__cpu.get_jumlah_core()} Core, {self.__cpu.get_kecepatan_ghz()} GHz)")
        print(f"Motherboard: {self.__motherboard.get_nama()} ({self.__motherboard.get_merk()}, Chipset {self.__motherboard.get_chipset()})")

        if self.__gpu:
            print(f"GPU: {self.__gpu.get_nama()} ({self.__gpu.get_merk()}, {self.__gpu.get_memori_gb()} GB)")
        else:
            print("GPU: Tidak Ada")

        print("\nRAM:")
        for ram in self.__ram_list:
            print(f"- {ram.get_nama()} ({ram.get_merk()}, {ram.get_kapasitas_gb()} GB)")

        print("\nStorage:")
        for hdd in self.__harddrive_list:
            print(f"- {hdd.get_nama()} ({hdd.get_merk()}, {hdd.get_kapasitas_gb()} GB, {hdd.get_tipe()})")
