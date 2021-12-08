/*
	Tanggal:
		Pembuatan: 1 Oktober 2021
		Modifikasi 1: 5 Oktober 2021
*/

/*
	Problem:
	Dibutuhkan program untuk mengkomputasi bayaran gaji pegawai.
*/

/*
	Analysis:
	Diperlukan data berupa id pegawai, upah per jam, dan jam kerja.
*/

/*
	Data Requirements:

		Problem Inputs:
		integer identification		// nomor id pegawai
		double wage_rate			// upah per jam pegawai
		double hour_work			// jam kerja pegawai dalam 1 pekan

		Problem Outputs:
		double wage					// gaji pegawai untuk 1 pekan
		double total_payroll		// total gaji seluruh pegawai
		double average_payroll		// rata-rata gaji seluruh pegawai

		Program Variables:
		double tax					// persentase pajak gaji

		Relevant Formulas:
		-
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data yang diperlukan
	2. Menghitung gaji pegawai
	3. Menampilkan hasil perhitungan
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data yang diperlukan, user memasukkan input.
	Permintaan input dibuat dalam bentuk loop tanpa diketahui jumlah perulangan loop.
	Setiap kali input selesai dimasukkan, gaji pegawai langsung dikomputasikan, kemudian memulai loop berikutnya.
	Jika loop dihentikan, hasil perhitungan gaji setiap pegawai beserta data lainnya ditampilkan kepada user.
*/

#include <stdio.h>

int main() {
	int identification[999]; // input - id pegawai
	double wage[999]; // output - gaji pegawai
	double tax = 0.03625; // program variable - pajak gaji
	double total_payroll = 0; // output - total gaji
	double average_payroll; // output - rata-rata gaji

	// menampilkan instruksi kepada user
	printf("Masukkan data untuk setiap kartu pegawai.\nUntuk berhenti, masukkan 0 pada nomor identifikasi.\n");
	
	// loop untuk memasukkan input serta perhitungan
	int index = 0;
	do {
		double wage_rate; // input - upah per jam
		double hour_work; // input - jam kerja

		// user melakukan input data
		printf("\nInput Kartu Pegawai #%d\n", (index + 1));
		printf("Nomor ID: ");
		scanf("%d", &identification[index]);
		
		// break loop
		if (identification[index] == 0) { break; }

		printf("Upah per jam: ");
		scanf("%lf", &wage_rate);

		printf("Jam kerja dalam satu pekan: ");
		scanf("%lf", &hour_work);

		// perhitungan gaji
		wage[index] = hour_work * wage_rate * 1.5;
		wage[index] = wage[index] - (wage[index] * tax);

		// akumulasi total gaji
		total_payroll += wage[index];

		index++;
	} while (identification[index - 1]);

	// perhitungan rata-rata gaji
	average_payroll = total_payroll / index;

	// menampilkan hasil perhitungan kepada user
	printf("\n----------\nBerikut gaji untuk setiap pegawai:\n");

	for (int i = 0; i < index; i++) {
		printf("\nNomor ID %d\n", identification[i]);
		printf("Gaji: %.2lf\n", wage[i]);
	}

	printf("\nJumlah total gaji yang diberikan: %.2lf\n", total_payroll);
	printf("Rata-rata gaji tiap pegawai: %.2lf\n", average_payroll);

    
    return 0;
}