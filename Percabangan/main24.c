// Kalender

#include<stdio.h>

int cekkabisat(int tahun){
    if ((tahun % 4 == 0) && (tahun % 100 != 0) && (tahun % 400 == 0))
    return 1;
    else
    return 0;
    
}

int cektanggal(int hari, int bulan, int tahun ){
    //Cek jangkauan
    if (tahun < 0)
    {
        return 0;
    }
    if (bulan < 1 || bulan > 12)
    {
        return 0;
    }
    if (hari < 1 || hari > 31)
    {
        return 0;
    }
    // Cek validitas
    if (bulan == 2)
    {
        if (cekkabisat(tahun))
        {
            if (hari <= 29)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        
    }if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)
    {
        if (hari <= 30)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    int hari, bulan, tahun;
    scanf("%d %d %d", &hari, &bulan, &tahun);
    if (cektanggal(hari, bulan, tahun))
    {
        printf("Tanggal Berhasil\n");
    }
    else{
        printf("Tanggal tidak Berhasil\n");
    }
    return 0;
}
