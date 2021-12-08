/*
	Tanggal:
		Pembuatan: 24 September 2021
		Modifikasi 1: 26 September 2021
		Modifikasi 2: 28 September 2021
*/

/*
	Problem:
	Diperlukan sebuah program untuk mengontrol sebuah mesin roti.
	Mesin tersebut dapat menerima beberapa input kemudian memproses roti.
*/

/*
	Analysis:
	Diperlukan data berupa jenis roti, ukuran roti, dan apakah secara manual.
	Proses pembuatan roti didasarkan pada data input dan setiap step akan
	ditampilkan kepada user.
*/

/*
	Data Requirements:

		Problem Inputs:
		char type						// jenis roti
		char size_double				// ukuran roti
		char manual						// apakah manual atau tidak

		Problem Outputs:
		double primary_kneading			// waktu untuk Primary Kneading
		double primary_rising			// waktu untuk Primary Rising
		double secondary_kneading		// waktu untuk Secondary Kneading
		double secondary_rising			// waktu untuk Secondary Rising
		double loaf_shaping				// waktu untuk Loaf Shaping
		double final_rising				// waktu untuk Final Rising
		double baking					// waktu untuk Baking
		double cooling					// waktu untuk Cooling

		Program Variables:
		-

		Relevant Formulas:
		-
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. Memasukkan data jenis roti, ukuran roti, dan apakah manual
	2. Menghitung waktu yang diperlukan
	3. Menampilkan step proses pembuatan roti
*/

/* IMPLEMENTATION */
/*
	Didefinisikan sebuah fungsi untuk menampilkan instruksi kepada user:
	void instruction(int step)

	Didefinisikan sebuah fungsi untuk melakukan komputasi proses pembuatan roti:
	void compute(char type, char size_double, char manual)

	Untuk mendapatkan data-data, diperlukan input dari user:
	instruction(1);
	scanf(" %c", &type);

	instruction(2);
	scanf(" %c", &size_double);

	instruction(3);
	scanf(" %c", &manual);

	Jika jenis roti White:
	if (type == 'W' || type == 'w') {

		Menghitung waktu yang dibutuhkan pada setiap step:
		double primary_kneading = 15 * inc;
		double primary_rising = 60 * inc;
		double secondary_kneading = 18 * inc;
		double secondary_rising = 20 * inc;
		double loaf_shaping = 2 * inc;

		Menampilkan step proses pembuatan roti kepada user:
		printf("\nPrimary kneading\t%.1lf menit\n", primary_kneading);
		printf("Primary rising\t\t%.1lf menit\n", primary_rising);
		printf("Secondary kneading\t%.1lf menit\n", secondary_kneading);
		printf("Secondary rising\t%.1lf menit\n", secondary_rising);
		printf("Loaf shaping\t\t%.1lf detik\n", loaf_shaping);

		Jika pembuatan secara manual:
		if (manual == 'Y' || manual == 'y') {

			User diinstruksikan untuk mengambil rot:
			printf("\nSilahkan untuk mengambil adonan roti.\n");

		Jika tidak, proses dilanjutkan:
		} else {

			Menghitung waktu yang dibutuhkan pada setiap step:
			double final_rising = 75 * inc;
			double baking = 45 * inc;
			double cooling = 30 * inc;

			Menampilkan step proses pembuatan roti kepada user:
			printf("Final rising\t\t%.1lf menit\n", final_rising);
			printf("Baking\t\t\t%.1lf menit\n", baking);
			printf("Cooling\t\t\t%.1lf menit\n", cooling);
		}
	}

	Jika jenis roti Sweet:
	else if (type == 'S' || type == 's') {

		Menghitung waktu yang dibutuhkan pada setiap step:
		double primary_kneading = 20 * inc;
		double primary_rising = 60 * inc;
		double secondary_kneading = 33 * inc;
		double secondary_rising = 30 * inc;
		double loaf_shaping = 2 * inc;

		Menampilkan step proses pembuatan roti kepada user:
		printf("\nPrimary kneading\t%.1lf menit\n", primary_kneading);
		printf("Primary rising\t\t%.1lf menit\n", primary_rising);
		printf("Secondary kneading\t%.1lf menit\n", secondary_kneading);
		printf("Secondary rising\t%.1lf menit\n", secondary_rising);
		printf("Loaf shaping\t\t%.1lf detik\n", loaf_shaping);

		Jika pembuatan secara manual:
		if (manual == 'Y' || manual == 'y') {

			User diinstruksikan untuk mengambil rot:
			printf("\nSilahkan untuk mengambil adonan roti.\n");

		Jika tidak, proses dilanjutkan:
		} else {

			Menghitung waktu yang dibutuhkan pada setiap step:
			double final_rising = 75 * inc;
			double baking = 35 * inc;
			double cooling = 30 * inc;

			Menampilkan step proses pembuatan roti kepada user:
			printf("Final rising\t\t%.1lf menit\n", final_rising);
			printf("Baking\t\t\t%.1lf menit\n", baking);
			printf("Cooling\t\t\t%.1lf menit\n", cooling);
		}
	}
*/

#include <stdio.h>

// pendefinisian fungsi untuk menampilkan instruksi kepada user
void instruction(int step) {
	if (step == 1) {
		printf("Tersedia 2 jenis roti: White (W) dan Sweet (S).\n");
		printf("Masukkan jenis roti yang anda inginkan (W / S) > ");
	} else if (step == 2) {
		printf("Apakah anda ingin roti dengan ukuran dua kali lipat? (Y / N) > ");
	} else if (step == 3) {
		printf("Apakah anda ingin memanggang roti secara manual? (Y / N) > ");
	}
}

// pendefinisian fungsi untuk mengkomputasi proses pembuatan roti
void compute(char type, char size_double, char manual) {

	// pengaturan waktu sesuai ukuran roti
	double inc = (size_double == 'Y' || size_double == 'y') ? 1.5 : 1;

	// percabangan untuk roti jenis White
	if (type == 'W' || type == 'w') {

		// menghitung waktu yang dibutuhkan
		double primary_kneading = 15 * inc;
		double primary_rising = 60 * inc;
		double secondary_kneading = 18 * inc;
		double secondary_rising = 20 * inc;
		double loaf_shaping = 2 * inc;

		// menampilkan step proses pembuatan roti
		printf("\nPrimary kneading\t%.1lf menit\n", primary_kneading);
		printf("Primary rising\t\t%.1lf menit\n", primary_rising);
		printf("Secondary kneading\t%.1lf menit\n", secondary_kneading);
		printf("Secondary rising\t%.1lf menit\n", secondary_rising);
		printf("Loaf shaping\t\t%.1lf detik\n", loaf_shaping);

		// percabangan untuk pembuatan roti secara manual
		if (manual == 'Y' || manual == 'y') {

			// menginstruksikan user
			printf("\nSilahkan untuk mengambil adonan roti.\n");

		// percabangan untuk pembuatan roti secara otomatis
		} else {

			// menghitung waktu yang dibutuhkan
			double final_rising = 75 * inc;
			double baking = 45 * inc;
			double cooling = 30 * inc;

			// menampilkan step proses pembuatan roti
			printf("Final rising\t\t%.1lf menit\n", final_rising);
			printf("Baking\t\t\t%.1lf menit\n", baking);
			printf("Cooling\t\t\t%.1lf menit\n", cooling);
		}

	// percabangan untuk roti jenis Sweet
	} else if (type == 'S' || type == 's') {

		// menghitung waktu yang dibutuhkan
		double primary_kneading = 20 * inc;
		double primary_rising = 60 * inc;
		double secondary_kneading = 33 * inc;
		double secondary_rising = 30 * inc;
		double loaf_shaping = 2 * inc;

		// menampilkan step proses pembuatan roti
		printf("\nPrimary kneading\t%.1lf menit\n", primary_kneading);
		printf("Primary rising\t\t%.1lf menit\n", primary_rising);
		printf("Secondary kneading\t%.1lf menit\n", secondary_kneading);
		printf("Secondary rising\t%.1lf menit\n", secondary_rising);
		printf("Loaf shaping\t\t%.1lf detik\n", loaf_shaping);

		// percabangan untuk pembuatan roti secara manual
		if (manual == 'Y' || manual == 'y') {

			// menginstruksikan user
			printf("\nSilahkan untuk mengambil adonan roti.\n");

		// percabangan untuk pembuatan roti secara otomatis
		} else {

			// menghitung waktu yang dibutuhkan
			double final_rising = 75 * inc;
			double baking = 35 * inc;
			double cooling = 30 * inc;

			// menampilkan step proses pembuatan roti
			printf("Final rising\t\t%.1lf menit\n", final_rising);
			printf("Baking\t\t\t%.1lf menit\n", baking);
			printf("Cooling\t\t\t%.1lf menit\n", cooling);
		}
	}
}

int main() {
	char type; // input - jenis roti
	char size_double; // input - ukuran roti
	char manual; // input - manual atau tidak

	// user memasukkan data-data
	instruction(1);
	scanf(" %c", &type);

	instruction(2);
	scanf(" %c", &size_double);

	instruction(3);
	scanf(" %c", &manual);

	// mengkomputasi pembuatan roti
	compute(type, size_double, manual);

    
    return 0;
}