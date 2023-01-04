// Mengecek sisi segitiga
#include <stdio.h>

int main(){

    int a, b, c;
    int terbesar, total;
    scanf("%d,%d,%d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        terbesar = a;
    }
    else if (b >= a && b >= c)
    {
        terbesar = b;
    }
    else{
        terbesar = c;
    }
    
    total = a + b + c; // menghitung seluruh sisi segitiga
    if (terbesar < total - terbesar)
    {
        printf("Berhasil");
    }
    else{
        printf("tidak berhasil");
    }
    return 0;
}

// contoh kasus uji
// no 1, input = 2,4,8 keluaran = tidak berhasil keterangan nilai c yang terbesar
// no 2, input= 9, 11, 5 keluaran = berhasil keterangan karna total lebih besar
