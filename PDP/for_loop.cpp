#include <iostream>
using namespace std;

// Soal 1 - FOR LOOP
int main() {
    cout << "=== TOTAL SKOR 10 SISWA ===" << endl;
    int totalSkor = 0, skor;

    for (int i = 1; i <= 10; i++) {
        cout << "Masukkan skor siswa ke-" << i << ": ";
        cin >> skor;
        totalSkor += skor;
    }

    cout << "Total skor seluruh siswa = " << totalSkor << endl;

    return 0;
}

// Soal 2 - WHILE LOOP
int main() {
    cout << "=== MENABUNG SAMPAI Rp1.000.000 ===" << endl;
    int saldo = 100000;
    int hari = 0;

    while (saldo < 1000000) {
        saldo += 50000;
        hari++;
    }

    cout << "Jumlah hari yang dibutuhkan: " << hari << endl;
    cout << "Saldo akhir: " << saldo << endl;

    return 0;
}

// Soal 3 - DO WHILE LOOP
int main() {
    cout << "=== VERIFIKASI PASSWORD ===" << endl;
    int password;
    const int passwordBenar = 12345;

    do {
        cout << "Masukkan password: ";
        cin >> password;
        if (password != passwordBenar) {
            cout << "Password salah! Coba lagi.\n";
        }    
    } while (password != passwordBenar);
        cout << "Password diterima!" << endl;
    
    return 0;
}

//Soal 4 - COMB FOR & WHILE
int main() {
    cout << "=== TOTAL PENDAPATAN MNGGUAN ===" << endl;
    int totalPendapatan = 0, pendapatanHarian = 0, harga, jumlah;

    for (int hari = 1; hari <= 7; hari++) {
        cout << "\nHari ke-" << hari << endl;
        pendapatanHarian = 0;

        while (true) {
            cout << "Masukkan harga barang (0 untuk selesai): ";
            cin >> harga;
            if (harga == 0) break;

            cout << "Masukkan jumlah barang terjual: ";
            cin >> jumlah;

            pendapatanHarian += harga * jumlah;
        }

        cout << "Pendapatan hari ke-" << hari << ": Rp" << pendapatanHarian << endl;
        totalPendapatan += pendapatanHarian;
    }

    cout << "\nTotal pendapatan selama seminggu: Rp" << totalPendapatan << endl;

    return 0;
}