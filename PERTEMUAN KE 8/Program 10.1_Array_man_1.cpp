#include <stdio.h> 
main()
{
	int A[12] = {12,15,7,10,5,2,17,25,9,20,35,14};
	int i;
	printf("Isi array A : "); 
	for(i=0; i<12; i++) {
		printf("%4i", A[i]);
	}
	return 0;
}
