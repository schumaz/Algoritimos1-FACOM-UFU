#include <stdio.h>

int main () {

    char operation;
    scanf(" %c", &operation);

    double matrix[12][12];
    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            scanf("%lf", &matrix[i][k]);
        }
    }

    double sum=0;
    int count=0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i + j > 11) {
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else {
        printf("%.1lf\n", (double)sum/count);
    }

    return 0;
}