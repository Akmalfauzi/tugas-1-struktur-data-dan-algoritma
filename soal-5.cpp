#include <iostream>

using namespace std;

int main() {
    int umurAnak, tinggiAnak;
    int tarif = 0;

    cout << "Masukkan umur anak: ";
    cin >> umurAnak;
    cout << "Masukkan tinggi anak (dalam cm): ";
    cin >> tinggiAnak;

    if (umurAnak < 1) {
        cout << "Dilarang masuk" << endl;
        return 0;
    } else if (umurAnak < 3) {
        tarif = 30000;
        if (tinggiAnak > 70 && umurAnak >= 2) {
            tarif += 10000;
        }
    } else if (umurAnak < 7) {
        tarif = 40000;
        if (tinggiAnak > 120 && umurAnak >= 4) {
            tarif += 15000;
        }
    } else if (umurAnak < 10) {
        tarif = 50000;
        if (tinggiAnak > 150 && umurAnak >= 8) {
            tarif += 20000;
        }
    } else {
        tarif = 80000;
    }

    cout << "Tarif harga untuk anak " << umurAnak << " tahun dengan tinggi " << tinggiAnak << " cm yaitu Rp " << tarif << endl;

    return 0;
}