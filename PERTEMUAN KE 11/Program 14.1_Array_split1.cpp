#include <stdio.h> 
int main()
{
	int A[12] = {12,17,10,15,25,11,7,25,16,22,14,5}; int B[12] = {0};
	int C[12] = {0};
	int I;
	
	//cetak isi array A 
	printf("Isi Array A : "); 
	for (I=0; I<12; I++) {
		printf("%3i", A[I]);
	}
	
	//cetak isi array B 
	printf("\nIsi Array B : "); 
	for (I=0; I<12; I++) {
		printf("%3i", B[I]);
		}
		
	//cetak isi array C 
	printf("\nIsi Array C : "); 
	for (I=0; I<12; I++) {
		printf("%3i", C[I]);
	}
	return 0;
}
