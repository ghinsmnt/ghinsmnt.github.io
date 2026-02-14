#include <iostream>
using namespace std;

double hitungNilaiAkhir(double tugas, double uts, double uas) {
    return (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
}

char tentukanPredikat(double nilaiAkhir) {
    if (nilaiAkhir >= 85)
        return 'A';
    else if (nilaiAkhir >= 70)
        return 'B';
    else if (nilaiAkhir >= 55)
        return 'C';
    else
        return 0;
}

int main() {
    string nama;
    double tugas, uts, uas;

    cout << "=== PENILAIAN MAHASISWA ===\n";
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan nilai tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    double nilaiAkhir = hitungNilaiAkhir(tugas, uts, uas);
    char predikat = tentukanPredikat(nilaiAkhir);

    cout << "\n=== HASIL PENILAIAN ===\n";
    cout << "Nama mahasiswa: " << nama << endl;
    cout << "Nilai tugas: " << tugas << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Nilai akhir: " << nilaiAkhir << endl;
    cout << "Predikat: " << predikat << endl;

    return 0;
}