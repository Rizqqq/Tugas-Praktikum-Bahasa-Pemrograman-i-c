#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,c;
	
	
	
	printf("Masukan jam masuk : ");
	scanf("%d", &a);
	printf("Masukan jam keluar: ");
	scanf("%d", &b);
	//rumus
	c = b - a;
	
	//output
	printf("Lama bekerja : %i Jam", c);
	
	return 0;
}