#include <stdio.h>

int main()
{
	char nim[10], nama[30];
	
	printf("INPUT DATA MAHASISWA\n");
	printf("NIM : "); 
	scanf("%s", &nim);
	printf("NAMA : "); 
	gets(nama);
	
	//tampilan
	printf("\nNIM : %s", nim); 
	printf("\nNAMA : %s", nama);
	return 0;
}
