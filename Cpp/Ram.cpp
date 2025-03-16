#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public Komponen {
private:
    int kapasitasGB;
public:
    Ram() {}

    Ram(int kapasitasGB, string merk, string nama) 
        : Komponen(merk, nama) {
        this->kapasitasGB = kapasitasGB;
    }

    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }

    int getKapasitasGB() const { 
        return this->kapasitasGB;
    }
    

    ~Ram() {}
};
