//Cek bilangan bilangan
#include<stdio.h>
int main()
{
    int angka;
    printf("Masukan angka: ");
    scanf("%d",&angka);
    if(angka>0)
        printf("%d Merupakan bilangan Positif",angka);
    else if(angka<0)
        printf("%d Merupakan bilangan Negatif",angka);
    return 0;
}