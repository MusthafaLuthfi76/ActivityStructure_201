#include <iostream>
#include <string>
using namespace std;

struct AlamatDetail {
    char desa[20];
    char kota[20];
};

struct mahasiswa {
    char nim[12];
    char nama[20];
    AlamatDetail alamat;
    int umur;
};

int main() {

    mahasiswa mhs[3];
}