#include <stdio.h>
#include <string.h>

int main()
{
	char nim[10];
	char nama[30];
	int kehadiran, tugas, uts, uas;
	float nilai_akhir;
	
	strcpy(nim, "2143011");
	strcpy(nama, "Muhammad Rifqi");
	kehadiran = 100;	// nilai kehadiran
	tugas = 90;			// nilai tugas
	uts = 83;			// nilai uts
	uas = 86;			// nilai uas
	
	/* perhitungan nilai akhir
		sesuai peraturan di STT Mandala
	*/
	
	nilai_akhir = (0.1 * kehadiran) + (0.2 * tugas) + (0.3 * uts) + (0.4 * uas);
	
	//Tampilkan data di layar monitor
	printf("NIM \t: %s", nim);
	printf("\nNAMA \t: %s", nama);
	printf("\nKEHADIRAN \t: %i", kehadiran); 
	printf("\nTUGAS \t: %i", tugas); 
	printf("\nUTS \t: %i", uts); 
	printf("\nUAS \t: %i", uas); 
	printf("\nNILAI AKHIR \t: %.2f", nilai_akhir);
	
	return 0;
 	
}
