#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float diameter = 15.0;
	float jari_jari = diameter / 2.0;
	float volume;
	
	volume = (4.0/3.0) * PI * (jari_jari*jari_jari*jari_jari);
	
	printf ("Sebuah bola dengan diameter %.2f cm memiliki volume sebesar %.2f cm3", diameter, volume);
	
	
	return 0;
}
