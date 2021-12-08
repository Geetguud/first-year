#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);

    printf("Tanggal : %d ", day);

    switch (month) {
        case 1:
        printf("Januari");
        break;

        case 2:
        printf("Februari");
        break;

        case 3:
        printf("Maret");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("Mei");
        break;

        case 6:
        printf("Juni");
        break;

        case 7:
        printf("Juli");
        break;

        case 8:
        printf("Agustus");
        break;

        case 9:
        printf("September");
        break;

        case 10:
        printf("Oktober");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("Desember");
        break;
    }

    printf(" %d\nHari : ", year);
    
    int F = (day += month < 3 ? year-- : year - 2, 23*month/9 + day + 4 + year/4- year/100 + year/400) % 7;
    
    switch (F) {
        case 0:
        printf("Minggu");
        break;

        case 1:
        printf("Senin");
        break;

        case 2:
        printf("Selasa");
        break;

        case 3:
        printf("Rabu");
        break;

        case 4:
        printf("Kamis");
        break;

        case 5:
        printf("Jumat");
        break;

        case 6:
        printf("Sabtu");
        break;
    }

    return 0;
}
