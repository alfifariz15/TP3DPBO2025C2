#pragma once
#include <iostream>
#include <string>

using namespace std;

class Komponen {
protected:
    string merk;
    string nama;
public:
    Komponen() {}

    Komponen(string merk, string nama) {
        this->merk = merk;
        this->nama = nama;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    string getMerk() const { 
        return this->merk;
    }

    string getNama() const { 
        return this->nama;
    }

    ~Komponen() {}
};
