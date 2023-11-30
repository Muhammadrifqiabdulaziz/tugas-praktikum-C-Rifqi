#include <stdio.h> 
main()
{
	int A[12] = {12,15,7,10,5,2,17,25,9,20,35,14};
	int i;
	printf("Isi array A (1):"); 
	for(i=0; i<12; i++) {
		printf("%4i", A[i]);
	}
	printf("\nIsi array A (2):");
	for(i=11; i>=0; i--) {
		printf("%4i", A[i]);
	}
	return 0;
}
