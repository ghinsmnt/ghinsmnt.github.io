#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int menuPerpustakaan;
    string judul, pengarang, cari;
    string data;
    
    do {
        cout << "===MENU PERPUSTAKAAN===\n";
        cout << "1. Tambah koleksi buku\n";
        cout << "2. Koleksi buku\n";
        cout << "3. Cari buku berdasarkan judul\n";
        cout << "4. Keluar\n";
        cin >> menuPerpustakaan;
        cin.ignore();

        if (menuPerpustakaan == 1) {
            cout << "Judul buku: ";
            getline(cin, judul);
            cout << "Nama pengarang: ";
            getline(cin, pengarang);

            ofstream fileOut("buku.txt", ios::app);
            if (fileOut.is_open()){
                fileOut << "Judul buku: " << judul << " | Pengarang: " << pengarang << endl;
                fileOut.close();
                cout << "Buku berhasil ditambahkan ke koleksi!\n";
            } else {
                cout << "Gagal membuka file!\n";
            }
        }

        else if (menuPerpustakaan == 2) {
            ifstream file("buku.txt");
            if (file.is_open()) {
                cout << "===DAFTAR KOLEKSI BUKU===\n";
                while (getline(file, data)){
                    cout << data << endl;
                }
                file.close();
            } else {
                cout << "Belum ada daftar buku di daftar koleksi";
            }
        }

        else if (menuPerpustakaan == 3) {
            cout << "Judul yang ingin dicari: ";
            getline(cin, cari);

            ifstream file("buku.txt");
            bool ketemu = false;
            if (file.is_open()) {
                while (getline(file, data)) {
                    if (data.find(cari) != string::npos) {
                        cout << "Ditemukan " << data << endl;
                        ketemu = true;
                    }
                }
                file.close();
                if (!ketemu) cout << "Buku tidak ditemuksn!\n";
            } else { 
                cout << "Belum ada data buku\n";

            }
        }

        else if (menuPerpustakaan == 4) {
            cout << "Keluar dari program..\n";
        }
        else {
            cout << "Pilihan tidak tersedia\n";
        }  
    } while (menuPerpustakaan != 4);

    return 0; 

}