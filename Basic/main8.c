#include<stdio.h>

int main (){
    int a,b;
    float c;
    printf("Masukan luas tanah pertama Pak Algor: ");
    scanf("%d", &a);
    printf("Masukan luas tanah kedua Pak Algor: ");
    scanf("%d", &b);
    c = a * b /2;
    printf("Luas tanah pak Algor adalah %.2f",c);
    scanf("%f", &c);
    return 0;
}