#include <iostream>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int i, jumlah = 0;
    bool ada = false;

    std::cout << "Masukkan bilangan integer = ";
    std::cin >> C;

    for (i = 0; i < 10; i++) {
        if (A[i] == C) {
            ada = true;
            jumlah++;
        }
    }

    if (ada) {
        std::cout << "ADA\n" << jumlah << std::endl;
    } else {
        std::cout << "TIDAK ADA" << std::endl;
    }
	return 0;
}
