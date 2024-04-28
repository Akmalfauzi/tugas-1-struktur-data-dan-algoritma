#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

string cekSindikat(string nama, int umur, string tempatTinggal, double uangTabungan) {
    if (umur > 40 && uangTabungan > 10000000 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana")) {
        return nama + " kemungkinan adalah seorang anggota mafia dengan pangkat Don.";
    } 
    else if (umur >= 25 && umur <= 40 && uangTabungan >= 1000000 && uangTabungan <= 2000000 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada")) {
        return nama + " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss.";
    } 
    else if (umur >= 18 && umur <= 24 && uangTabungan < 1000000 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston")) {
        return nama + " kemungkinan adalah seorang anggota mafia dengan pangkat Capo.";
    } 
    else {
        return nama + " tidak mencurigakan.";
    }
}

int main()
{
    string nama, tempat;
    int umur;
    double uangTabungan;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan umur: ";
    cin >> umur;
    cin.ignore();

    cout << "Masukkan tempat tinggal: ";
    getline(cin, tempat);

    cout << "Masukkan jumlah uang tabungan dalam dollar: ";
    cin >> uangTabungan;

    string hasilPengecekan = cekSindikat(nama, umur, tempat, uangTabungan);
    cout << hasilPengecekan << endl;

    return 0;
}