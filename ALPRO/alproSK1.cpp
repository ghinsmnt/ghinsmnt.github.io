#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    string namaBarang;
    int jumlah;
    float harga, total = 0, subtotal;

    cout << "Jumlah jenis barang: ";
    cin >> n;
    cin.ignore();

    ofstream file("transaksi.txt");
    if (!file) {
        cout << "Gagal membuka file" << endl;
        return 1;
    }

    cout << "=== INPUT BARANG ===\n";
    for (int i = 1; i <= n; i++) {
        cout << "Barang ke-" << i << ":\n";
        cout << "Nama   : ";
        getline(cin, namaBarang);
        cout << "Harga  : ";
        cin >> harga;
        cout << "Jumlah : ";
        cin >> jumlah;
        cin.ignore();

        subtotal = harga * jumlah;
        total += subtotal;

        file << " Barang: " << namaBarang
             << " | Harga: " << harga
             << " | Jumlah: " << jumlah
             << " | Subtotal: " << subtotal << endl;
    }

    file << "TOTAL BELANJA = " << total << endl;
    file << "--------------------------\n";
    file.close();

    cout << "\n=== STRUK BELANJA ===\n";
    cout << "Total belanja: " << total << endl;

    cout << "\nIsi file transaksi.txt\n";
    ifstream fileIn("transaksi.txt");
    string baris;
    while (getline(fileIn, baris)) {
        cout << baris << endl;
    }
    fileIn.close();

    return 0;
}