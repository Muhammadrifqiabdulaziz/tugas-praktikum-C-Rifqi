#include <stdio.h>

int main()
{
	int jari;
	float volume;
	
	printf("PROGRAM MENGHITUNG VOLUME BOLA\n\n");
	printf("Input jari-jari bola (cm) : ");
	scanf("%f", &jari);
	
	//hitung volume
	volume = 4/3 * PHI * jari * jari * jari;
	
	printf("\nVolume bola dg jari jari %.2f cm adalah %.3f cm3.", jari, volume); 
	return 0;
}
