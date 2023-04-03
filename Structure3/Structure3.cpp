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

    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan Nim :";
        cin.getline(mhs[i].nim,12);
        cout << "Masukkan Nama :";
        cin.getline(mhs[i].nama,20);
        cout << "Alamat :" << endl;
        cout << "\tDesa :";
        cin.getline(mhs[i].alamat.desa,20);
        cout << "\tKota :";
        cin.getline(mhs[i].alamat.kota,20);
        cout << "Masukkan umur :";
        cin >> mhs[i].umur;cin.ignore(1, '\n');
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\nNim : " << mhs[i].nim;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nDesa : " << mhs[i].alamat.desa;
        cout << "\nKota : " << mhs[i].alamat.kota;
        cout << "\nUmur : " << mhs[i].umur;
    }
}