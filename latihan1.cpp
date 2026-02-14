#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    int c = 2;

    int perkalian = a * a;
    int sisaBagi = b % c;
    int pembagian = b / c;
    int pengurangan = b - a;
    int penjumlahan = a + c;
    
    cout << a << "*" << a << "=" << a * a << endl;
    cout << b << "%" << c << "=" << b % c << endl;
    cout << b << "/" << c << "=" << (double) b / c << endl;
    cout << b << "-" << a << "=" << b - a << endl;
    cout << a << "+" << c << "=" << a + c << endl;

    return 0;
}