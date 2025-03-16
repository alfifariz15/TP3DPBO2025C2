from Komponen import Komponen

class Gpu(Komponen):
    def __init__(self, merk, nama, memori_gb):
        super().__init__(merk, nama)
        self.__memori_gb = memori_gb

    # Getter
    def get_memori_gb(self):
        return self.__memori_gb

    # Setter
    def set_memori_gb(self, memori_gb):
        self.__memori_gb = memori_gb
