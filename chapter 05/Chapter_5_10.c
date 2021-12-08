/*
	Tanggal:
		Pembuatan: 1 Oktober 2021
		Modifikasi 1: 2 Oktober 2021
		Modifikasi 2: 5 Oktober 2021
*/

/*
	Problem:
	Dibutuhkan program untuk mengkomputasi perubahan volume gas karbon dioksida pada
	tekanan tertentu, dan menghasilkan output berupa file tabel hasil perhitungan.
*/

/*
	Analysis:
	Diperlukan data-data yang berhubungan dengan Van der Waals equation of state for a gas.
*/

/*
	Data Requirements:

		Problem Inputs:
		double n				// jumlah mol gas karbon dioksida
		double T				// suhu gas dalam kelvin
		double init_volume		// volume awal gas
		double final_volume		// volume akhir gas
		double volume_inc		// pertambahan volume gas

		Problem Outputs:
		double V				// volume-volume gas saat transisi
		double P				// tekanan-tekanan gas saat transisi

		Program Variables:
		double a				// konstanta untuk gas karbon dioksida
		double b				// konstanta untuk gas karbon dioksida
		double R				// konstanta gas

		Relevant Formulas:
		Van der Waals equation of state for a gas
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data-data yang diperlukan
	2. Mengkomputasi persamaan Van der Waals
	3. Menuliskan hasil perhitungan pada file output
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data-data yang diperlukan, user memasukkan input.
	Perhitungan kemudian dilakukan dalam bentuk loop.
	Setelah didapatkan hasil-hasil, penulisan file dilakukan dalam bentuk loop.
*/

#include <stdio.h>

int main() {
	double n; // input - mol gas
	double T; // input - suhu gas
	double init_volume; // input - volume awal gas
	double final_volume; // input - volume akhir gas
	double volume_inc; // input - pertambahan volume
	double a = 3.592; // program variable - konstanta
	double b = 0.0427; // program variable - konstanta
	double R = 	0.08206; // program variable - konstanta
	double V[99]; // output - volume-volume gas
	double P[99]; // output - tekanan-tekanan gas

	// menampilkan instruksi kepada user
	printf("Please enter at the prompts the number of moles of carbon dioxide,");
	printf("the absolute temperature, the initial volume in milliliters, the final volume,");
	printf("and the increment volume between lines of the table.\n");

	// user memasukkan data-data yang diperlukan
	printf("Quantity of carbon dioxide (moles) > ");
	scanf("%lf", &n);

	printf("Temperature (kelvin) > ");
	scanf("%lf", &T);

	printf("Initial volume (milliliters) > ");
	scanf("%lf", &init_volume);

	printf("Final volume (milliliters) > ");
	scanf("%lf", &final_volume);

	printf("Volume increment (milliliters) > ");
	scanf("%lf", &volume_inc);

	// menghitung jumlah loop yang diperlukan
	int times = ((final_volume - init_volume) / volume_inc) + 1;

	// komputasi persamaan dalam bentuk loop
	for (int i = 0; i < times; i++) {
		V[i] = init_volume + (i * volume_inc);
		double Vm = V[i] / 1000;
		P[i] = (n * R * T - ((a * (n * n) / (Vm * Vm)) * (Vm - (b * n)))) / (Vm - (b * n));
	}

	// menuliskan hasil pada file output
	FILE *fp;
	fp = fopen("table.txt", "w");

	fprintf(fp, "%.4lf moles of carbon dioxide at %.2lf kelvin\n\n", n, T);
	fprintf(fp, "Volume (ml)   Pressure (atm)\n\n");

	for (int i = 0; i < times; i++) {
		fprintf(fp, "  %.2lf\t\t\t\t %.4lf\n", V[i], P[i]);
	}

	// menyatakan keberhasilan pembuatan file
	printf("\nOutput file has been successfully created: table.txt\n\n");

    
    return 0;
}