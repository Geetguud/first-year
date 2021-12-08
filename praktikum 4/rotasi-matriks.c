#include <stdio.h>

int main() {
    int n;
    long m, matrix[1001][1001], matrix2[1001][1001];
    scanf("%d %ld", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%ld", &matrix[i][j]);
            matrix2[i][j] = matrix[i][j];
        }
    }

    m = m % 4;
    for (int i = 0; i < m; i++) {
        for (int y = 0; y < n; y++) {
            for (int x = y; x < n; x++) {
                matrix[y][x] = matrix2[x][y];
                matrix[x][y] = matrix2[y][x];
            }
        }

        for (int y = 0; y < n; y++) {
            for (int x = 0, k = (n - 1); x < k; x++, k--) {
                matrix[x][y] = matrix2[k][y];
                matrix[k][y] = matrix2[x][y];
            }
        }

        // for (int y1 = 0, y2 = (n - 1); y1 < n && y2 >= 0; y1++, y2--) {
        //     for (int x1 = 0, x2 = (n - 1); x1 < n && x2 >= 0; x1++, x2--) {
        //         matrix[y2][x2] = matrix2[y1][x1];
        //     }
        // }
    }
    // if (m % 2 == 1) {
    //     for (int x1 = 0, x2 = (n - 1); x1 < n && x2 >= 0; x1++, x2--) {
    //         for (int y1 = 0, y2 = (n - 1); y1 < n && y2 >= 0; y1++, y2--) {
    //             matrix[y2][x1] = matrix2[y1][x1];
    //         }
    //     }
    // }

    // if (m > 1) {
    //     // for (int i = 0; i < m; i++) {
    //         for (int y1 = 0, y2 = (n - 1); y1 < n && y2 >= 0; y1++, y2--) {
    //             for (int x1 = 0, x2 = (n - 1); x1 < n && x2 >= 0; x1++, x2--) {
    //                 matrix[y2][x1] = matrix2[y1][x2];
    //             }
    //         }
    //     // }
    // }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%ld ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}