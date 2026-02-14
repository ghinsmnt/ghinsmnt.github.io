#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int angkaRahasia, tebakan;
    int kesempatan = 5;

    srand(time(0)); //angka acak
    angkaRahasia = rand() % 10 + 1; //angka 1-10

    cout << "=== PERMAINAN TEBAK ANGKA ===" << endl;
    cout << "Saya telah memilih angka 1-10." << endl;
    cout << "Kamu punya " << kesempatan << " kesempatan untuk menebak." << endl;

    for (int i = 1; i <= kesempatan; i++) {
        cout << "\nTebakan ke-" << i << ":";
        cin >> tebakan;
        if (tebakan == angkaRahasia) {
            cout << "Selamat! Tebakan kamu Benar!" << endl;
            break;
        }
        else {
            cout << "Salah! Coba lagi" << endl;
        }
        if (i == kesempatan) {
            cout << "\nKesempatan habis! Angka yang benar adalah: " << angkaRahasia << endl;
        }
    }
    cout << "Terimakasih telah bermain!" << endl;

    return 0;
}