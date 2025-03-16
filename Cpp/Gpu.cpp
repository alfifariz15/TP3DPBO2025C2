#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Gpu : public Komponen {
private:
    int vramGB;
public:
    Gpu() {}

    Gpu(int vramGB, string merk, string nama) 
        : Komponen(merk, nama) {
        this->vramGB = vramGB;
    }

    void setVramGB(int vramGB) {
        this->vramGB = vramGB;
    }

    int getVramGB() const { 
        return this->vramGB;
    }
    

    ~Gpu() {}
};
