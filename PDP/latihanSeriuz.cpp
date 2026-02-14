// //Menghitung Luas Persegi Panjang
// #include <iostream>
// using namespace std;

// int main() {
//     double panjang, lebar, luas;

//     cout << "Masukkan panjang: ";
//     cin >> panjang;
//     cout << "Masukkan lebar: ";
//     cin >> lebar;

//     luas = panjang * lebar;

//     cout << "Luas persegi panjang adalah: " << luas << endl;

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------

// //Menentukan Bilangan Ganjil atau Genap
// #include <iostream>
// using namespace std;

// int main() {
//     int angka;
//     cout << "Masukkan bilangan: ";
//     cin >> angka;

//     if (angka % 2 == 0)
//         cout << "Bilangan genap" << endl;
//     else 
//         cout << "Bilangan ganjil" << endl;

//     return 0;

// }

//------------------------------------------------------------------------------------------------------------

//Konversi Suhu Celcius ke Fahrenheit
//Rumus: F = (C × 9/5) + 32

// #include <iostream>
// using namespace std;

// int main() {
//     double c, f;

//     cout << "Masukkan suhu dalam celcius: ";
//     cin >> c;

//     f = (c * 9/5) + 32;
//     cout << "Suhu dalam Fahrenheit: " << f << endl;

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------

//Menentukan Nilai Huruf dari Nilai Angka
//90–100 → A
//80–89 → B
//70–79 → C
//60–69 → D
//<60 → E
// #include <iostream>
// using namespace std;

// int main() {
//     int nilai;

//     cout << "Masukkan Nilai: ";
//     cin >> nilai;

//     if (nilai > 100 || nilai < 0) {
//         cout << "Nilai tidak valid!" << endl;
//     }
//     else if (nilai >= 90) {
//         cout << "Grade: A" << endl;
//     }
//     else if (nilai >= 80) {
//         cout << "Grade: B" << endl;
//     }
//     else if (nilai >= 70) {
//         cout << "Grade: C" << endl;
//     }
//     else if (nilai >= 60) {
//         cout << "Grade: D" << endl;
//     }
//     else {
//         cout << "Grade: E" << endl;
//     }

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------

//Program Kasir Sederhana
