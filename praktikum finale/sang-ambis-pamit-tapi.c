#include <stdio.h>

struct item {
    char kode[20], nama[20];
    long harga;
    long long totalsofar;
    int leastsofar, mostsofar;
} barang[10001];

void printdis() { printf("====================================="); }
void newspace() { printf("\n"); }

int main() {
    int n, x;
    long least, most;
    scanf("%d", &n);

    scanf("%s", barang[0].kode);
    scanf("%s", barang[0].nama);
    scanf("%ld", &barang[0].harga);
    barang[0].totalsofar = barang[0].harga;
    barang[0].leastsofar = 0;
    barang[0].mostsofar = 0;
    least = barang[0].harga;
    most = barang[0].harga;

    for (int i = 1; i < n; i++) {
        scanf("%s", barang[i].kode);
        scanf("%s", barang[i].nama);
        scanf("%ld", &barang[i].harga);
        barang[i].totalsofar = barang[i - 1].totalsofar + barang[i].harga ;

        if (least > barang[i].harga) {
            least = barang[i].harga;
            barang[i].leastsofar = i;
        } else barang[i].leastsofar = barang[i - 1].leastsofar;

        if (most < barang[i].harga) {
            most = barang[i].harga;
            barang[i].mostsofar = i;
        } else barang[i].mostsofar = barang[i - 1].mostsofar;
    }

    printdis();

    for (int i = 0; i < n; i++) {
        x = 0;
        scanf("%d", &x);
        if (x == 0) break;

        int leastprint = barang[x - 1].leastsofar;
        int mostprint = barang[x - 1].mostsofar;

        newspace();
        newspace();
        printf("No. Transaksi    : %d\n", (i + 1));
        printf("Total item       : %d\n", x);
        printf("Item termurah    : %s %s\n", barang[leastprint].kode, barang[leastprint].nama);
        printf("Item termahal    : %s %s\n", barang[mostprint].kode, barang[mostprint].nama);
        printf("Total pembayaran : %lld\n", barang[x - 1].totalsofar);
        newspace();
        printdis();
    }

    return 0;
}