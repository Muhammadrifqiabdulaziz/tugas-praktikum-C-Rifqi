#include <stdio.h> 
int main()
{
	char A[6] = "BOGOR"; 
	char B[8] = "JAKARTA";
	int I;
	
	//cetak isi array A 
	printf("Isi Array A : "); 
	for (I=0; I<5; I++) {
		printf("%3c", A[I]);
	}
	
	//cetak isi array B 
	printf("\nIsi Array B : "); 
	for (I=0; I<7; I++) {
		printf("%3c", B[I]);
	}
	
	return 0;
}
