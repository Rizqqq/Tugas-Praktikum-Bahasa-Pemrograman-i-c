#include <stdio.h>
#include <stdlib.h>
void print_centered(const char *text, int width) {
    int len = strlen(text);
    int padding = (width - len) / 2; // Calculate padding
    if (padding > 0) {
        for (int i = 0; i < padding; i++) {
            printf(" "); // Print left padding
        }
    }
    printf("%s\n", text); // Print the text
}


int main () 
{
	const int console_width = 125;
	
	print_centered ("Data Mahasiswa STT MANDALA\n", console_width);
	printf ("Nama    : Rizqi Maulana Nugraha\n");
	printf ("NIM     : 2441082\n");
	printf ("Jurusan : Teknik Informatika\n");
	
	return 0;
	
	
}