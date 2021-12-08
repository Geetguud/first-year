/*
	Tanggal:
		Pembuatan: 5 Oktober 2021
*/

/*
	Problem:
    Dibutuhkan program untuk memproses file input menjadi file output.
*/

/*
	Analysis:
    Diperlukan file yang berisi data-data yang diperlukan
*/

/*
	Data Requirements:

		Problem Inputs:
        double min
        integer passenger
        double commute
        double gasoline

		Problem Outputs:
        double efficiency
        double subsidy

		Program Variables:
        -

		Relevant Formulas:
        -
*/

/* DESIGN */
/*
	Initial Algorithm:
    1. Membaca file input
    2. Melakukan perhitungan
    3. Menuliskan hasil perhitungan pada file output
*/

/* IMPLEMENTATION */
/*
    Membaca data dari file input sekaligus melakukan perhitungan dengan bentuk loop.
    Menuliskan hasil perhitungan pada file output dengan loop.
*/

#include <stdio.h>

int main() {
    double min;
    int passengers[999];
    double commute[999];
    double gasoline[999];
    double efficiency[999];
    double subsidy[999];

    FILE *fp;
    fp = fopen(".\\carpool.txt", "r");

    if (fp == NULL) {
        printf("carpool.txt not found.\nPlace \"carpool.txt\" in the same folder as this program.\n");
        
        return 0;
    }

    fscanf(fp, "%lf", &min);

    int i = -1;
    do {
        i++;

        fscanf(fp, "%d %lf %lf", &passengers[i], &commute[i], &gasoline[i]);
        efficiency[i] = passengers[i] * commute[i] / gasoline[i];
        if (efficiency[i] >= min) {
            subsidy[i] = 0.08 * efficiency[i];
        } else {
            subsidy[i] = 0;
        }
    } while (passengers[i] && commute[i] && gasoline[i]);

    fclose(fp);

    fp = fopen("effic.txt", "w");

    fprintf(fp, "CARPOOLS MEETING MINIMUM PASSENGER EFFICIENCY OF %.2lf PASSENGER KM/L\n", min);
    fprintf(fp, "Passengers\tWeekly Commute (km)\t\tGasoline Consumption (L)\tEfficiency (pass km/L)\tWeekly Subsidy ($)\n");

    for (int j = 0; j < i; j++) {
        if (subsidy[j]) {
            fprintf(fp, "\t%d\t\t\t\t%.2lf\t\t\t\t\t%.2lf\t\t\t\t\t\t%.2lf\t\t\t\t%.2lf\n", passengers[j], commute[j], gasoline[j], efficiency[j], subsidy[j]);
        }
    }

    fclose(fp);

    printf("\nOutput file has been successfully created: effic.txt\n\n");

    
    return 0;
}