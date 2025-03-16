from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, merk, nama, jumlah_core, kecepatan_ghz):
        super().__init__(merk, nama)
        self.__jumlah_core = jumlah_core
        self.__kecepatan_ghz = kecepatan_ghz

    # Getter
    def get_jumlah_core(self):
        return self.__jumlah_core

    def get_kecepatan_ghz(self):
        return self.__kecepatan_ghz

    # Setter
    def set_jumlah_core(self, jumlah_core):
        self.__jumlah_core = jumlah_core

    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.__kecepatan_ghz = kecepatan_ghz
