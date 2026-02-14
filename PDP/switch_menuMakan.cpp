#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "=== MENU MAKANAN ===" << endl;
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Mie Ayam" << endl;
    cout << "3. Soto Ayam" << endl;
    cout << "4. Bakso" << endl;
    cout << " " << endl;
    cout << "Masukkan pilihan menu: " << endl;
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Anda memilih: Nasi Goreng" << endl;
            break;
        case 2:
            cout << "Anda memilih: Mie Ayam" << endl;
            break;
        case 3:
            cout << "Anda memilih: Soto Ayam" << endl;
            break;
        case 4:
            cout << "Anda memilih: Bakso" << endl;
            break;
        default:
            cout << "Menu tidak tersedia" << endl;
            break;
    }   

    return 0;
}