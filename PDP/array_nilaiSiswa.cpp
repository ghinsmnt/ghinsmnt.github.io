#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int jumlahSiswa = 4;
    const int jumlahMapel = 3;

    string namaSiswa[jumlahSiswa] = {"Dewan", "Sankara", "Mahatma", "Pradipa"};
    string namaMapel[jumlahMapel] = {"Matematika", "Bahasa Inggris", "IPA"};

    int nilai[jumlahSiswa][jumlahMapel] = {
        {85, 92, 88},
        {92, 95, 80},
        {90, 89, 85},
        {70, 75, 72}
    };

    double rataRata[jumlahSiswa];
    int nilaiTertinggi[jumlahMapel] = {0};
    string siswaTertinggi = "";
    double rataTertinggi = 0;

    // hitung rata-rata per siswa dan nilai tertinggi
    for (int i = 0; i < jumlahSiswa; i++) {
        int total = 0;
        for (int j = 0; j < jumlahMapel; j++) {
            total += nilai[i][j];
            if (nilai[i][j] > nilaiTertinggi[j]) {
                nilaiTertinggi[j] = nilai[i][j];
            }
        }

        rataRata[i] = (double)total/jumlahMapel;

        if (rataRata[i] > rataTertinggi) {
            rataTertinggi = rataRata[i];
            siswaTertinggi = namaSiswa[i];
        }
    }

    // tabel
    cout << "===============================================================\n";
    cout << "DATA NILAI SISWA SEKOLAH BANGSA\n";
    cout << "===============================================================\n";
    cout << setw(10) << "Nama";
    for (int i = 0; i < jumlahMapel; i++) {
        cout << setw(18) << namaMapel[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahSiswa; i++) {
        cout << setw(10) << namaSiswa[i];
        for (int j = 0; j < jumlahMapel; j++) {
            cout << setw(18) << nilai[i][j];
        }
        cout << endl;
    }

    cout << "\n=============================================================\n";
    cout << "Rata-rat nilai tiap siswa:\n";
    for (int i =0; i < jumlahSiswa; i++) {
        cout << "- " << namaSiswa[i] << ":" << fixed << setprecision(2) << rataRata[i] << endl;
    }

    cout << "\n=============================================================\n";
    cout << "Nilai tertinggi tiap mata pelajaran:\n";
    for (int i = 0; i < jumlahMapel; i++) {
        cout << "- " << namaMapel[i] << ": " << nilaiTertinggi[i] << endl;
    }

    cout << "\n=============================================================\n";
    cout << "Siswa dengan rata-rata tertinggi: " << siswaTertinggi << " ("
        << fixed  << setprecision(2) << rataTertinggi << ")\n";
    cout << "===============================================================\n";

    return 0;
} 