#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string nama, status;
    char lagi;

    do {
        cout << "Masukkan Nama Mahasiswa: ";
        getline(cin, nama);

        // status
        do {
            cout << "Masukkan Status Kehadiran Mahasiswa (hadir/izin/sakit/alpa): ";
            getline(cin, status);

            if (status !="hadir" && status !="izin" && status !="sakit" && status !="alpa") {
                cout << "Status tidak valid. Silakan masukkan kembali!\n";
            } 

        } while (status !="hadir" && status !="izin" && status !="sakit" && status !="alpa");
    
        // save ke file
        ofstream fileOut("Absensi.txt", ios::app);
        if (fileOut.is_open()) {
             fileOut << nama << " - " << status << endl;
            fileOut.close();
            cout << "Data absensi berhasil disimpan.\n";
        } else {
            cout << "Gagal membuka file absensi.txt!\n";
        }

        cout << "Apakah ingin menambah data (y/n): ";
        cin >> lagi;
        cin.ignore(); //pembersihan

    }while (lagi == 'y' || lagi == 'Y');

    //output daftar absensi
    cout << "\n=== Daftar Kehadiran Mahasiswa===\n";
    ifstream fileIn("absensi.txt");
    if (fileIn.is_open()) {
        string line;
        while (getline(fileIn, line)) {
            cout << line << endl;
        }
        fileIn.close();
    } else {
        cout << "Gagal membuka file absensi.txt!\n";
    }

    return 0;
}