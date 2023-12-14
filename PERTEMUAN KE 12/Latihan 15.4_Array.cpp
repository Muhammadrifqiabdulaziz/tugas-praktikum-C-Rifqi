#include <iostream>
using namespace std;

int main() {
    char A[6], B[8];
    int i, j, ada = 0;
    char c;

    cout << "Masukkan nama kota 1: ";
    for (i = 0; i < 6; i++) {
        cin >> A[i];
        A[i] = toupper(A[i]);
    }

    cout << "Masukkan nama kota 2: ";
    for (i = 0; i < 8; i++) {
        cin >> B[i];
        B[i] = toupper(B[i]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 8; j++) {
            if (A[i] == B[j]) {
                ada = 1;
                c = A[i];
                break;
            }
        }
    }

    if (ada) {
        cout << "ADA" << endl;
        cout << "Huruf yang sama: " << c << endl;
    } else {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}
