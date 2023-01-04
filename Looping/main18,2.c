// Mencari bilangan terbesar
#include <stdio.h>

int main(){
    int n, besar;
    besar =0;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        if (besar<a)
        {
            besar = a;
        }
    }
    printf("%.d\n",besar);
    return 0;
}