/*
	Tanggal:
		Pembuatan: 12 September 2021
		Modifikasi 1: 13 September 2021
		Modifikasi 2: 14 September 2021
*/

/*
	Problem:
	Sebuah jet diluncurkan dari kapal induk dengan akselerasi konstan.
	Dibutuhkan program yang dapat menghitung akselerasi dan jangka waktu tempuhnya
	jika diketahui kecepatan takeoff dan jarak tempuh akselerasi.
*/

/*
	Analysis:
	Diperlukan data berupa kecepatan ketika takeoff dan jarak tempuh ketika akselerasi.
	Penghitungan akselerasi dan jangka waktu tempuh dilakukan dengan formula yang telah diketahui.
*/

/*
	Data Requirements:

		Problem Inputs:
			double takeoff			// kecepatan jet ketika takeoff dalam km/jam
			double distance			// jarak tempuh akselerasi dalam meter

		Problem Outputs:
			double acceleration		// akselerasi saat peluncuran
			double time				// jangka waktu akselerasi

		Program Variables:
			double velocity			// kecepatan jet ketika takeoff dalam m/s

		Relevant Formulas:
			velocity = acceleration x time
			distance = 1/2 x acceleration x time
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan kecepatan takeoff dan jarak tempuh akselerasi
	2. Mengubah satuan kecepatan takeoff
	3. Menghitung akselerasi dan jangka waktunya
	4. Menampilkan hasil perhitungan
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data kecepatan takeoff dan jarak tempuh, diperlukan
	input dari user dengan statement berikut:
	printf("Masukkan jumlah kecepatan saat takeoff dalam km/jam dan jarak tempuh akselerasi dalam meter > ");
	scanf("%lf%lf", &takeoff, &distance);

	Kemudian kecepatan takeoff tersebut diubah satuannya menjadi m/s:
	velocity = takeoff * 1000 / 3000;

	Lalu hitung akselerasi dan jangka waktunya:
	time = (distance / velocity) * 2;
	acceleration = velocity / time;

	Terakhir tampilkan hasil perhitungan:
	printf("Akselerasi: %f meter per sekon kuadrat\nJangka waktu akselerasi: %f sekon\n", acceleration, time);
*/

#include <stdio.h>

int main()
{
	double takeoff; // input - kecepatan takeoff
	double distance; // input - jarak tempuh
	double velocity; // variable program - kecepatan takeoff dengan satuan m/s
	double time; // output - jangka waktu
	double acceleration; // output - akselerasi

	// user memasukkan data kecepatan takeoff dan jarak tempuh
	printf("Masukkan jumlah kecepatan saat takeoff dalam km/jam dan jarak tempuh akselerasi dalam meter > ");
	scanf("%lf%lf", &takeoff, &distance);

	// mengubah satuan pada kecepatan takeoff dari km/jam menjadi m/s
	velocity = takeoff * 1000 / 3000;
	
	// menghitung akselerasi dan jangka waktu
	time = (distance / velocity) * 2;
	acceleration = velocity / time;

	// hasil perhitungan ditampilkan kepada user
	printf("Akselerasi: %f meter per sekon kuadrat\nJangka waktu akselerasi: %f sekon\n", acceleration, time);

	
	return 0;
}