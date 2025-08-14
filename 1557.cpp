#include <stdio.h>

int main () {
    int t;

    while (scanf("%d",&t) == 1 && t != 0) {
        int matrix[t][t];
        matrix[0][0] = 1;

        for (int i = 1; i < t; i++) {
            matrix[0][i] = matrix[0][i-1] * 2;
        }
        for (int i = 1; i < t; i++) {
            matrix[i][0] = matrix[i-1][0] * 2;
        }

        int temp = 1;
        for (int i = 1; i < t; i++) {
            for (int k = 1; k < t; k++) {
                if (i == k) {
                    matrix[i][k] = matrix[i-1][k] + matrix[i][k-1];
                    for (int j = 1; j < t; j++) {
                        matrix[temp][j] = matrix[temp][j-1] * 2;
                    }
                    for (int j = 1; j < j; j++) {
                        matrix[j][temp] = matrix[j-1][temp] * 2;
                    }
                    temp++;
                }
            }
        }

        int rolls=0, number = matrix[t-1][t-1];
        while (number > 0) {
            number / 10;
            number /= 10;
            rolls++;
        }

        for (int i = 0; i < t; i++) {
            for (int k = 0; k < t; k++) {
                if (k > 0) {
                    printf(" ");
                }
                printf("%*d", rolls, matrix[i][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}