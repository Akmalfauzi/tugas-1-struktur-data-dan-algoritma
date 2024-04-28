#include <iostream>
#include <string>
#include <limits>

using namespace std;

string nilaiTesCoding(int nilaiCoding) {
    if (nilaiCoding > 80) {
        return "LOLOS";
    } else if (nilaiCoding >= 60 && nilaiCoding <= 80) {
        return "DIPERTIMBANGKAN";
    } else {
        return "GAGAL";
    }
}

string nilaiTesInterview(string nilaiInterview) {
    if (nilaiInterview == "A" || nilaiInterview == "B") {
        return "LOLOS";
    } else {
        return "GAGAL";
    }
}

void tampilkanHasil(string hasilCoding, string hasilInterview) {
    if ((hasilCoding == "LOLOS" || hasilCoding == "DIPERTIMBANGKAN") && hasilInterview == "LOLOS") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }
}

int main() {
    int nilaiCoding;
    string nilaiInterview;

    while (true) {
        cout << "Masukkan nilai coding (0 - 100) : ";
        if (cin >> nilaiCoding) {
            if (nilaiCoding >= 0 && nilaiCoding <= 100) {
                break;
            } else {
                cout << "Input harus berada dalam rentang 0 - 100. Silakan coba lagi.\n";
            }
        } else {
            cout << "Input harus berupa angka. Silakan coba lagi.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "Masukkan nilai interview (A/B): ";
    cin >> nilaiInterview;

    string hasilCoding = nilaiTesCoding(nilaiCoding);
    string hasilInterview = nilaiTesInterview(nilaiInterview);

    tampilkanHasil(hasilCoding, hasilInterview);

    return 0;
}