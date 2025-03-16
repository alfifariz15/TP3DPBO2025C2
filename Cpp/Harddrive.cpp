#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Harddrive : public Komponen {
private:
    int kapasitasGB;
    string tipe;
public:
    Harddrive() {}

    Harddrive(int kapasitasGB, string tipe, string merk, string nama) 
        : Komponen(merk, nama) {
        this->kapasitasGB = kapasitasGB;
        this->tipe = tipe;
    }

    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }

    void setTipe(string tipe) {
        this->tipe = tipe;
    }

    int getKapasitasGB() const { 
        return this->kapasitasGB;
    }
    
    string getTipe() const { 
        return this->tipe;
    }
    

    ~Harddrive() {}
};
