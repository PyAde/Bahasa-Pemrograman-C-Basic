#include <stdio.h>
// Memperbaiki program
int main (){
    float ak = 3.14;
    float nilai, keliling, luas;
    printf("Masukan nilai dari jari-jari: ");
    scanf("%f", &nilai);
    luas = ak * nilai * nilai;
    keliling = 2 * ak * nilai ;
    printf("Luas lingkaran: %.2f\n",luas);
    printf("Keliling luas lingkaran: %.1f",keliling);
    return 0;
}