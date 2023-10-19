#include <stdio.h>
#include <string.h>

int main()
{
	int nilai;
	char X[10];
	
	printf("Inputkan Sebuah Nilai: ");
	scanf("%i", &nilai);
	
	if (nilai >= 60)
		strcpy(X, "LULUS");
	else 
		strcpy(X, "GAGAL");
	printf("\n\n %s", X);
	
	printf("\nProgram Selesai.");
	return 0;
}
