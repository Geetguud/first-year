/*
	Tanggal:
		Pembuatan: 1 Oktober 2021
		Modifikasi 1: 5 Oktober 2021
*/

/*
	Problem:
	Diperlukan program untuk menghitung nilai PI.
*/

/*
	Analysis:
	Diperlukan input dari user berupa jumlah perulangan.
*/

/*
	Data Requirements:

		Problem Inputs:
		integer iteration		// jumlah perulangan

		Problem Outputs:
		double pi				// nilai PI

		Program Variables:
		double temp				// storage untuk perhitungan
		double fraction			// pecahan dalam perhitungan

		Relevant Formulas:
		-
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. User memasukkan data jumlah perulangan
	2. Menghitung nilai PI
	3. Menampilkan hasil perhitungan
*/

/* IMPLEMENTATION */
/*
	User memasukkan data jumlah perulangan yang akan dilakukan.
	Perhitungan nilai PI dilakukan dalam bentuk perulangan.
	Hasil perhitungan ditampilkan kepada user.
*/

#include <stdio.h>

int main() {
	int iteration; // input - jumlah perulangan
	double temp; // program variable - storage
	double fraction = -3.0; // program variable - pecahan dalam perhitungan
	double pi; // output - nilai PI

	// user memasukkan data jumlah perulangan
	printf("Enter the number of iterations to be executed > ");
	scanf("%d", &iteration);

	// loop untuk mencari nilai PI
	for (int i = 0; i < iteration; i++) {
		temp += 1.0 / fraction;
		if (fraction < 0) {
			fraction = (-fraction) + 2.0;
		} else {
			fraction = (-fraction) - 2.0;
		}
	}

	// perhitungan akhir untuk nilai PI
	pi = 4.0 * (1.0 + temp);

	// menampilkan hasil perhitungan kepada user
	printf("Value of PI is %lf\n", pi);

    
    return 0;
}