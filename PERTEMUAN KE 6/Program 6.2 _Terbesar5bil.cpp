#include <stdio.h> 
main()
{
	int A, max;
	printf("Input 5 buah bilangan\n"); 
	printf("Bilangan 1: "); scanf("%i", &A); 
	max = A;
	printf("Bilangan 2: "); scanf("%i", &A); 
	if (A > max) {
		max = A;
	}
	printf("Bilangan 3: "); scanf("%i", &A); 
	if (A > max) {
		max = A;
	}
	printf("Bilangan 4: "); scanf("%i", &A); 
	if (A > max) {
		max = A;
	}
	printf("Bilangan 5: "); scanf("%i", &A); 
	if (A > max) {
		max = A;
	}
	printf("\nBilangan terbesar: %i", max); 
	
	return 0;
}
