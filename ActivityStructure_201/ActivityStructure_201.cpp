#include <iostream>
#include <string>
using namespace std;

struct Alamat {
    char desa;
    char kota;
};

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs1, mhs2;

    mhs1.nim = "20220140201";
    mhs1.nama = "Luthfi";
    mhs1.alamat = "Solo";
    mhs1.umur = 20;
}

