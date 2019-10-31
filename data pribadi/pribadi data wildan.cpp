#include <iostream>
using namespace std;

int main()
{
    cout << "===========================================================\n";
    cout << "Nama       : WILDAN PURWANA                                \n";
    cout << "Alamat     : Situraja                                      \n";
    cout << "Nim        : A2.1900186                                    \n";
    cout << "No_Telepon : 082240793684                                  \n";
    cout << "===========================================================\n";
    cout << "                         SOAL NO 3                         \n";
    cout << "***********************************************************\n";
    char tampilan[1];
    char nama[50], alamat[50], nim[50], nomortelepon[50];
    cout << "===========================================================\n";
    cout << "                     DAFTAR RIWAYAT HIDUP                  \n";
    cout << "===========================================================\n";
    cout << " Nama : ";
    cin.getline(nama,50);
    cout << " Alamat : ";
    cin.getline(alamat,50);
    cout << " NIM  : ";
    cin.getline(nim,50);
    cout << "  Nomor Telepon : ";
    cin.getline(nomortelepon,50);
    return 0;
}
