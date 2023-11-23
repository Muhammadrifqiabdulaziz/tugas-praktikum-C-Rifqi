#include <stdio.h> 
#define n 10 
main()
{
	int A[n]; 
	int i, max;
	printf("Input %i bilangan:\n\n", n); 
	for(i=0; i<n; i++) {
		printf("Bil %i: ", (i+1));
		scanf("%i", &A[i]);
	}
	max = A[0]; 
	for(i=1; i<n; i++) {
		if (A[i] > max) { 
			max = A[i];
		}
	}
	printf("Nilai terbesar = %i", max); 
	return 0;
}
