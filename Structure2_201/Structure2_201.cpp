#include <iostream>
#include <string>
using namespace std;

struct AlamatDetail {
    char desa;
    char kota;
};

struct mahasiswa {
    string nim;
    string nama;
    AlamatDetail alamat;
    int umur;
};

int main()
{
    mahasiswa mhs;

    cout << "Masukkan Nim :";
    cin >> mhs.nim;
    cout << "Masukkan Nama :";
    cin >> mhs.nama;
    cout << "Alamat :" << endl;
    cout << "\tDesa :";
    cin >> mhs.alamat.desa;
    cout << "\tKota :";
    cin >> mhs.alamat.kota;
    cout << "Masukkan umur :";
    cin >> mhs.umur;

    cout << "\nNim : " << mhs.nim;
    cout << "\nNama : " << mhs.nama;
    cout << "\nDesa : " << mhs.alamat.desa;
    cout << "\nKota : " << mhs.alamat.kota;
    cout << "\nUmur : " << mhs.umur;
}