/*
	Tanggal:
		    Pembuatan: 18 Oktober 2021
*/

/*
	Problem:
    Untuk memastikan transmisi data yang andal, digunakan checksum untuk setiap pesan.
    Dibutuhkan program untuk mengkomputasi checksum dari sebuah pesan.
*/

/*
	Analysis:
    Checksum dari setiap pesan dapat dikomputasi sebagai berikut:
        Jumlahkan kode integer dari setiap karakter dalam pesan,
        Tentukan sisa dari jumlah tersebut dibagi dengan 64,
        Tambahkan kode integer untuk karakter spasi ke jumlah sisa.
*/

/*
	Data Requirements:

		Problem Inputs:
        char message            // input pesan

		Problem Outputs:
        int checksum            // checksum dari pesan

		Program Variables:
        char newline            // variabel untuk membuang karakter newline
        int length              // panjang dari pesan

		Relevant Formulas:
        integer checksum = (jumlah seluruh kode integer % 64) + karakter spasi
*/

/* DESIGN */
/*
	Initial Algorithm:
    1. Memulai loop untuk memasukkan pesan:
        1. User memasukkan pesan.
        2. Komputasi checksum dari pesan yang dimasukkan.
        3. Menampilkan checksum dalam bentuk karakter.
    2. Jika pesan tidak diakhiri dengan titik, pesan ditolak.
    3. Loop berhenti jika pesan hanya berupa titik.
*/

/* IMPLEMENTATION */
/*
    Didefinisikan loop tanpa diketahui jumlah perulangan:
    while (1)

    Dilakukan reset variabel pada awal loop:
    checksum = 0;

    Untuk mendapatkan data isi pesan, user melakukan input dengan statement:
    printf("Enter the message > ");
    scanf("%[^\n]", message);

    Jika pesan hanya berupa titik, program dihentikan
    if (message[0] == '.') {
        printf("Program terminated.\n");
        break;
    }

    Panjang pesan dihitung dengan:
    length = strlen(message);

    Jika pesan tidak diakhiri dengan titik, pesan ditolak:
    if (message[length - 1] != '.') {
            printf("Please end the message with a period.\n");
            continue;
    }

    Jika input sudah benar, checksum dihitung:
        Menjumlahkan kode integer dari seluruh karakter pada pesan:
        for (int i = 0; i < length; i++) { checksum += message[i]; }
        
        Menghitung sisa jika dibagi 64 dan menambahkan integer karakter spasi:
        checksum = (checksum % 64) + ' ';
        
        Menampilkan checksum dalam bentuk karakter:
        printf("Checksum: %c\n\n", checksum);
*/

#include <stdio.h>
#include <string.h>

int main() {
    char message[9999]; // input - pesan
    char newline; // program variable - char newline
    int checksum; // output - checksum
    int length; // program variable - panjang pesan

    // menampilkan instruksi kepada user
    printf("This is a program to compute the checksum of a message.\n");
    printf("Enter each message in one line and end it with a period.\n");
    printf("To stop computing, enter a message with only a period.\n\n");

    // memulai loop untuk memasukkan pesan
    while (1) {
        // reset variabel
        checksum = 0;

        // user memasukkan pesan
        printf("Enter the message > ");
        scanf("%[^\n]", message);

        // jika pesan hanya berupa titik, program dihentikan
        if (strlen(message) == 1 && message[0] == '.') {
            printf("Program terminated.\n");
            break;
        }

        // membuang karakter newline dari input
        scanf("%c", &newline);

        // menghitung panjang pesan
        length = strlen(message);
        
        // menolak pesan jika tidak diakhiri dengan titik
        if (message[length - 1] != '.') {
            printf("Please end the message with a period.\n");
            continue;
        }

        // menjumlahkan kode integer dari seluruh karakter pada pesan
        for (int i = 0; i < length; i++) { checksum += message[i]; }

        // menghitung sisa jika dibagi 64 dan menambahkan integer karakter spasi
        checksum = (checksum % 64) + ' ';

        // menampilkan checksum dalam bentuk karakter
        printf("Checksum: %c\n\n", checksum);
    }

    return 0;
}