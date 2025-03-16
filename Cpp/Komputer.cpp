#pragma once
#include <iostream>
#include <vector>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Gpu.cpp"
#include "Motherboard.cpp"

using namespace std;

class Komputer {
private:
    string nama;
    Cpu cpu;
    Motherboard motherboard;
    Gpu gpu;
    vector<Ram> ramList;
    vector<Harddrive> storageList;

public:
    Komputer() {}

    Komputer(string nama, Cpu cpu, Motherboard mb, Gpu gpu) {
        this->nama = nama;
        this->cpu = cpu;
        this->motherboard = mb;
        this->gpu = gpu;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setCpu(Cpu cpu) {
        this->cpu = cpu;
    }

    void setMotherboard(Motherboard mb) {
        this->motherboard = mb;
    }

    void setGpu(Gpu gpu) {
        this->gpu = gpu;
    }

    void addRam(Ram ram) {
        ramList.push_back(ram);
    }

    void addStorage(Harddrive hdd) {
        storageList.push_back(hdd);
    }

    string getNama() {
        return this->nama;
    }

    Cpu getCpu() {
        return this->cpu;
    }

    Motherboard getMotherboard() {
        return this->motherboard;
    }

    Gpu getGpu() {
        return this->gpu;
    }

    vector<Ram> getRamList() {
        return this->ramList;
    }

    vector<Harddrive> getStorageList() {
        return this->storageList;
    }

    void displaySpecs() {
        cout << "=== " << nama << " ===\n";
        cout << "CPU: " << cpu.getNama() << " (" << cpu.getMerk() << ", " 
                << cpu.getJumlahCore() << " core, " << cpu.getKecepatanGHz() << " GHz)\n";
        cout << "Motherboard: " << motherboard.getNama() << " (" 
                << motherboard.getMerk() << ", Chipset: " << motherboard.getChipset() << ")\n";
        cout << "GPU: " << gpu.getNama() << " (" << gpu.getMerk() << ", " 
                << gpu.getVramGB() << " GB VRAM)\n";
    
        for (const Ram& ram : ramList) { // Gunakan const
            cout << "RAM: " << ram.getNama() << " (" << ram.getMerk() << ", " 
                    << ram.getKapasitasGB() << " GB)\n";
        }
    
        for (const Harddrive& hdd : storageList) { // Gunakan const
            cout << "Storage: " << hdd.getNama() << " (" << hdd.getMerk() << ", " 
                    << hdd.getKapasitasGB() << " GB, " << hdd.getTipe() << ")\n";
        }
    }
    

    ~Komputer() {}
};
