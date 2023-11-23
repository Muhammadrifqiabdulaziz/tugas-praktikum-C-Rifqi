#include <stdio.h>

int main() {
    double saldo_awal = 1000000; // Saldo awal dalam rupiah
    double bunga = 0.02;         // Persentase bunga per bulan
    int jumlah_bulan = 10;       // Jumlah bulan

    for (int i = 1; i <= jumlah_bulan; i++) {
        saldo_awal += saldo_awal * bunga; // Menambahkan bunga ke saldo setiap bulan
    }

    printf("Saldo setelah %d bulan adalah Rp. %.2lf\n", jumlah_bulan, saldo_awal);

	return 0;
}
