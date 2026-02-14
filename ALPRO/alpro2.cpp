#include <iostream>
using namespace std;

int main() {
    conts float konversi_cm = 100.0;
    float berat = 46.5;
    float tinggi = 157.3;
    float BMI;

    cout << "Masukkan Nilai Berat Badan: ";
    cin >> berat;
    cout << "Masukkan Nilai Tinggi Badan: ";
    cin >> tinggi;

    tinggi = tinggi / konversi_cm;
    BMI = berat / (tinggi*tinggi);
    cout << "Hasil BMI Anda Adalah: " << BMI << endl;

    return 0;
}