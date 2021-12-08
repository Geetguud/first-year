/*
	Tanggal:
		Pembuatan: 19 September 2021
		Modifikasi 1: 20 September 2021
*/

/*
	Problem:
	User ingin memperkirakan nilai faktorial dari sebuah bilangan.
	Diperlukan sebuah program yang dapat menghitung perkiraan nilai tersebut.
*/

/*
	Analysis:
	Diperlukan data berupa bilangan n yang akan digunakan.
	Perkiraan nilai faktorial bilangan n dapat dihitung dengan formula dari R. W. Gosper.
*/

/*
	Data Requirements:

		Problem Inputs:
			integer n				// bilangan bulat positif n

		Problem Outputs:
			double n_factorial		// perkiraan nilai faktorial dari bilangan n

		Program Variables:
			-

		Relevant Formulas:
			Formula perkiraan nilai faktorial dari R. W. Gosper
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data bilangan n
	2. Menghitung perkiraan nilai faktorial
	3. Menampilkan perkiraan nilai faktorial
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data bilangan n, diperlukan input dari user dengan statement berikut:
	printf("Masukkan bilangan bulat positif n yang ingin digunakan > ");
    scanf("%d", &n);

	Kemudian hitung perkiraan nilai faktorial bilangan n:
	n_factorial = pow(n, n) * exp(-n) * sqrt(((2 * n) + (1 / 3)) * M_PI);

	Setelah didapatkan perkiraan, hasil ditampilkan kepada user:
	printf("%d! memiliki nilai sekitar %lf\n", n, n_factorial);
*/

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    int n;  // input - bilangan n
    double n_factorial; // output - perkiraan nilai faktorial

	// user memasukkan data jumlah bilangan n
    printf("Masukkan bilangan bulat positif n yang ingin digunakan > ");
    scanf("%d", &n);

	// menghitung perkiraan nilai faktorial bilangan n
    n_factorial = pow(n, n) * exp(-n) * sqrt(((2 * n) + (1 / 3)) * M_PI);

	// hasil perhitungan ditampilkan kepada user
    printf("%d! memiliki nilai sekitar %lf\n", n, n_factorial);

    
    return 0;
}