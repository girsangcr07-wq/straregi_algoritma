#include <stdio.h>

int main()
{
    // Array data sesuai modul Topik 5 (Ganti jika data kelompok Anda berbeda)
    int data[20] = {15,18,16,22,25,19,12,13,8,21,
                    20,3,24,26,17,14,2,23,5,4};
    
    int n = 8;        // Ubah secara bergantian untuk 5 nilai n kelompok Anda
    int target = 33;  // Target penjumlahan sesuai kelompok Anda
    int i, j, cocok = 0, periksa = 0;

    printf("--- HASIL SOAL 2 (n = %d, Target = %d) ---\n", n, target);

    // Brute Force dengan Nested Loop: memeriksa seluruh kemungkinan kombinasi pasangan i dan j
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            periksa++; // Menghitung total looping pengecekan pasangan
            if (data[i] + data[j] == target)
            {
                cocok++;
                // Cetak pasangan dengan format angka kecil + besar
                if (data[i] < data[j])
                    printf("  Pasangan ketemu: %d+%d\n", data[i], data[j]);
                else
                    printf("  Pasangan ketemu: %d+%d\n", data[j], data[i]);
            }
        }
    }

    printf("Total Pasangan Cocok : %i\n", cocok);
    printf("Total Looping (Pasangan Diperiksa) : %i\n", periksa);

    return 0;
}