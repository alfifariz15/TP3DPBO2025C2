#include <iostream>
#include "Komputer.cpp"

int main() {
    Cpu myCpu(8, 3.5, "Intel", "Core i7");
    Motherboard myMb("Z790", "ASUS", "ROG Strix");
    Gpu myGpu(10, "NVIDIA", "RTX 3080");

    Komputer myPC("Gaming PC", myCpu, myMb, myGpu);
    myPC.addRam(Ram(16, "Corsair", "Vengeance"));
    myPC.addStorage(Harddrive(1000, "SSD", "Samsung", "970 Evo"));

    myPC.displaySpecs();
    return 0;
}
