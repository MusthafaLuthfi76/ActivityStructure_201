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
    mahasiswa mhs1, mhs2;

    mhs1.nim = "20220140201";
    mhs1.nama = "Luthfi";
    mhs1.alamat = "Solo";
    mhs1.umur = 20;

    cout << "Masukkan Nim :";
    cin >> mhs2.nim;
    cout << "Masukkan Nama :";
    cin >> mhs2.nama;
    cout << "Masukkan Alamat :";
    cin >> mhs2.alamat;
    cout << "Masukkan umur :";
    cin >> mhs2.umur;

    cout << "\nNim : " << mhs1.nim;
    cout << "\nNama : " << mhs1.nama;
    cout << "\nAlamat : " << mhs1.alamat;
    cout << "\nUmur : " << mhs1.umur;

    cout << "\nNim : " << mhs2.nim;
    cout << "\nNama : " << mhs2.nama;
    cout << "\nAlamat : " << mhs2.alamat;
    cout << "\nUmur : " << mhs2.umur;

}

