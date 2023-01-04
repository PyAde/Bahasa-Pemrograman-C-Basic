// Program menghitung mundur

#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        printf("%d",n);
        if (n!=1)printf(" ");
        n=n-1;
    }
    return 0;
}