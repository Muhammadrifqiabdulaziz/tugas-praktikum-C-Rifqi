#include <iostream>
#include <cctype>
using namespace std;

bool hurufSama(char A[], int panjang) {
    for (int i = 0; i < panjang - 1; i++) {
        for (int j = i + 1; j < panjang; j++) {
            if (A[i] == A[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    char A[8];
    int panjang;
    bool ada;

    cout << "Masukkan nama kota 1: ";
    for (int i = 0; i < 8; i++) {
        cin >> A[i];
        A[i] = toupper(A[i]);
    }

    panjang = sizeof(A) / sizeof(A[0]);
    ada = hurufSama(A, panjang);

    if (ada) {
        cout << "ADA" << endl;
    } else {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}
