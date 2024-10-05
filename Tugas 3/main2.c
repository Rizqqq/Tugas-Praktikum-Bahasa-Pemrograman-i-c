#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Tampilkan bilangan gajil atau genap

int main() 
{
	int b;
	
	printf("Masukan Bilangan Bulat Positif: ");
	scanf("%d", &b);
	
	//checkk
	
	if (b % 2 == 0) {
		printf("Genap\n");
		
	 
	} else {
		printf("Ganjil\n");
	}
	
	
	

	return 0;
}
