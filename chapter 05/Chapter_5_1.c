/*
	Tanggal:
		Pembuatan: 1 Oktober 2021
		Modifikasi 1: 3 Oktober 2021
*/

/*
	Problem:
	Dibutuhkan program untuk menentukan apakah sebuah bilangan bulat dapat habis dibagi dengan 9.
*/

/*
	Analysis:
	Diperlukan data berupa bilangan yang diinginkan.
	Penentuan keterbagian oleh 9 dilakukan dengan cara yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
		integer n			// bilangan n

		Problem Outputs:
		integer temp		// digit pada bilangan n

		Program Variables:
		integer total		// hasil penjumlahan digit bilangan n

		Relevant Formulas:
		Bilangan dapat habis dibagi 9 jika jumlah seluruh digitnya habis dibagi 9
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan bilangan n
	2. Mengekstrak digit-digit pada bilangan
	3. Menampilkan barisan digit pada bilangan n, diurutkan dari kanan
	4. Menentukan apakah bilangan n dapat habis dibagi 9
	5. Menampilkan hasil
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data bilangan n, user memasukkan input dengan statement berikut:
	printf("Masukkan bilangan n > ");
	scanf("%d", &n);

	Menampilkan kepada user tentang barisan digit bilangan n:
	printf("Digit (dari kanan) dalam bilangan n :\n");

	Mengekstrak digit-digit pada bilangan n serta menampilkan barisannya:
	while (n) {
		temp = n % 10;
		printf("%d ", temp);
		total = total + temp;
		n = n / 10;
	}

	Menentukan apakah bilangan n dapat habis dibagi 9 dan menampilkan hasilnnya:
	if (total % 9 == 0) {
		printf("\nBilangan n dapat habis jika dibagi oleh 9\n");
	} else {
		printf("\nBilangan n tidak habis jika dibagi oleh 9\n");
	}
*/

#include <stdio.h>

int main() {
	int n; // input - bilangan n
	int temp; // output - digit pada bilangan n
	int total = 0; // variabel program - hasil penjumlahan dari digit bilangan n

	// user memasukkan data bilangan n
	printf("Masukkan bilangan n > ");
	scanf("%d", &n);

	// menampilkan keterangan barisan digit bilangan n
	printf("Digit (dari kanan) dalam bilangan n :\n");
	
	// loop untuk mengoperasikan bilangan n
	while (n) {
		// mengekstrak digit paling kanan bilangan n
		temp = n % 10;

		// menampilkan digit tersebut
		printf("%d ", temp);

		// menjumlahkan digit tersebut kedalam total
		total = total + temp;

		// menghapus digit paling kanan bilangan n
		n = n / 10;
	}

	// menentukan keterbagian bilangan n dan menampilkan hasil kepada user
	if (total % 9 == 0) {
		printf("\nBilangan n dapat habis jika dibagi oleh 9\n");
	} else {
		printf("\nBilangan n tidak habis jika dibagi oleh 9\n");
	}

    
    return 0;
}