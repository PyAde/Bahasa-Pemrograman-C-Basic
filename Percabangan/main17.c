// Pembagi
#include<stdio.h>

int main(){
    int pembilang, penyebut,hasil;
    scanf("%d %d", &pembilang, &penyebut);

    if (penyebut == 0)
    {
        printf("Penyebut tidak boleh sama dengan 0");
    }
    else{
        hasil = pembilang/penyebut;
        printf("hasil sama dengan %d\n", hasil);
    }
    return 0;
}