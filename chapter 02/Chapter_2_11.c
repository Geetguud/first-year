/*
	Tanggal:
		Pembuatan: 12 September 2021
		Modifikasi 1: 13 September 2021
		Modifikasi 2: 14 September 2021
*/

/*
	Problem:
	User ingin mengetahui sisi-sisi dari triple Pythagoras yang dapat
	dibentuk dari dua buah bilangan bulat m dan n. Dibutuhkan sebuah program
	yang dapat mencari triple Pythagoras tersebut.
*/

/*
	Analysis:
	Diperlukan data berupa integer m dan n, dimana bilangan m lebih besar dari n.
	Penghitungan triple Phythagoras dilakukan dengan formula yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
			integer m				// bilangan bulat m
			integer n				// bilangan bulat n

		Problem Outputs:
			double side1			// sisi 1 triple Phytagoras
			double side2			// sisi 2 triple Phytagoras
			double hypotenuse		// hipotenusa triple Phytagoras

		Program Variables:
			-

		Relevant Formulas:
			side1 = kuadrat m - kuadrat n
			side2 = 2 x m x n
			hypotenuse = kuadrat m + kuadrat n
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan bilangan m dan n
	2. Menghitung sisi-sisi pada triple Pythagoras
	3. Menampilkan hasil perhitungan
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data integer m dan n, diperlukan input dari user dengan statement berikut:
	printf("Masukkan bilangan bulat positif m dan n, dimana m lebih besar dari n > ");
	scanf("%d%d", &m, &n);

	Kemudian sisi-sisi triple Pythagoras dicari:
	side1 = (m * m) - (n * n);
	side2 = 2 * m * n;
	hypotenuse = (m * m) + (n * 2);

	Terakhir, tampilkan hasil perhitungan triple Pythagoras:
	printf("Sisi 1: %lf\nSisi 2: %lf\nHipotenusa: %lf", side1, side2, hypotenuse);
*/

#include <stdio.h>

int main()
{
	int m; // input - integer m
	int n; // input - integer n
	double side1; // output - sisi 1
	double side2; // output - sisi 2
	double hypotenuse; // output - hipotenusa

	// user memasukkan integer m dan n
	printf("Masukkan bilangan bulat positif m dan n, dimana m lebih besar dari n > ");
	scanf("%d%d", &m, &n);

	// mencari nilai sisi-sisi triple Pythagoras
	side1 = (m * m) - (n * n);
	side2 = 2 * m * n;
	hypotenuse = (m * m) + (n * 2);

	// menampilkan hasil kepada user
	printf("Sisi 1: %lf\nSisi 2: %lf\nHipotenusa: %lf\n", side1, side2, hypotenuse);

	
	return 0;
}