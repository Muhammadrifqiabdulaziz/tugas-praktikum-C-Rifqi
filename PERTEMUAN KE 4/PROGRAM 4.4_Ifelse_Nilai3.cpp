#include <stdio.h>
#include <string.h>

int main()
{
	int nilai;
	char X[10];
	
	strcpy(X, "GAGAL");
	printf("\n Inputkan Sebuah Nilai : ");
	scanf("%i", &nilai);
	if (nilai >=60)
		strcpy(X, "LULUS");
	printf("\n %s", X);
	printf("\nProgram Selesai.");
	return 0;
}
