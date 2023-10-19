#include <stdio.h>

int main()
{
	int nilai;
	printf("Input nilai matakuliah: ");
	scanf("%i", &nilai);
	
	if (nilai >= 60) {
		printf("\nLULUS");
	}
	printf("\n\nProgram Selesai.");
	return 0;
}
