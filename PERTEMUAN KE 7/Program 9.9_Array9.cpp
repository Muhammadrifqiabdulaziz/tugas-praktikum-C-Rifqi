#include <stdio.h> 
main()
{
	int A[5]; 
	int i=0, X;
	
	printf("Input bilangan (akhiri penginputan dengan '999'):\n\n");
	while(true) {
		scanf("%i", &X); 
		if (i>=5) {
			printf("\nArray penuh!"); 
			break;
		}
		if (X==999) {
			printf("\nProgram berakhir."); 
			break;
		}
		if (X%2==1) {
			A[i] = X;
			i++;
		}
	}
	for(i=0; i<5; i++) { 
		printf("%4i", A[i]);
	}
	return 0;
}
