#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string tanggal, catatan;
    int pilihan;
    char lagi;

    do {
        cout << "=== MENU CATATAN HARIAN ===" << endl;
        cout << "1. Tambah Catatan Baru" << endl;
        cout << "2. Lihat Semua Catatan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan Menu: ";
        cin >> pilihan;
        cin.ignore(); //membersihkan

        if (pilihan == 1) {
            ofstream file("diary.txt", ios::app);
            if (!file) {
                cout << "Gagal Membuka File!" << endl;
                return 1;
            }
            cout << "Masukkan tanggal (dd/mm/yyyy): ";
            getline(cin, tanggal);
            cout << "Masukkan isi catatan:\n";
            getline(cin, catatan);

            file << "Tanggal: " << tanggal << endl;
            file << "Catatan: " << catatan << endl;
            file << "----------------------" << endl;
            file.close();
            cout << "Catatan Berhasil Disimpan!\n";
        } 
        else if (pilihan == 2) {
            ifstream file("diary.txt");
            if (!file) {
                cout << "Belum ada catatan yang tersimpan.\n";
            } else {
                cout <<"\n=== DAFTAR CATATAN ===\n";
                string baris;
                while (getline(file, baris)) {
                    cout << baris << endl;
                }
                file.close();
                cout << "======================\n";
            }
        }
        else if (pilihan == 3) {
            cout << "Keluar dari program.\n";
            break;
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }

        cout << "\nKembali ke menu? (y/n): ";
        cin >> lagi;
        cin.ignore();

    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}