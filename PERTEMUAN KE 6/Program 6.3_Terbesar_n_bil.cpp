#include <stdio.h> 
main()
{
	int A, max, i;
	printf("Input 10 buah bilangan\n"); 
	printf("Bilangan pertama: "); 
	scanf("%i", &A);
	max = A;
	for(i=1; i<=9; i++) { 
		printf("Bilangan ke-%i: ", (i+1)); 
		scanf("%i", &A);
		if (A > max) { 
		max = A;
		}
	}
	printf("\nBilangan terbesar: %i", max); 
	
	return 0;
}
