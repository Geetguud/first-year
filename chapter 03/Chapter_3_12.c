/*
	Tanggal:
		Pembuatan: 19 September 2021
		Modifikasi 1: 20 September 2021
*/

/*
	Problem:
	User ingin mengetahui kecepatan suara pada udara dengan temperatur tertentu.
	Diperlukan sebuah program untuk melakukan perhitungan kecepatan tersebut.
*/

/*
	Analysis:
	Diperlukan data berupa temperatur pada udara.
	Penghitungan dapat dilakukan menggunakan formula yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
			double temperature		// temperatur pada udara

		Problem Outputs:
			double speed			// kecepatan suara pada udara dengan suhu tertentu

		Program Variables:
			-

		Relevant Formulas:
			kecepatan suara =  1086 x akar kuadrat(((5 x suhu) + 297)/ 247)
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data temperatur udara
	2. Menghitung kecepatan suara
	3. Menampilkan hasil perhitungan
*/

/* IMPLEMENTATION */
/*
	Didefinisikan sebuah fungsi untuk menampilkan instruksi kepada user:
	void instruction() { printf("Masukkan temperatur udara (dalam satuan fahrenheit) > "); }

	Untuk mendapatkan data temperatur, diperlukan input dari user dengan statement berikut:
	instruction();
	scanf("%lf", &temperature);

	Kemudian hitung kecepatan suara:
	speed = 1086 * sqrt(((5 * temperature) + 297 )/ 247);

	Setelah didapatkan nilai kecepatan, hasil ditampilkan kepada user:
	printf("Kecepatan suara pada udara dengan temperatur %lf adalah %lf\n", temperature, speed);
*/

#include <stdio.h>
#include <math.h>

// pendefinisian fungsi untuk menampilkan instruksi kepada user
void instruction() { printf("Masukkan temperatur udara (dalam satuan fahrenheit) > "); }

int main() {
	double temperature; // input - temperatur udara
	double speed; // output - kecepatan suara

	// memanggil fungsi untuk menampilkan instruksi kepada user
	instruction();

	// user memasukkan data temperatur udara
	scanf("%lf", &temperature);

	// menghitung kecepatan suara
	speed = 1086 * sqrt(((5 * temperature) + 297 )/ 247);

	// hasil perhitungan ditampilkan kepada user
	printf("Kecepatan suara pada udara dengan temperatur %lf adalah %lf\n", temperature, speed);

	
	return 0;
}