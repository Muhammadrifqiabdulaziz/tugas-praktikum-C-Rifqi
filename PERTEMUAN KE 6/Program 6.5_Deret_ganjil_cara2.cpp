#include <stdio.h> 
main()
{
	int i, N=1;
	printf("10 Bilangan Ganjil Pertama\n"); 
	for(i=1; i<=10; i++) {
		printf("%4i", N); 
		N = N + 2;
	}
	
	return 0;
}
