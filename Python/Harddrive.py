from Komponen import Komponen

class Harddrive(Komponen):
    def __init__(self, merk, nama, kapasitas_gb, tipe):
        super().__init__(merk, nama)
        self.__kapasitas_gb = kapasitas_gb
        self.__tipe = tipe  # HDD atau SSD

    # Getter
    def get_kapasitas_gb(self):
        return self.__kapasitas_gb

    def get_tipe(self):
        return self.__tipe

    # Setter
    def set_kapasitas_gb(self, kapasitas_gb):
        self.__kapasitas_gb = kapasitas_gb

    def set_tipe(self, tipe):
        self.__tipe = tipe
