1. Struktur Dasar Program C++
    #include <iostream>     // pustaka untuk input-output
    using namespace std;    // agar tidak perlu menulis std::

    int main() {            // fungsi utama program
    cout << "Hello, World!";  // perintah menampilkan teks
    return 0;           // mengakhiri program
    }

//2. Tipe Data dalam C++
    int umur = 18;
    float tinggi = 160.5;
    char huruf = 'A';
    string nama = "Gumi";
    bool status = true;

//3. Operator dalam C++
| Jenis        | Contoh            | Keterangan                  |    |                             |
| ------------ | ----------------- | --------------------------- | -- | --------------------------- |
| Aritmatika   | `+ - * / %`       | Operasi matematika          |    |                             |
| Penugasan    | `= += -= *= /=`   | Memberi atau mengubah nilai |    |                             |
| Perbandingan | `== != > < >= <=` | Membandingkan dua nilai     |    |                             |
| Logika       | `&&               |                             | !` | Operasi logika AND, OR, NOT |

    int a = 5, b = 3;
    cout << (a + b);  // Output: 8
    cout << (a > b);  // Output: 1 (true)

//4. Struktur Kontrol (Percabangan dan Perulangan
    //a. Percabangan
    int nilai = 80;
        if (nilai >= 90)
            cout << "A";
        else if (nilai >= 75)
            cout << "B";
        else
            cout << "C";
    //b. Perulangan
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    //c. Perulangan
    int x = 1;
    while (x <= 3) {
     cout << x;
        x++;
    }

//5. Array
    int angka[5] = {10, 20, 30, 40, 50};
        cout << angka[2]; // Output: 30

//6. String
    string nama = "Kumiko";
        cout << "Nama: " << nama;

//7. Fungsi (Function)
    #include <iostream>
    using namespace std;

    void sapa() {
        cout << "Halo, selamat datang!\n";
    }

    int tambah(int a, int b) {
        return a + b;
    }

    int main() {
        sapa();
        cout << "Hasil = " << tambah(3, 4);
    }

//8. Looping
    for (int i = 1; i <= 5; i++) { //SUDAH DIKETAHUI
        cout << "Perulangan ke-" << i << endl;
    }

    int i = 1; //BELUM DIKETAHUI
    while (i <= 5) {
        cout << "Nilai i = " << i << endl;
        i++;
    }

    int i = 1; //MESKIPUN KONDISI SALAH
    do {
        cout << "Iterasi ke-" << i << endl;
        i++;
    } while (i <= 5);

//9. FStream
    #include <iostream>
    #include <fstream>
    #include <string>
    using namespace std;

    int main() {
     // 1️⃣ Menulis ke file
        ofstream tulis("catatan.txt");
        tulis << "Belajar C++ itu menyenangkan!";
        tulis.close();

    // 2️⃣ Membaca dari file
        string isi;
        ifstream baca("catatan.txt");
        getline(baca, isi);
        cout << "Isi file: " << isi << endl;
        baca.close();
    }
