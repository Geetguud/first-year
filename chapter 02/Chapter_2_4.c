/*
	Tanggal:
		Pembuatan: 12 September 2021
		Modifikasi 1: 13 September 2021
		Modifikasi 2: 14 September 2021
*/

/*
	Problem:
	User ingin mengubah sejumlah uang dalam mata uang USD menjadi GBP.
	Dibutuhkan sebuah program konversi mata uang USD ke GBP.
*/

/*
	Analysis:
	Diperlukan data jumlah uang USD yang akan dikonversikan.
	Konversi dilakukan mengikuti kurs yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
			double dollar		// jumlah uang USD

		Problem Outputs:
			double pound			// jumlah uang setelah diubah menjadi GBP

		Program Variables:
			-

		Relevant Formulas:
			1 USD = 0.65 GBP
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data jumlah uang USD
	2. Konversi USD menjadi GBP
	3. Menampilkan hasil konversi
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data jumlah uang USD, diperlukan input dari user dengan statement berikut:
	printf("Masukkkan jumlah uang US dollars yang akan dikonversi menjadi British pounds > ");
	scanf("%lf", &dollar);

	Kemudian jumlah uang USD dikonversi menjadi GBP:
	pound = dollar * 0.65;

	Terakhir, tampilkan jumlah uang yang telah dikonversikan:
	printf("%lf US dollars telah dikonversi menjadi %lf British pounds", dollar, pound);
*/

#include <stdio.h>

int main()
{
	double dollar; // input - jumlah uang USD
	double pound; // output - hasil konversi USD ke GBP

	// user memasukkan jumlah uang USD
	printf("Masukkkan jumlah uang US dollars yang akan dikonversi menjadi British pounds > ");
	scanf("%lf", &dollar);

	// konversi USD ke GBP
	pound = dollar * 0.65;

	// menampilkan hasil konversi kepada user
	printf("%lf US dollars telah dikonversi menjadi %lf British pounds\n", dollar, pound);

	
	return 0;
}