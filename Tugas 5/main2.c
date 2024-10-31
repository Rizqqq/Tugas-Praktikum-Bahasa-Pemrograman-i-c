#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, harga_setelah_diskon;

    // Menerima input dari pengguna
    printf("Kode= ");
    scanf("%d", &kode);
    printf("Jenis= ");
    scanf(" %c", &jenis); // gunakan spasi sebelum %c untuk mengatasi newline
    printf("Harga = ");
    scanf("%f", &harga);

    // Menentukan diskon berdasarkan jenis menggunakan switch case
    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis tidak valid. Silakan masukkan jenis A, B, atau C.\n");
            return 1;
    }

    // Menghitung harga setelah diskon
    harga_setelah_diskon = harga - (harga * diskon);

    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0;
}
