#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Motherboard : public Komponen {
private:
    string chipset;
public:
    Motherboard() {}

    Motherboard(string chipset, string merk, string nama) 
        : Komponen(merk, nama) {
        this->chipset = chipset;
    }

    void setChipset(string chipset) {
        this->chipset = chipset;
    }

    string getChipset() const { 
        return this->chipset;
    }
    

    ~Motherboard() {}
};
