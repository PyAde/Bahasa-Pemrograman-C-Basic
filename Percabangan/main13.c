//Cek bilangan positif dan negaitf
#include<stdio.h>
int main()
{
    int angka;
    printf("Masukan angka: ");
    scanf("%d",&angka);
    if(angka>0)
        printf("%d Merupakan bilangan bulat Positif",angka);
    else if(angka<0)
        printf("%d Merupakan bilangan bulat Negatif",angka);
    return 0;
}