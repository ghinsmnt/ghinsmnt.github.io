#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int hitungLembur(int jamLembur) {
    const int upahPerjam = 20000;
    return jamLembur * upahPerjam;
}

double hitungPajak(double totalGaji) {
    if (totalGaji > 5000000)
        return totalGaji * 0.10;
    else
        return 0;
}

double hitungGajiBersih(double gajiPokok, int jamLembur) {
    double totalLembur = hitungLembur(jamLembur);
    double totalGaji = gajiPokok + totalLembur;
    double pajak = hitungPajak(totalGaji);
    double gajiBersih = totalGaji - pajak;
    return gajiBersih;
}

int main() {
    string nama;
    double gajiPokok;
    int jamLembur;

    cout << "=== HITUNG GAJI KARYAWAN ===" << endl;
    cout << "Masukkan nama karyawan: ";
    getline(cin, nama);
    cout << "Masukkan gaji pokok: ";
    cin >> gajiPokok;
    cout << "Masukkan jumlah jam lembur: ";
    cin >> jamLembur;

    double totalLembur = hitungLembur(jamLembur);
    double totalGaji = gajiPokok + totalLembur;
    double potonganPajak = hitungPajak(totalGaji);
    double gajiBersih = hitungGajiBersih(gajiPokok, jamLembur);

    cout << fixed << setprecision(0);

    cout << "\n=== HASIL PERHITUNGAN GAJI ===" << endl;
    cout << "Nama karyawan: " << nama << endl;
    cout << "Gaji pokok: Rp " << gajiPokok << endl;
    cout << "Total lembur: Rp " << totalLembur << endl;
    cout << "Potongan pajak: Rp " << potonganPajak << endl;
    cout << "Gaji bersih: Rp " << gajiBersih << endl;

    return 0;
}