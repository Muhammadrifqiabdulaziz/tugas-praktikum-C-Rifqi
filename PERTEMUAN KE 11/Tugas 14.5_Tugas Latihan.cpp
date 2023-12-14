#include <iostream>
using namespace std;

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int BCount = 0, CCount = 0;

    // Menghitung rata-rata nilai mahasiswa
    double sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    double avg = sum / 12;

    // Memindahkan nilai ke array B atau C
    for (int i = 0; i < 12; i++) {
        if (A[i] > avg) {
            B[BCount++] = A[i];
        } else {
            C[CCount++] = A[i];
        }
    }

    // Menampilkan isi array A, B, dan C
    cout << "Isi array A: ";
    for (int i = 0; i < 12; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Isi array B: ";
    for (int i = 0; i < BCount; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Isi array C: ";
    for (int i = 0; i < CCount; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
