/*
	Tanggal:
		Pembuatan: 24 September 2021
        Modifikasi 1: 26 September 2021
        Modifikasi 2: 27 September 2021
*/

/*
	Problem:
    Diperlukan sebuah program untuk menghitung harga akhir pembelian setelah dikenai tarif pajak.
    Selain itu, program tersebut perlu memberikan diskon jika pembeli merupakan seorang pelajar.
*/

/*
	Analysis:
    Diperlukan data berupa total pembelian serta apakah pembeli termasuk pelajar.
    Penghitungan harga akhir dilakukan dengan menambahkan tarif pajak dan diskon (jika ada).
*/

/*
	Data Requirements:

		Problem Inputs:
        double total            // data total pembelian
        char yesno              // data apakah pembeli termasuk pelajar

		Problem Outputs:
        double discounts        // jumlah diskon
        double discounted       // harga setelah diskon
        double tax              // tarif pajak pembelian
        double end              // harga akhir setelah diskon dan pajak

		Program Variables:
        -

		Relevant Formulas:
        diskon = persentase diskon x harga awal
        tarif pajak = persentase pajak x harga setelah didiskon (atau harga awal jika tanpa diskon)
*/

/* DESIGN */
/*
	Initial Algorithm:
    1. Memasukkan data total pembelian
    2. Menghitung harga setelah diskon (jika ada)
    3. Menghitung harga setelah pajak
    4. Menampilkan harga akhir serta detail lainnya
*/

/* IMPLEMENTATION */
/*
    Untuk mendapatkan data total pembelian, diperlukan input dari user:
    printf("Masukkan total harga pembelian (USD) > ");
    scanf("%lf", &total);

    Kemudian untuk mendapatkan data apakah pembeli termasuk pelajar:
    printf("Apakah anda seorang pelajar? (Y / N) > ");
    scanf(" %c", &yesno);

    Jika pembeli termasuk pelajar:
    if (yesno == 'Y' || yesno == 'y') {

        Menghitung diskon:
        discounts = total / 5;
        discounted = total - discounts;

        Menghitung pajak:
        tax = discounted / 20;
        end = discounted + tax;

        Menampilkan harga akhir serta detail lainnya:
        printf("\nHarga pembelian\t\t\t$%.2lf\n", total);
        printf("Diskon pelajar (20%%)\t\t %.2lf\n", discounts);
        printf("Harga setelah diskon\t\t %.2lf\n", discounted);
        printf("Pajak pembelian (5%%)\t\t %.2lf\n", tax);
        printf("Total\t\t\t\t$%.2lf\n", end);
    }

    Jika pembeli tidak termasuk pelajar:
    else {

        Langsung menghitung pajak:
        tax = total / 20;
        end = total + tax;

        Menampilkan harga akhir serta detail lainnya:
        printf("\nHarga pembelian\t\t\t$%.2lf\n", total);
        printf("Pajak pembelian (5%%)\t\t %.2lf\n", tax);
        printf("Total\t\t\t\t$%.2lf\n", end);
    }
*/

#include <stdio.h>

int main() {
    double total; // input - total pembelian
    char yesno; // input - data keanggotaan pelajar
    double discounts; // output - jumlah diskon
    double discounted; // output - harga setelah diskon
    double tax; // output - tarif pajak
    double end; // output - harga akhir

    // user memasukkan data total pembelian
    printf("Masukkan total harga pembelian (USD) > ");
    scanf("%lf", &total);

    // user memasukkan data keanggotaan pelajar
    printf("Apakah anda seorang pelajar? (Y / N) > ");
    scanf(" %c", &yesno);

    // percabangan berdasarkan data keanggotaan pelajar
    if (yesno == 'Y' || yesno == 'y') {

        // menghitung diskon
        discounts = total / 5;
        discounted = total - discounts;

        // menghitung pajak
        tax = discounted / 20;
        end = discounted + tax;

        // hasil perhitungan ditampilkan kepada user
        printf("\nHarga pembelian\t\t\t$%.2lf\n", total);
        printf("Diskon pelajar (20%%)\t\t %.2lf\n", discounts);
        printf("Harga setelah diskon\t\t %.2lf\n", discounted);
        printf("Pajak pembelian (5%%)\t\t %.2lf\n", tax);
        printf("Total\t\t\t\t$%.2lf\n", end);
    } else {

        // langsung menghitung pajak
        tax = total / 20;
        end = total + tax;

        // hasil perhitungan ditampilkan kepada user
        printf("\nHarga pembelian\t\t\t$%.2lf\n", total);
        printf("Pajak pembelian (5%%)\t\t %.2lf\n", tax);
        printf("Total\t\t\t\t$%.2lf\n", end);
    }

    
    return 0;
}