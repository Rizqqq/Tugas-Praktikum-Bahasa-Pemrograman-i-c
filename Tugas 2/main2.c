#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float alas = 4.0;
	float tinggi = 5.0;
	float sisi_miring;
	
	sisi_miring = sqrt ((alas*alas) + (tinggi*tinggi));
	
	printf ("Sebuah segitiga siku siku dengan panjang dengan alas %.2f cm dan tinggi %.2f cm memiliki sisi miring %.2f cm\n" , alas, tinggi, sisi_miring);
	
	
	
	
	
	return 0;
}
