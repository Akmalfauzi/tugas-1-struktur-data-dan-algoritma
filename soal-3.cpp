#include <iostream>

using namespace std;

int main() {
    int nomorPunggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomorPunggung;

    string posisi;
    if (nomorPunggung % 2 == 0) {
        posisi = (nomorPunggung >= 50 && nomorPunggung <= 100) 
            ? "untuk pemain yang berhak dipilih menjadi captain team" 
            : "untuk posisi target attacker";
    } else {
        if (nomorPunggung % 3 == 0 || nomorPunggung % 5 == 0) {
            posisi = "untuk posisi keeper";
        } else {
            posisi = (nomorPunggung > 90) 
                ? "untuk posisi playmaker" 
                : "untuk posisi defender";
        }
    }

    cout << "Nomor Punggung " << nomorPunggung << " " << posisi << endl;

    return 0;
}