#include <stdio.h>

int main() {
    int kecepatan = 2; // kecepatan dalam meter/detik
    int waktu = 100;   // waktu dalam detik
    int jarak;

    jarak = kecepatan * waktu;
    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);
    
    return 0;
}
