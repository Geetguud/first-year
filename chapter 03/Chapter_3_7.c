/*
	Tanggal:
		Pembuatan: 19 September 2021
		Modifikasi 1: 20 September 2021
*/

/*
	Problem:
	User ingin menghitung harga dari sebuah rumah setelah 5 tahun berlalu.
	Diperlukan sebuah program untuk melakukan perhitungan tersebut.
*/

/*
	Analysis:
	Diperlukan data berupa harga awal rumah, harga bahan bakar tahunan, dan persentase pajak.
	Penghitungan harga akhir rumah dilakukan dengan cara yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
			integer initial			// harga awal rumah
			integer fuel			// harga bahan bakar tahunan
			double tax_rate			// persentase pajak dalam desimal

		Problem Outputs:
			integer total			// harga akhir rumah setelah 5 tahun

		Program Variables:
			integer taxes			// tarif pajak tahunan

		Relevant Formulas:
			harga akhir = harga awal + (5 x harga bahan bakar) + (5 x pajak)
			pajak = harga awal x persentase pajak
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data harga awal rumah, bahan bakar, dan persentase pajak
	2. Menghitung tarif pajak tahunan
	3. Menghitung harga akhir rumah setelah 5 tahun
	4. Menampilkan harga akhir rumah
*/

/* IMPLEMENTATION */
/*
	Didefinisikan sebuah fungsi untuk menampilkan instruksi kepada user:
	void instruction() { printf("Masukkan secara berurutan: harga awal rumah, harga bahan bakar tahunan, lalu persentase pajak (dalam desimal) > "); }

	Untuk mendapatkan data, diperlukan input dari user dengan statement berikut:
	instruction();
	scanf("%d%d%lf", &initial, &fuel, &tax_rate);

	Kemudian hitung tarif pajak tahunan:
	taxes = initial * tax_rate;

	Lalu hitung harga akhir rumah setelah 5 tahun:
	total = initial + (fuel * 5) + (taxes * 5);

	Setelah didapatkan harga akhir, hasil ditampilkan kepada user:
	printf("Harga rumah setelah 5 tahun adalah %d\n", total);
*/

#include <stdio.h>

// pendefinisan fungsi untuk menampilkan instruksi kepada user
void instruction() { printf("Masukkan secara berurutan: harga awal rumah, harga bahan bakar tahunan, lalu persentase pajak (dalam desimal) > "); }

int main() {
	int initial; // input - harga awal rumah
	int fuel; // input - harga bahan bakar
	double tax_rate; // input - persentase pajak
	int taxes; // variable program - tarif pajak
	int total; // output - harga akhir rumah

	// memanggil fungsi untuk menampilkan instruksi kepada user
	instruction();
	
	// user memasukkan data-data yang diperlukan
	scanf("%d%d%lf", &initial, &fuel, &tax_rate);

	// menghitung tarif pajak tahunan
	taxes = initial * tax_rate;

	// menghitung harga akhir rumah
	total = initial + (fuel * 5) + (taxes * 5);

	// hasil perhitungan ditampilkan kepada user
	printf("Harga rumah setelah 5 tahun adalah %d\n", total);

	
	return 0;
}