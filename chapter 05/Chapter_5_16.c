/*
	Tanggal:
		Pembuatan: 1 Oktober 2021
		Modifikasi 1: 5 Oktober 2021
*/

/*
	Problem:
	Dibutuhkan program untuk mencari akar ke n dari sebuah bilangan menggunakan persamaan Newton's Method.
*/

/*
	Analysis:
	Diperlukan data berupa bilangan yang diinginkan serta bilangan n.
*/

/*
	Data Requirements:

		Problem Inputs:
		double c		// bilangan yang akan diakar
		double n		// jumlah pangkat akar

		Problem Outputs:
		double x		// hasil perkiraan akar bilangan

		Program Variables:
		-

		Relevant Formulas:
		-
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data bilangan c dan n
	2. Melakukan komputasi perkiraan
	3. Menampilkan hasil perhitungan
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data, user memasukkan bilangan c dan n.
	Kemudian loop dilakukan untuk memperkiraan nilai akar ke n dari bilangan c.
	Setelah selesai, hasil perhitungan ditampilkan kepada user.
*/

#include <stdio.h>
#include <math.h>

int main() {
	double c; // input - bilangan yang diakar
	double n; // input - pangkat akar
	double x[100]; // output - hasil perkiraan

	// menampilkan instruksi kepada user
	printf("This is a program to approximate the nth root of a number.\n");

	// user memasukkan data bilangan c dan n
	printf("Enter a number > ");
	scanf("%lf", &c);

	printf("Enter the number for n > ");
	scanf("%lf", &n);
	
	// inisialisasi perkiraan akar
	x[0] = c / 2.0;

	// loop untuk memperkirakan nilai akar
	int i = 0;
	while (i < 100) {

		// cek nilai akar
		if (pow(x[i], n) == c) { break; }

		// perhitungan menggunakan Newton's Method
		x[i + 1] = x[i] - ((pow(x[i], n) - c) / (n * pow(x[i], n - 1)));

		i++;
	}

	// menampilkan hasil perhitungan kepada user
	printf("\nThe %.0lfth root of %lf is %.6lf\n", n, c, x[i]);

    
    return 0;
}