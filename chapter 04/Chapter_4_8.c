/*
	Tanggal:
		Pembuatan: 24 September 2021
        Modifikasi 1: 27 September 2021
*/

/*
	Problem:
    Diperlukan sebuah program yang berinteraksi dengan user seperti
    apa yang tertera pada diagram.
*/

/*
	Analysis:
    Diperlukan data berupa nomor Free Service dan jumlah Miles.
    Data tersebut digunakan untuk menentukan pesan terhadap user.
*/

/*
	Data Requirements:

		Problem Inputs:
        integer fsnumber        // nomor Free Service
        integer miles           // jumlah Miles

		Problem Outputs:
        -

		Program Variables:
        -

		Relevant Formulas:
        -
*/

/* DESIGN */
/*
	Initial Algorithm:
    1. Memasukkan data nomor Free Service
    2. Memasukkan data jumlah Miles
    3. Menampilkan pesan yang sesuai
*/

/* IMPLEMENTATION */
/*
    Untuk mendapatkan data nomor Free Service, diperlukan input dari user:
    printf("(1) First Free Service\n(2) Second Free Service\n");
    printf("Enter the Free Service number >> ");
    scanf("%d", &fsnumber);

    Untuk mendapatkan data jumlah Miles, diperlukan input dari user:
    printf("Enter the number of Miles >> ");
    scanf("%d", &miles);

    Jika nomor Free Service adalah 1 dan jumlah Miles memenuhi range (1500 < miles <= 3000):
    if (fsnumber == 1) {
        if (1500 < miles && miles <= 3000) {

            Maka pesan berikut ditampilkan kepada user:
            printf("Vehicle must be serviced.\n");
        }
    }

    Jika nomor Free Service adalah 2 dan jumlah Miles memenuhi range (3001 < miles <= 4500):
    else if (fsnumber == 2) {
        if (3001 < miles && miles <= 4500) {

            Maka pesan berikut ditampilkan kepada user:
            printf("Vehicle must be serviced.\n");
        }
    }
*/

#include <stdio.h>

int main() {
    int fsnumber; // input - nomor Free Service
    int miles; // input - jumlah Miles

    // user memasukkan data nomor Free Service
    printf("(1) First Free Service\n(2) Second Free Service\n");
    printf("Enter the Free Service number >> ");
    scanf("%d", &fsnumber);

    // user memasukkan data jumlah Miles
    printf("Enter the number of Miles >> ");
    scanf("%d", &miles);

    // percabangan berdasarkan data nomor Free Service
    if (fsnumber == 1) {

        // persyaratan range untuk jumlah Miles
        if (1500 < miles && miles <= 3000) {

            // pesan ditampilkan kepada user
            printf("Vehicle must be serviced.\n");
        }
    } else if (fsnumber == 2) {

        // persyaratan range untuk jumlah Miles
        if (3001 < miles && miles <= 4500) {

            // pesan ditampilkan kepada user
            printf("Vehicle must be serviced.\n");
        }
    }
    
    return 0;
}