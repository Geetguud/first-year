/*
	Tanggal:
		Pembuatan: 12 September 2021
		Modifikasi 1: 13 September 2021
		Modifikasi 2: 14 September 2021
*/

/*
	Problem:
	Setelah aliran listrik putus selama beberapa waktu, user ingin mengetahui berapa suhu
	di dalam freezer. Ia membutuhkan program yang dapat memperkirakan suhu tersebut.
*/

/*
	Analysis:
	Diperlukan data berupa jangka waktu yang telah berlalu sejak aliran listrik putus.
	Perkiraan suhu di dalam freezer dapat dihitung dengan menggunakan persamaan yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
			integer jam				// jangka waktu dalam jam
			integer menit				// jangka waktu lebihnya menit

		Problem Outputs:
			double suhu				// estimasi suhu di dalam freezer

		Program Variables:
			double konversi_jam		// gabungan data jam dan menit

		Relevant Formulas:
			suhu = ((4 x kuadrat jangka waktu) / (jangka waktu + 2)) - 20

*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data jangka waktu dalam jam dan menit
	2. Menggabungkan data jam dan menit menjadi jam
	3. Menghitung estimasi suhu freezer
	4. Menampilkan estimasi suhu freezer
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data jangka waktu jam dan menit, diperlukan input dari user dengan statement berikut:
	printf("Masukkan jangka waktu setelah power failure dalam jam dan menit > ");
	scanf("%d%d", &jam, &menit);

	Kemudian gabungkan data jam dan menit:
	konversi_jam = jam + (menit / 60);

	Selanjutnya hitung estimasi suhu:
	suhu = (4 * konversi_jam * konversi_jam) / (konversi_jam + 2) - 20;

	Setelah didapatkan estimasi, hasil ditampilkan kepada user:
	printf("Estimation of suhu in freezer: %lf\n", suhu);
*/

#include <stdio.h>

int main()
{
	int jam; // input - jam
	int menit; // input - menit
	double konversi_jam; // variable program - gabungan jam dan menit
	double suhu; // output - estimasi suhu

	// user memasukkan data jam dan menit
	printf("Masukkan jangka waktu setelah power failure dalam jam dan menit > ");
	scanf("%d%d", &jam, &menit);

	// penggabungan data jam dan menit
	konversi_jam = jam + (menit / 60);

	// penghitungan estimasi suhu
	suhu = (4 * konversi_jam * konversi_jam) / (konversi_jam + 2) - 20;

	// hasil perhitungan ditampilkan kepada user
	printf("Estimasi suhu di dalam freezer: %lf\n", suhu);

	
	return 0;
}