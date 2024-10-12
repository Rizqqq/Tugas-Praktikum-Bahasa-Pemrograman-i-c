#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring;

    // Meminta input alas dan tinggi dari pengguna
    printf("Masukkan panjang alas segitiga : cm");
    scanf("%f", &alas);

    printf("Masukkan panjang tinggi segitiga : cm");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);

    return 0;
}
