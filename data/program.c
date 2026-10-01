#include <stdio.h>

int main(){

    printf("=========================\n");
    printf("   PROGRAM INFORMATION   \n");
    printf("=========================\n\n");

    printf("File yang dijalankan : %s\n", __FILE__);
    printf("Dibuat tanggal       : %s\n", __DATE__);
    printf("Dijalankan waktu     : %s\n", __TIME__);
    printf("Kode ini berada di   : baris %d\n", __LINE__);
    printf("Standar C aktif      : %d\n", __STDC__);

    return 0;
}