#include <iostream>
using namespace std;

int main() {
    double saldo;

    cout << "=== PENENTUAN KATEGORI NASABAH ===" << endl;
    cout << "Masukkan jumlah saldo Anda (Rp): ";
    cin >> saldo;
    cout << endl;

    if (saldo > 50000000) {
        cout << "Kategori: Nasabah Prioritas" << endl;
    }
    else if (saldo >= 10000000 && saldo <= 50000000) {
        cout << "Kategori: Nasabah Reguler" << endl;
    }
    else if (saldo < 10000000) {
        cout << "Kategori: Nasabah Basic" << endl;
    }
    else {
        cout << "Input tidak valid." << endl;
    }
    
    return 0;
}