//program bulan

#include<stdio.h>

int main(){
    int nomer;
    printf("Masukan nomer bulan: ");
    scanf("%d",&nomer);
    if (nomer == 1)
    {
        printf("Januari");
    }
    else if (nomer == 2)
    {
        printf("Februari");
    }
    else if (nomer == 3)
    {
        printf("Maret");
    }
    else if (nomer == 4)
    {
        printf("April");
    }
    else if (nomer == 5)
    {
        printf("Mei");
    }
    else if (nomer == 6)
    {
        printf("Juni");
    }
    else if (nomer == 7)
    {
        printf("Juli");
    }
    else if (nomer == 8)
    {
        printf("Agustus");
    }
    else if (nomer == 9)
    {
        printf("September");
    }
    else if (nomer == 10)
    {
        printf("Oktober");
    }
    else if (nomer == 11)
    {
        printf("November");
    }
    else if (nomer == 12)
    {
        printf("Desember");
    }
    else{
        printf("Tidak ada bulan yang sesuai");
    }
    
    
}