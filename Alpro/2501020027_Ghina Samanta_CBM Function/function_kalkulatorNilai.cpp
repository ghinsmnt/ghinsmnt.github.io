#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double hitungTugas(double nilai);
double hitungUTS(double nilai);
double hitungUAS(double nilai);
double hitungAkhir(double nilaiTugas, double nilaiUTS, double nilaiUAS);
string kategori(double nilaiAkhir);

int main()
{
    string nama;
    double nilaiTugas, nilaiUTS, nilaiUAS;

    cout << "========================================" << endl;
    cout << "KALKULATOR NILAI MAHASISWA" << endl;
    cout << "========================================" << endl;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    double nilaiTugasAkhir = hitungTugas(nilaiTugas);
    double nilaiUTSAkhir = hitungUTS(nilaiUTS);
    double nilaiUASAkhir = hitungUAS(nilaiUAS);
    double nilaiAkhirTotal = hitungAkhir(nilaiTugasAkhir, nilaiUTSAkhir, nilaiUASAkhir);

    cout << fixed << setprecision(2);
    cout << "\n========================================" << endl;
    cout << "HASIL PERHITUNGAN NILAI" << endl;
    cout << "========================================" << endl;
    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "Nilai Tugas: " << nilaiTugasAkhir << endl;
    cout << "Nilai UTS: " << nilaiUTSAkhir << endl;
    cout << "Nilai UAS: " << nilaiUASAkhir << endl;
    cout << "----------------------------------------" << endl;
    cout << "Nilai Akhir: " << nilaiAkhirTotal << endl;
    cout << "Kategori: " << kategori(nilaiAkhirTotal) << endl;
    cout << "========================================" << endl;

    return 0;
}

double hitungTugas(double nilai)
{
    return nilai * 0.3;
}
double hitungUTS(double nilai)
{
    return nilai * 0.3;
}
double hitungUAS(double nilai)
{
    return nilai * 0.4;
}
double hitungAkhir(double tugas, double uts, double uas)
{
    return tugas + uts + uas;
}

string kategori(double nilaiAkhir)
{
    if (nilaiAkhir >= 85)
        return "A";
    else if (nilaiAkhir >= 75)
        return "B";
    else if (nilaiAkhir >= 65)
        return "C";
    else if (nilaiAkhir >= 55)
        return "D";
    else
        return "E";
}