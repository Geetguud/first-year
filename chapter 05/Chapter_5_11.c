/*
	Tanggal:
		Pembuatan: 1 Oktober 2021
		Modifikasi 1: 5 Oktober 2021
*/

/*
	Problem:
	Diperlukan program untuk mengkomputasi Manning's equation untuk memperkirakan kedalaman.
*/

/*
	Analysis:
	Diperlukan data berupa perkiraan user tentang kedalaman.
*/

/*
	Data Requirements:

		Problem Inputs:
		double depth			// perkiraan user tentang kedalaman

		Problem Outputs:
		double flow				// kecepatan arus pada kedalaman yang diperkirakan user
		double base_flow		// kecepatan arus yang ditargetkan
		double difference		// perbedaan antara kecepatan arus target dengan perkiraan
		double error			// persentase dari perbedaan

		Program Variables:
		double width			// lebar kanal
		double R				// hydraulic radius
		double N				// roughness coefficient
		double A				// area
		double S				// slope
		double Q				// kecepatan arus

		Relevant Formulas:
		Manning's equation
*/

/* DESIGN */
/*
	Initial Algorithm:
	1. User memasukkan data perkiraan
	2. Mengkomputasi persamaan
	3. Menampilkan hasil perhitungan
	4. Jika salah, loop diulang

/* IMPLEMENTATION */
/*
	Program perkiraan dibentuk sebagai loop.
	User memasukkan data perkiraan kedalaman.
	Data tersebut kemudian dikomputasikan kedalam Manning's equation.
	Hasil perhitungan kemudian ditampilkan.
	Jika perkiraan user salah, loop diulang.
*/

#include <stdio.h>
#include <math.h>

// fungsi untuk mengkomputasi Manning's equation
double calc_flow(double depth) {
	double width = 15.0; // program variable - lebar kanal
	double R = (depth * width) / ((2.0 * depth) + width); // program variable - hydraulic radius
	double N = 0.014; // program variable - roughness coefficient
	double A = depth * width; // program variable - area
	double S = 0.0015; // program variable - slope
	double Q = (1.486 / N) * A * pow(R, 2.0/3.0) * sqrt(S); // program variable - kecepatan arus
	return Q;
}

// fungsi untuk mengecek perkiraan user
double error_check(double depth) {
	double flow; // output - kecepatan arus
	double difference; // output - perbedaan
	double error; // output - persentase dari perbedaan
	double base_flow = 1000.0; // output - kecepatan arus target

	// menghitung kecepatan arus dengan Manning's equation
	flow = calc_flow(depth);

	// menghitung perbedaan dan error
	difference = base_flow - flow;
	error = (difference / base_flow) * 100.0;

	// menampilkan hasil kepada user
	printf("\nDepth: %.4lf Flow: %.4lf cfs Target: %.4lf cfs\n", depth, flow, base_flow);
	printf("Difference: %.4lf Error: %.4lf percent\n", difference, error);

	return error;
}

int main() {
	double depth; // input - perkiraan user
	double error; // output - error perkiraan

	// menampilkan instruksi kepada user
	printf("At a depth of 5.0000 feet, the flow is %.4lf cubic feet per second.\n", calc_flow(5.0));
	printf("Enter your initial guess for the channel depth when the flow is 1000.0000 cubic feet per second\n");
	printf("Enter 0 to stop the program\n");
	
	// user memasukkan data perkiraaan
	printf("Enter guess > ");
	scanf("%lf", &depth);

	// mengkomputasi error dari perkiraan user
	error = error_check(depth);

	// loop untuk meneruskan perkiraan user
	while (error < -0.1 || error > 0.1) {

		// break loop
		if (depth == 0) { return; }

		printf("Enter guess > ");
		scanf("%lf", &depth);
		error = error_check(depth);
	}

	// menyatakan keberhasilan perkiraan oleh user
	printf("\nError is within 0.1%% of the desired flow.\n");

    
    return 0;
}