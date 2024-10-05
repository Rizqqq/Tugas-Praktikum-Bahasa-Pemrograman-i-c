#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Buatlah sebuah program c untuk menginput nilai bilangan bulat yang menyatakan suhu dalam  satuan celcius. Selanjutnya hitung nilai sudut dala derajat farenhit dan reamur

int main() 
{
	int c,f,r;
	
	printf("Inputkan nilai suhu dalam celcius: ");
	scanf("%d", &c);
	
	//rumus c ke f dan r
	f= (9 * c) / 5 + 32;
	r= (4 * c) / 5;
	
	//output
	printf("Konversi ke dalam : ");
	printf("\nNilai suhu dalam Farenheit: %d F", f);
	printf("\nNilai suhu dalam Reamur: %d R", r);
	
	
	
	return 0;
}
