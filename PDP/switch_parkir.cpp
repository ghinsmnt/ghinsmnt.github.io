#include <iostream>
using namespace std;

int main() {
    int jenis;

    cout << "=== TARIF PARKIR ===" << endl;
    cout << "1. Mobil" << endl;
    cout << "2. Motor " << endl;
    cout << "3. Truk" << endl;
    cout << " " << endl;
    cout << "Masukkan jenis kendaraan: " << endl;
    cin >> jenis;

    switch (jenis) {
        case 1:
            cout << "Tarif parkir: Rp 5.000" << endl;
            break;
        case 2:
            cout << "Tarif parkir: Rp 2.000" << endl;
            break;
        case 3:
            cout << "Tarif parkir: Rp 10.000" << endl;
            break;
        default:
            cout << "Jenis kendaraan tidak dikenal" << endl;
            break;
    }   

    return 0;
}