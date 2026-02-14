#include <iostream>
using namespace std;

//SK 4
int main() {
    int menuRestoran;

    cout << "===MENU RESTORAN CEPAT SAJI===" << endl;
    cout << "1 = Burger" << endl;
    cout << "2 = Ayam goreng" << endl;
    cout << "3 = Kentang goreng" << endl;
    cout << "4 = Minuman" << endl;

    cout << "Masukkan nomor menu yang ingin dipesan: ";
    cin >> menuRestoran;

    switch (menuRestoran)
    {
    case 1:
        cout << "Kamu memesan Burger" << endl;
        break;
    case 2:
        cout << "Kamu memesan Ayam goreng" << endl;
        break;
    case 3:
        cout << "Kamu memesan Kentang goreng" << endl;
        break;
    case 4:
        cout << "Kamu memesan Minuman" << endl;
        break;
    
    default:
        cout << "Menu yang dipilih tidak tersedia!" << endl;
        break;
    }

    return 0;
}