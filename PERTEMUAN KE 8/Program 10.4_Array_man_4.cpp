#include <stdio.h> 
main()
{
	int A[12] = {12,15,7,10,5,2,17,25,9,20,35,14}; 
	int B[12], C[12];
	int i;
	
	for(i=0; i<12; i++) { 
		if (A[i]%2==0)
			B[i] = A[i];
		else
			C[i] = A[i];
	}
	return 0;
}
