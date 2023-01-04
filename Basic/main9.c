#include<stdio.h>

int main (){
    int a,b,d;
    float c;
    printf("Masukan angka pembagi pertama: ");
    scanf("%d", &a);
    printf("Masukan angka pembagi kedua: ");
    scanf("%d", &b);
    c = a / b ;
    printf("Hasil pembagian =  %.0f\n",c);
    d = a%b ;
    printf("Hasil  pembagian 2 bilangan = %d",d);
    return 0;
}