#include <stdio.h>

int main () {
    int t;

    while (scanf("%d", &t) == 1) {
        if (t == 0) {
            break;
        }

        int matrix[t][t];
        for (int i = 0; i < t; i++) {
            for (int k = 0; k < t; k++) {
                if (i == k) {
                    matrix[i][k] = 1;
                    int temp = 2;
                    for (int j = i+1; j < t; j++) {
                        matrix[i][j] = temp;
                        temp++; 
                    }
                    temp = 2;
                    for (int j = i+1; j < t; j++) {
                        matrix[j][k] = temp;
                        temp++; 
                    }
                }
            }
        }

        for (int i = 0; i < t; i++) {
            for (int j = 0; j < t; j++) {
                if (j == 0) {
                    printf("%3d", matrix[i][j]);
                } else {
                    printf(" %3d", matrix[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}