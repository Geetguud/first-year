/*
	Tanggal:
		Pembuatan: 19 September 2021
		Modifikasi 1: 20 September 2021
		Modifikasi 2: 21 September 2021
*/

/*
	Problem:
	User ingin mengetahui populasi Gotham City pada suatu tahun.
	Diperlukan sebuah program untuk memperkirakan populasi kota tersebut.
*/

/*
	Analysis:
	Diperlukan data berupa tahun yang diinginkan.
	Penghitungan dilakukan dengan formula yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
			integer year		// tahun yang diinginkan

		Problem Outputs:
			-

		Program Variables:
			-

		Relevant Formulas:
			populasi dalam ribuan = 52,966 + (2,184 x selisih tahun)
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data tahun
	2. Menghitung perkiraan populasi
	3. Menampilkan hasil perhitungan
*/

/* IMPLEMENTATION */
/*
	Didefinisikan sebuah fungsi untuk melakukan perhitungan populasi:
	double population(int years) {	return (52.966 + 2.184 * years); }

	Untuk mendapatkan data tahun, diperlukan input dari user dengan statement berikut:
	printf("Masukkan angka tahun yang berada setelah 1990 > ");
	scanf("%d", &year);

	Langsung saja penghitungan dilakukan berturut dengan ditampilkannya hasil:
	printf("Prediksi populasi Gotham City pada tahun %d adalah: %lf (dalam ribuan)\n", year, population(year - 1990));
*/

#include <stdio.h>

// pendefinisan fungsi untuk menghitung perkiraan populasi
double population(int years) {	return (52.966 + 2.184 * years); }

int main() {
	int year; // input - tahun yang diinginkan

	// user memasukkan data tahun yang diinginkan
	printf("Masukkan angka tahun yang berada setelah 1990 > ");
	scanf("%d", &year);

	// penghitungan berturut dengan ditampilkannya hasil kepada user
	printf("Prediksi populasi Gotham City pada tahun %d adalah: %lf (dalam ribuan)\n", year, population(year - 1990));

	
	return 0;
}