#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomor, jenis, status;
    int lama;
    double tarif = 0, total = 0, diskon = 0, totalAkhir = 0;

    cout << "==SISTEM PARKIR OTOMATIS==" << endl;
    cout << "MENU HARGA PARKIR" << endl;
    cout << "Motor : Rp2000" << endl;
    cout << "Mobil : Rp5000" << endl;
    cout << "truk : Rp8000" << endl;
    cout << "Masukkan nomor kendaraan: ";
    cin >> nomor;
    cout << "Masukkan jenis kendaraan (motor, mobil, truk): ";
    cin >> jenis;
    cout << "Masukkan lama parkir (jam): ";
    cin >> lama;
    cout << "Masukkan status pengguna (pegawai/umum): ";
    cin >> status;

    //tentukan tarif perjam
    if (jenis == "motor") {
        tarif = 2000;
    }
    else if (jenis == "mobil") {
        tarif = 5000;
    }
    else if (jenis == "truk") {
        tarif = 8000;
    }
    else {
        cout << "Jenis kendaraan tidak dikenal" << endl;
        return 0;
    }

    //hitung total awal
    total = tarif * lama;

    //tambahan biaya
    if (lama > 5)
        total += 5000;

    //diskon pegawai
    if (status == "pegawai") {
        diskon = total * 0.2;
    }
    else {
        diskon = 0; //bukan pegawai
    }

    totalAkhir = total - diskon;

    //output akhir
    cout << "\n===RINCIAN PARKIR===" << endl;
    cout << "Nomor kendaraan: " << nomor << endl;
    cout << "Jenis kendaraan: " << jenis << endl;
    cout << "Lama parkir: " << lama << endl;
    cout << "Status pengguna: " << status << endl;
    cout << "Total sebelum diskon:Rp " << total << endl;
    cout << "Diskon:Rp " << diskon << endl;
    cout << "Jumlah bayar:Rp " << totalAkhir << endl;

    return 0;
}