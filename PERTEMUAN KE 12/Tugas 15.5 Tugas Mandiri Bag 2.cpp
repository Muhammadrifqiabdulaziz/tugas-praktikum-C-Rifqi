#include <iostream>
#include <cctype>
using namespace std;

void cekHurufTerbanyak(char A[], int panjang) {
    int count[26] = {0};
    char hurufTerbanyak = '\0';
    int jumlahTerbanyak = 0;

    for (int i = 0; i < panjang; i++) {
        count[A[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > jumlahTerbanyak) {
            jumlahTerbanyak = count[i];
            hurufTerbanyak = char(i + 'A');
        }
    }

    cout << "Huruf yang terbanyak adalah '" << hurufTerbanyak << "' dengan jumlah " << jumlahTerbanyak << " kali." << endl;
}

int main() {
    char A[] = "AJOGJAJARTA";
	int panjang = sizeof(A) / sizeof(A[0]);

    cekHurufTerbanyak(A, panjang);

    return 0;
}
