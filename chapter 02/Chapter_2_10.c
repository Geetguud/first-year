/*
	Tanggal:
		Pembuatan: 13 September 2021
		Modifikasi 1: 14 September 2021
*/

/*
	Problem:
    User memiliki dua buah titik yaitu A dan B dalam bidang cartesius. Ia ingin mencari
    persamaan dari garis baru yang tegak lurus terhadap garis diantara dua titik,
    dan berada di tengah-tengah dua titik tersebut. Dibutuhkan program untuk
    mencari persamaan garis tersebut.
*/

/*
	Analysis:
    Diperlukan data koordinat cartesius dari titik A dan B. Dengan data
    tersebut akan dicari gradien dan titik tengahnya. Lalu hasilnya digunakan
    untuk membentuk persamaan baru yang tegak lurus terhadap dua titik tersebut.
*/

/*
	Data Requirements:

		Problem Inputs:
            double Ax           // koordinat x titik A
            double Ay           // koordinat y titik A
            double Bx           // koordinat x titik B
            double By           // koordinat y titik B

		Problem Outputs:
            double p_slope      // gradien garis baru
            double b            // komponen persamaan garis baru

		Program Variables:
            double slope        // gradien garis AB
            double mid_x        // koordinat x titik tengah garis AB
            double mid_y        // koordinat y titik tengah garis AB

		Relevant Formulas:
            gradien = (y2 - y1) / (x2 - x1)
            koordinat x titik tengah = (x1 + x2) / 2
            koordinat y titik tengah = (y1 + y2) / 2
            gradien garis yang tegak lurus terhadap garis lain = -1 / (gradien garis lain)
            persamaan garis => y - y1 = m(x - x1)
                            => y = mx + b
*/

/* DESIGN */
/*
	Initial Algorithm:
    1. Memasukkan koordinat titik A dan B
    2. Menghitung gradien garis yang dibentuk dari titik A dan B (garis AB) dan titik tengahnya
    3. Menghitung gradien garis yang tegak lurus terhadap garis AB dan komponen lainnya
    4. Menghitung komponen persamaan garis baru
    5. Menampilkan persamaan garis baru disertai koordinat titik A dan B
*/

/* IMPLEMENTATION */
/*
	Untuk mendapatkan data koordinat titik A dan B, diperlukan input dari user dengan statement berikut:
    printf("Masukkan koordinat titik A (x, y) > ");
    scanf("%lf%lf", &Ax, &Ay);
    printf("Masukkan koordinat titik B (x, y) > ");
    scanf("%lf%lf", &Bx, &By);

    Kemudian menghitung gradien garis AB dan titik tengahnya:
    slope = (By - Ay) / (Bx - By);
    mid_x = (Ax + Bx) / 2;
    mid_y = (Ay + By) / 2;

    Kemudian menghitung gradien dan komponen lain dari garis baru yang tegak lurus garis AB:
    p_slope = -1 / slope;
    b = (p_slope * mid_x) + mid_y;

    Terakhir tampilkan hasil perhitungan:
    printf("Koordinat awal:\nTitik A (%f, %f)\nTitik B (%f, %f)\n\n", Ax, Ay, Bx, By);
    if (b > 0) {
        printf("Persamaan garis sumbu yang tegak lurus terhadap garis AB:\n\ty = %fx + %f\n", p_slope, b);
    } else if (b < 0) {
        b = b * -1;
        printf("Persamaan garis sumbu yang tegak lurus terhadap garis AB:\n\ty = %fx - %f\n", p_slope, b);
    } else {
        printf("Persamaan garis sumbu yang tegak lurus terhadap garis AB:\n\ty = %fx\n", p_slope);
    }
*/

#include <stdio.h>

int main()
{
    double Ax; // input - koordinat x titik A
    double Ay; // input - koordinat y titik A
    double Bx; // input - koordinat x titik B
    double By; // input - koordinat y titik B
    double slope; // variable program - gradien garis AB
    double mid_x; // variable program - koordinat x titik tengah garis AB
    double mid_y; // variable program - koordinat y titik tengah garis AB
    double p_slope; // output - gradien garis baru
    double b; // output - komponen persamaan garis baru

    // user memasukkan koordinat titik A dan B
    printf("Masukkan koordinat titik A (x, y) > ");
    scanf("%lf%lf", &Ax, &Ay);

    printf("Masukkan koordinat titik B (x, y) > ");
    scanf("%lf%lf", &Bx, &By);

    // menghitung gradien dan koordinat titik tengah dari garis AB
    slope = (By - Ay) / (Bx - By);
    mid_x = (Ax + Bx) / 2;
    mid_y = (Ay + By) / 2;

    // menghitung gradien dan komponen persamaan dari garis baru
    p_slope = -1 / slope;
    b = (p_slope * mid_x) + mid_y;

    // hasil perhitungan ditampilkan kepada user
    printf("Koordinat awal:\nTitik A (%f, %f)\nTitik B (%f, %f)\n\n", Ax, Ay, Bx, By);

    if (b > 0) {
        printf("Persamaan garis sumbu yang tegak lurus terhadap garis AB:\n\ty = %fx + %f\n", p_slope, b);
    } else if (b < 0) {
        b = b * -1;
        printf("Persamaan garis sumbu yang tegak lurus terhadap garis AB:\n\ty = %fx - %f\n", p_slope, b);
    } else {
        printf("Persamaan garis sumbu yang tegak lurus terhadap garis AB:\n\ty = %fx\n", p_slope);
    }

    
    return 0;
}