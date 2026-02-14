#include <iostream>
using namespace std;

int main() {
     int a, b;
     
     //soal 1
     cout << "Nilai a: ";
     cin >> a;
     cout << "Nilai b: ";
     cin >> b;

     int perkalian =  a * b;
     cout << a << "*" << b << "=" << perkalian << endl;

     //soal 2
     cout << "Nilai a: ";
     cin >> a;
     cout << "Nilai b: ";
     cin >> b;

     int sisaBagi =  a % b;
     cout << a << "%" << b << "=" << sisaBagi << endl;
     
     //soal 3
     cout << "Nilai a: ";
     cin >> a;
     cout << "Nilai b: ";
     cin >> b;

     int penjumlahan =  a + b;
     cout << a << "+" << b << "=" << penjumlahan << endl;

     //soal 4
     cout << "Nilai a: ";
     cin >> a;
     cout << "Nilai b: ";
     cin >> b;

     cout << a << "/" << b << "=" << (double) a / b << endl;

     //soal 5
     cout << "Nilai a: ";
     cin >> a;
     cout << "Nilai b: ";
     cin >> b;

     int pengurangan =  a - b;
     cout << a << "-" << b << "=" << pengurangan << endl;
     
     return 0;
}