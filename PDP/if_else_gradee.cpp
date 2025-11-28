#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai mahasiswa: " << endl;
    cin >> nilai;

    if (nilai > 100 || nilai < 0) {
        cout << "Nilai tidak valid" << endl;
    } 
    else if (nilai >= 85) {
        cout << "Grade: A" << endl;
    } 
    else if (nilai >= 70) {
        cout << "Grade: B" << endl;
    } 
    else if (nilai >= 55) {
        cout << "Grade: C" << endl;
    }
    else if (nilai >= 40) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: E" << endl;
    }

    return 0;
}