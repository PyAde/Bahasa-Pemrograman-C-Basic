//Program timbangan
#include<stdio.h>

int main(){
    int kecil, sedang, besar;
    float berat;
    kecil=0;
    sedang=0;
    besar=0;

    scanf("%f", &berat);
    while (berat != -1)
    {
        if (berat<50)
        {
            kecil++;
        }
        else if (berat < 200 && berat>50)
        {
            sedang++;
        }
        else{
            besar++;
        }
        scanf("%f", &berat);
    }
    printf("%.d\n%.d\n%.d\n",kecil,sedang,besar);
    return 0;

}