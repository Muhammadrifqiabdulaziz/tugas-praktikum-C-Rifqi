#include <stdio.h> 
int main()
{

	char A[6] = "BOGOR"; 
	char B[8] = "JAKARTA";
	int I, J, flag=0;

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

	for (J=0; J<5; J++) { 
		for (I=0; I<7; I++) {
			if (A[J] == B[I]) {
				flag = 1; break;
			}
		}
	}

	if(flag==1) {
		printf("\nADA");
	} else {
		printf("\nTIDAK ADA");
	}
	
	return 0;
}
