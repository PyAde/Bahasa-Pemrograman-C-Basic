//Mengecek Bilangan prima
#include<stdio.h>
#include<math.h>
int prima(int bilangan){
    int akarbilangan = sqrt(bilangan);
    if(bilangan == 1) return 0;
    for (int pembagi  = 2; pembagi < akarbilangan + 1; pembagi++){
        if (bilangan % pembagi == 0) return 0;
    }
    return 1;
}
int main(){
    int bilangan;
    scanf("%d", &bilangan);

    if (prima(bilangan))
    {
        printf("Bilangan Prima\n");
    }
    else{
        printf("Bilangan bukan prima");
    }
    return 0;
}