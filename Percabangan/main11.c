#include <stdio.h>

int main (){
    int bilangan;
    scanf("%d", &bilangan);
    if (bilangan % 2 == 0)
            printf("Bilangan Genap \n");
    else
        printf("Bilangan Ganjil \n");
    return 0;
}