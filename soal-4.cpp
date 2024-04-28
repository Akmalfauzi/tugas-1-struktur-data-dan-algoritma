#include <iostream>

using namespace std;

int main() {
    int waktuLari = 0, waktuPushUp = 0, waktuPlank = 0;
    string pilihan;
    bool lariPicked = false, pushUpPicked = false, plankPicked = false;

    do {
        cout << "Pilih olahraga: ";
        if (!lariPicked) cout << "(l = lari) ";
        if (!pushUpPicked) cout << "(p = push-up) ";
        if (!plankPicked) cout << "(pl = plank) ";
        cout << "(q = quit): ";
        cin >> pilihan;

        if (pilihan == "l" && !lariPicked) {
            cout << "Masukkan waktu lari (dalam menit): ";
            cin >> waktuLari;
            lariPicked = true;
        } else if (pilihan == "p" && !pushUpPicked) {
            cout << "Masukkan waktu push-up (dalam menit): ";
            cin >> waktuPushUp;
            pushUpPicked = true;
        } else if (pilihan == "pl" && !plankPicked) {
            cout << "Masukkan waktu plank (dalam menit): ";
            cin >> waktuPlank;
            plankPicked = true;
        }

    } while (pilihan != "q");

    int kaloriLari = (waktuLari / 5) * 60;
    int kaloriPushUp = (waktuPushUp / 30) * 200;
    int kaloriPlank = waktuPlank * 5;

    int totalKalori = kaloriLari + kaloriPushUp + kaloriPlank;

    cout << "Total kalori yang dibakar: " << totalKalori << " kalori" << endl;

    return 0;
}