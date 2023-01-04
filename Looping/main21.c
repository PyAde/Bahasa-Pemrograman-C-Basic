//Program luas permukaan kubus

#include<stdio.h>
int main(){
    int n, luas, luasPermukaan;
    scanf("%d", &n);
    luas = n;
    luasPermukaan = luas * luas * 6;
    printf("%d\n", luasPermukaan);
    return 0;
}

