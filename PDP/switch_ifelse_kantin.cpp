#include <iostream>
#include <string>
using namespace std;

int main() {
    int menu;
    string status;
    double harga = 0, total = 0, diskon = 0;

    cout << "=== MENU KANTIN KAMPUS ===" << endl;
    cout << "1. Nasi Goreng: Rp 15.000" << endl;
    cout << "2. Mie Ayam: Rp 12.000" << endl;
    cout << "3. Soto Ayam: Rp 13.000" << endl;
    cout << " " << endl;
    cout << "Masukkan pilihan menu: " << endl;
    cin >> menu;

    switch (menu) {
        case 1:
            harga = 15000;
            break;
        case 2:
            harga = 12000;
            break;
        case 3:
            harga = 13000;
            break;
        default:
            cout << "Menu tidak tersedia" << endl;
            return 0;

    }

    cout << "Status pembeli (mahasiswa/umum): ";
    cin >> status;

    if (status == "mahasiswa" || status == "Mahasiswa") {
        diskon = harga * 0.10; //diskon 10%
        total = harga - diskon;
    } 
    else if (status == "umum" || status == "Umum") {
        total = harga;
    } 
    else {
        cout << "Status pembeli tidak dikenal" << endl;
        return 0;
    } 

    cout << "----------------------------------------" << endl;
    cout << "Harga awal: " << harga << endl;
    cout << "Harga akhir: " << total << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}

