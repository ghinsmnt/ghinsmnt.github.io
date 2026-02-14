#include <iostream>
using namespace std;

//SK 2
int main()  {
    float kehadiran;

    cout << "Masukkan persentase kehadiran mahasiswa: ";
    cin >> kehadiran;

    if (kehadiran >= 75 && kehadiran <= 100 ) {
        cout << "Mahassiswa diperbolehkan mengikuti ujian" << endl;
    }
    else if (kehadiran >= 0 && kehadiran < 75) {
        cout << "Mahasiswa tidak diperbolehkan mengikuti ujian" << endl;
    }
    else {
        cout << "Input persentase tidak valid" << endl;
    }
    
    return 0;
}