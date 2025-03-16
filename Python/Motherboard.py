from Komponen import Komponen

class Motherboard(Komponen):
    def __init__(self, merk, nama, chipset):
        super().__init__(merk, nama)
        self.__chipset = chipset

    # Getter
    def get_chipset(self):
        return self.__chipset

    # Setter
    def set_chipset(self, chipset):
        self.__chipset = chipset
