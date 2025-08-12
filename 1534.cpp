#include <stdio.h>

int main () {
    int t;

    while (scanf("%d", &t) != EOF) {
        int matrix[t][t];
        for (int i = 0; i < t; i++) {
            for (int k = 0; k < t; k++) {
                if (i == k) {
                    matrix[i][k] = 1;
                } else {
                    matrix[i][k] = 3;
                }
            }
        }

        int temp = t - 1;
        for (int i = 0; i < t; i++) {
            for (int k = 0; k < t; k++) {
                if (k == temp) {
                    matrix[i][k] = 2;
                    temp -= 1;
                }
            }
        }

        for (int i = 0; i < t; i++) {
            for (int k = 0; k < t; k++) {
                printf("%d", matrix[i][k]);
            }
            printf("\n");
        }
    }

    return 0;
}