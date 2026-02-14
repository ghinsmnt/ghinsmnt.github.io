#include <iostream>
using namespace std;

int main() {
    // masukkan ipk
    int alpro = 90;
    int strukturData = 80;
    int logikaInformatika = 88;
    int rata;

    // hitung rata-rata
    rata = ( alpro + strukturData + logikaInformatika ) / 3;

    // tampilkan hasil
    cout << "Nilai Alpro: " << alpro << endl;
    cout << "Nilai Struktur Data: " << strukturData << endl;
    cout << "Nilai Logika Informatika: " << logikaInformatika << endl;
    cout << "Rata-rata IPK: " << rata << endl;

    // menentukan kelulusan
    if (rata > 6) {
        cout << "LULUS" << endl;
    } else {
        cout << "GAGAL" << endl;
    }

    return 0;
}