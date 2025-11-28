#include <iostream>
using namespace std;

int main() {
    int umur;

    cout << "Masukkan umur anda: " << endl;
    cin >> umur;

    if (umur < 12) {
        cout << "Kategori: Anak-anak" << endl;
    } 
    else if (umur >= 12 && umur <= 17) {
        cout << "Kategori: Remaja" << endl;
    } 
    else if (umur >= 18 && umur <= 59) {
        cout << "Kategori: Dewasa" << endl;
    } 
    else {
        cout << "Kategori: Lansia" << endl;
    }

    return 0;
}