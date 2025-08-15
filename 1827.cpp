#include <stdio.h>

int main () {
    int t;

    while (scanf("%d", &t) != EOF) {
        int matrix[t][t], start, end;
        start = t / 3, end = t - 1 - start;

        int middle=(t-1)/2, count_line=0, count_column=t-1;
        for (int i = 0; i < t; i++) {
            for (int k = 0; k < t; k++) {
                if (i == k) {
                    matrix[i][k] = 2;
                } else {
                    matrix[i][k] = 0;
                }
                if (i == count_line && k == count_column) {
                    matrix[i][k] = 3;
                    count_line++;
                    count_column--;
                }
            }
        }
        
        for (int i = start; i <= end; i++) {
            for (int k = start; k <= end; k++) {
                matrix[i][k] = 1;
            }
        }

        matrix[middle][middle] = 4;

        for (int i = 0; i < t; i++) {
            for (int k = 0; k < t; k++) {
                printf("%d", matrix[i][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}