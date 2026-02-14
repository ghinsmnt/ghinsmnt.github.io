//ALGORITMA DAN DASAR PEMROGRAMAN
//ANGGOTA KELOMPOK
//1. GHINA SAMANTA
//2. ALMAS NURI ADHWA
//3. NILMA HIDAYAH


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

//TASK1
void task1() {
    int nilai[5];
    cout << "Masukkan 5 nilai ujian mahasiswa:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i + 1 << ":";
        cin >> nilai[i];
    }

    int total = 0;
    for (int i = 0; i < 5; i++) total += nilai[i];
    double rata = (double)total / 5;
    cout << "Rata-rata nilai = " << rata << endl;
}

//TASK2
void task2() {
    int arr[] = {10, 5, 8, 12, 7, 3};
    int n = 6;

    int terkecil = arr[0], terbesar = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < terkecil) terkecil = arr[i];
        if (arr[i] > terbesar) terbesar = arr[i];
    }

    cout << "Elemen terkecil = " << terkecil << endl;
    cout << "Elemen terbesar = " << terbesar << endl;

    //urutkan
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Data setelah diurutkan: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
    
//TASK3
void task3() {
    srand(time(0));
    int arr[3][3];

    cout << "Array 3*3 dengan bilangan acak:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = rand() % 100;
        cout << arr[i][j] << "\t";
        }
        cout << endl; //pindah baris
    }
}

//TASK4
void task4() {
    ofstream file("nama.txt");
    if (!file) {
        cout << "Gagal membuat file!" << endl;
        return;
    }

    string nama;
    cout << "Masukkan 5 nama mahasiswa:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nama ke-" << i + 1 << ":";
        cin >> nama;
        file << nama << endl;
    }

    file.close();
    cout << "Data berhasil disimpan ke nama.txt\n";
}

//TASK5
void task5() {
    ifstream file("nama.txt");
    if (!file) {
        cout << "File nama.txt tidak ditemukan!" << endl;
        return;
    }

    string nama;
    cout << "Isi file nama.txt\n";
    while (getline(file, nama)) {
        cout << nama << endl;
    }
    file.close();
}

//TASK6
void task6() {
    ofstream fileOut("angka.txt");
    if (!fileOut) {
        cout << "Gagal membuat file angka.txt" << endl;
        return;
    }

    cout << "Masukkan 10 angka:\n";
    int angka;
    for (int i = 0; i < 10; i++) {
        cout << "Angka ke-" << i + 1 << ":";
        cin >> angka;
        fileOut << angka << " ";
    }
    fileOut.close();

    ifstream fileIn("Angka.txt");
    int total = 0;
    while (fileIn >> angka) {
        total += angka;
    }
    fileIn.close();

    cout << "Jumlah total semua angka = " << total << endl;
}

//TASK7
void task7() {
    ifstream file("nilai.txt");
    if (!file) {
        cout << "File nilai.txt tidak ditemukan!" << endl;
        return;
    }

    int runtutan[100], n = 0;
    while (file >> runtutan[n]) {
        n++;
    }
    file.close();

    if (n == 0) {
        cout << "File kosong!" << endl;
        return;
    }

    int total = 0, maxNilai = runtutan[0];
    for (int i = 0; i < n; i++) {
        total += runtutan[i];
        if (runtutan[i] > maxNilai) maxNilai = runtutan[i];
    }
    double rata = (double)total / n;

    cout << "Data nilai dalam runtutan: ";
    for (int i = 0; i < n; i++) {
        cout << runtutan[i] << " ";
    }
    cout << endl;

    cout << "Rata-rata nilai = " << rata << endl;
    cout << "Nilai tertinggi = " << maxNilai << endl;
}

int main() {
    cout << "=== TASK 1 ===\n"; task1();
    cout << "=== TASK 2 ===\n"; task2();
    cout << "=== TASK 3 ===\n"; task3();
    cout << "=== TASK 4 ===\n"; task4();
    cout << "=== TASK 5 ===\n"; task5();
    cout << "=== TASK 6 ===\n"; task6();
    cout << "=== TASK 7 ===\n"; task7();
    
    return 0;
}