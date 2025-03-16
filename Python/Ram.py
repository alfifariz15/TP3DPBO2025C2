from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, merk, nama, kapasitas_gb):
        super().__init__(merk, nama)
        self.__kapasitas_gb = kapasitas_gb

    # Getter
    def get_kapasitas_gb(self):
        return self.__kapasitas_gb

    # Setter
    def set_kapasitas_gb(self, kapasitas_gb):
        self.__kapasitas_gb = kapasitas_gb
