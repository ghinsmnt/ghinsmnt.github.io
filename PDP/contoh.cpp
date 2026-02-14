//Soal 1: Menghitung Total Pembelian di Toko
Cerita:
Seorang kasir di toko ingin menghitung total harga barang yang dibeli oleh pelanggan.
Pelanggan membeli 3 barang dengan harga berbeda. Program harus meminta pengguna memasukkan harga setiap barang, lalu menghitung total harga dan menampilkannya.

Tugas:
Buat program C++ yang:
    Meminta input 3 harga barang.
    Menghitung totalnya.
    Menampilkan total harga.

#include <iostream>
using namespace std;

int main() {
    double barang1, barang2, barang3, total;

    cout << "Masukkan harga barang pertama: ";
    cin >> barang1;
    cout << "Masukkan harga barang kedua: ";
    cin >> barang2;
    cout << "Masukkan harga barang ketiga: ";
    cin >> barang3;

    total = barang1 + barang2 + barang3;

    cout << "Total harga semua barang adalah: Rp " << total << endl;
    return 0;
}

//-------------------------------------------------------------------------------------------------------------

//Soal 2: Menentukan Nilai Akhir Mahasiswa
Cerita:
Seorang dosen ingin menghitung nilai akhir mahasiswa berdasarkan:
Nilai tugas: 30%
Nilai UTS: 30%
Nilai UAS: 40%

Tugas:
Buat program C++ yang:
    Meminta input nilai tugas, UTS, dan UAS.
    Menghitung nilai akhir berdasarkan bobot.
    Menampilkan hasilnya.

#include <iostream>
using namespace std;

int main() {
    float tugas, uts, uas, nilaiAkhir;

    cout << "Masukkan nilai tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    nilaiAkhir = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);

    cout << "Nilai akhir mahasiswa adalah: " << nilaiAkhir << endl;
    return 0;
}

//-------------------------------------------------------------------------------------------------------------

//Soal 3: Menghitung Waktu Lembur Karyawan
Cerita:
Sebuah perusahaan membayar gaji lembur sebesar Rp20.000 per jam.
Jika karyawan bekerja lebih dari 8 jam, maka kelebihan jamnya dihitung sebagai lembur.

Tugas:
Buat program C++ yang:
    Meminta input jumlah jam kerja.
    Menghitung upah lembur jika ada.
    Menampilkan total gaji lembur.

#include <iostream>
using namespace std;

int main() {
    int jamKerja;
    int gajiLembur = 0;

    cout << "Masukkan jumlah jam kerja hari ini: ";
    cin >> jamKerja;

    if (jamKerja > 8) {
        gajiLembur = (jamKerja - 8) * 20000;
        cout << "Anda lembur " << jamKerja - 8 << " jam.\n";
    }

    cout << "Total gaji lembur Anda: Rp " << gajiLembur << endl;
    return 0;
}

//-------------------------------------------------------------------------------------------------------------

//Soal 4: Menentukan Genre Film
Cerita:
Sebuah aplikasi ingin memberikan rekomendasi film berdasarkan genre yang dipilih pengguna.

Tugas:
Buat program C++ yang:
    Menampilkan daftar genre (1. Action, 2. Comedy, 3. Horror).
    Meminta pengguna memilih satu genre.
    Menggunakan switch-case untuk menampilkan rekomendasi film sesuai pilihan.

#include <iostream>
using namespace std;

int main() {
    int genre;

    cout << "Pilih genre film:\n";
    cout << "1. Action\n2. Comedy\n3. Horror\n";
    cout << "Masukkan pilihan (1-3): ";
    cin >> genre;

    switch (genre) {
        case 1:
            cout << "Rekomendasi: 'Avengers: Endgame'" << endl;
            break;
        case 2:
            cout << "Rekomendasi: 'Mr. Bean’s Holiday'" << endl;
            break;
        case 3:
            cout << "Rekomendasi: 'The Conjuring'" << endl;
            break;
        default:
            cout << "Genre tidak dikenal." << endl;
    }

    return 0;
}

//-------------------------------------------------------------------------------------------------------------

//Soal 5: Menghitung Luas dan Keliling Lingkaran
Cerita:
Seorang siswa ingin menghitung luas dan keliling lingkaran dari jari-jari yang dimasukkan.

Tugas:
Buat program C++ yang:
    Meminta input jari-jari.
    Menghitung luas (πr²) dan keliling (2πr).
    Menampilkan hasil.

#include <iostream>
using namespace std;

int main() {
    double r, luas, keliling;
    const double phi = 3.14;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    luas = phi * r * r;
    keliling = 2 * phi * r;

    cout << "Luas lingkaran: " << luas << endl;
    cout << "Keliling lingkaran: " << keliling << endl;

    return 0;
}
