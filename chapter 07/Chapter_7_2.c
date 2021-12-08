/*
	Tanggal:
		Pembuatan: 1 November 2021
        Modifikasi 1: 2 November 2021
*/

/*
	Problem:
    Diperlukan program untuk menghitung luas dari sebuah poligon.
*/

/*
	Analysis:
    Dari data koordinat titik sudut poligon yang telah diketahui,
    dapat dilakukan perhitungan luas poligon.
*/

/*
	Data Requirements:

		Problem Inputs:
        FILE "input.txt"    // file input yang berisi dataset koordinat titik sudut poligon

		Problem Outputs:
        FILE "output.txt"   // file output yang akan diisikan dataset koordinat titik sudut poligon

		Program Variables:
        double x[]          // array koordinat x titik sudut poligon
        double y[]          // array koordinat y titik sudut poligon
        int array_size      // ukuran dari array
        double area         // luas dari poligon

		Relevant Formulas:
        area of polygon = sum of absolute ((x[i + 1] + x[i]) * (y[i + 1] - y[i])) / 2
*/

/* DESIGN */
/*	Initial Algorithm:
	1. Membaca file input dan menyiapkan file output
	2. Menuliskan dataset file input kedalam file output
    3. Menghitung nilai luas poligon

/* Step 1 refinement
	1. Menggunakan get_corners
   Step 2 refinement
	2. Menggunakan output_corners
   Step 3 refinement
	3. Menggunakan polygon_area
*/


/* IMPLEMENTATION
/*	Untuk mendapatkan file, diperlukan statement:
	FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    Kemudian, gunakan get_corners(FILE *input, double x[], double y[], int max_size)
	dimana array x dan y diisikan dengan data dari file lalu return nilai ukuran array x dan y

	Selanjutnya gunakan output_corners(FILE *output, double x[], double y[], int array_size)
	dimana file output diisikan dengan nilai-nilai pada array x dan y

	Lalu, gunakan polygon_area(double x[], double y[], int size) 
	dimana dilakukan perhitungan nilai luas poligon dengan rumus

	Terakhir, luas polygon ditampilkan dengan statement:
	printf("Area of the polygon is %.3lf\n", area); 
*/

#include <stdio.h>
#include <math.h>

// prototipe fungsi
int get_corners(FILE *input, double x[], double y[], int max_size);
void output_corners(FILE *output, double x[], double y[], int array_size);
double polygon_area(double x[], double y[], int size);

int main() {
    FILE *input = fopen("input.txt", "r"); // input - file input dataset
    FILE *output = fopen("output.txt", "w"); // output - file output dataset
    
    double x[30]; // variabel program - koordinat x
    double y[30]; // variabel program - koordinat y
    
    int array_size; // variabel program - ukuran array
    double area; // variabel program - luas poligon

    // membaca file input dan menyimpan data kedalam array
    array_size = get_corners(input, x, y, 20);

    // menuliskan dataset kedalam file output
    output_corners(output, x, y, array_size);

    // menghitung luas poligon
    area = polygon_area(x, y, array_size);

    // menampilkan luas poligon
    printf("Area of the polygon is %.3lf square units\n", area);

    // menutup file
    fclose(input);
    fclose(output);

    return 0;
}

// fungsi untuk membaca file input dan menyimpan data kedalam array
int get_corners(FILE *input, double x[], double y[], int max_size) {
    int array_size = 0;
    int i = 0;

    // loop membaca setiap baris dalam file
    while(i < max_size) {
        if (fscanf(input, "%lf %lf", &x[i], &y[i]) == EOF) break;
        i++;
        array_size++;
    }

    return array_size;
}

// fungsi untuk menuliskan dataset kedalam file output
void output_corners(FILE *output, double x[], double y[], int array_size) {
    int i;

    // loop menuliskan setiap baris dalam file
    for (i = 0; i < array_size; i++) {
        fprintf(output, "%.3lf\t%.3lf\n", x[i], y[i]);
    }
}

// fungsi untuk menghitung luas poligon
double polygon_area(double x[], double y[], int size) {
    double area = 0;

    // loop mengkomputasi setiap titik sudut kedalam rumus
    int i;
    for (i = 0; i < (size - 1); i++) {
        area += ((x[i + 1] + x[i]) * (y[i + 1] - y[i])) / 2;
    }

    // nilai luas harus bersifat positif, maka variabel bernilai mutlak
    if (area < 0) area = -area;

    return area;
}

/*TESTTING
	Dari program di atas dilakukan testing dengan sample input
	x y
	4 0
	4 7.5
	7 7.5
	7 3
	9 0
	7 0
	4 0
	
	dan diperoleh output luas poligon yaitu 25.5 satuan kuadrat
*/