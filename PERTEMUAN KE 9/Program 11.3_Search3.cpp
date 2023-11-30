#include <stdio.h> 
int main()
{
	int A[11]={12,17,10,5,15,25,11,7,25,16,19};
	int I, N, flag; //flag untuk menandai ADA atau TIDAK ADA, 0 = tidak ada, 1 = ada
	
	printf("Masukkan bilangan integer = "); 
	scanf("%i",&N);
	
	//cetak isi array
	for (I=0; I<11; I++) {
		printf("%3i", A[I]);
	}

	//lakukan pencarian
	flag = 0; //nilai awal 0 = dianggap N tidak ada I = 0;
	while(I<=10) {
		//ubah nilai flag = 1 jika ada elemen array A yg sama dg N
		if(A[I]==N) {
			flag = 1;
		} I++;
	}
	printf("\n"); 
	if (flag == 1) {
		printf("ADA");
	} else {
		printf("TIDAK ADA");
	}
	return 0;
}
