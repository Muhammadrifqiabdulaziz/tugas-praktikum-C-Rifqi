#include <iostream>
using namespace std;

int main() {
    int NILAI[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int LULUS[12], GAGAL[12];
    int lulusCount = 0, gagalCount = 0;

    for (int i = 0; i < 12; i++) {
        if (NILAI[i] >= 60) {
            LULUS[lulusCount++] = NILAI[i];
        } else {
            GAGAL[gagalCount++] = NILAI[i];
        }
    }

    cout << "Mahasiswa yang LULUS: ";
    for (int i = 0; i < lulusCount; i++) {
        cout << LULUS[i] << " ";
    }
    cout << endl;

    cout << "Mahasiswa yang GAGAL: ";
    for (int i = 0; i < gagalCount; i++) {
        cout << GAGAL[i] << " ";
    }
    cout << endl;

    cout << "Jumlah mahasiswa yang LULUS: " << lulusCount << endl;
    cout << "Jumlah mahasiswa yang GAGAL: " << gagalCount << endl;

    return 0;
}
