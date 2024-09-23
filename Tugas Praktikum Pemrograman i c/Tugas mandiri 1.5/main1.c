#include <stdio.h>

int main() {
    // Declare the numbers and the result
    float panjang = 10.0; // First number
    float lebar = 7.0;  // Second number
    float luas;    // Variable to hold the result
    
    
    //Show what's going on
    printf("Panjang: %.2f cm\n",panjang);
    printf("Lebar: %.2f cm\n", lebar);
    

    // Perform the multiplication
    luas = panjang * lebar;

    // Display the result
    printf("Luas persegi panjang adalah : %.2f cm2\n", luas);
   

    return 0;
}
