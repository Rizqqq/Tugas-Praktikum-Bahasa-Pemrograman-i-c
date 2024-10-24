#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int n;
	
	printf("Masukan N: ");
	scanf("%d", &n);
	
	if( n > 50){
		n = n - 25;
	} else {
		n = n + 10;
	}
	
	printf("Nilai N: %d\n", n);
	
	return 0;
}