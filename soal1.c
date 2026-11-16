#include <stdio.h>

int main()
{
    // Array data sesuai modul Topik 5 (Ganti jika data kelompok Anda berbeda)
    int data[20] = {15,18,16,22,25,19,12,13,8,21,
                    20,3,24,26,17,14,2,23,5,4};
    
    int n = 8; // Ubah secara bergantian untuk 5 nilai n kelompok Anda
    int i, maksimum, perbandingan = 0;

    // Brute Force: asumsikan elemen pertama adalah maksimum awal
    maksimum = data[0];

    // Melakukan perbandingan elemen satu per satu secara berurutan
    for (i = 1; i < n; i++)
    {
        perbandingan++;
        if (data[i] > maksimum)
        {
            maksimum = data[i];
        }
    }

    printf("--- HASIL SOAL 1 (n = %d) ---\n", n);
    printf("Nilai Maksimum : %i\n", maksimum);
    printf("Jumlah Looping (Perbandingan) : %i\n", perbandingan);

    return 0;
}