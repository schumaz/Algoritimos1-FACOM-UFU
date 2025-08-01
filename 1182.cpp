#include <stdio.h>

int main () {

    int column;
    char operation;
    scanf("%d %c", &column, &operation);

    float matrix[12][12];
    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            scanf("%f", &matrix[i][k]);
        }
    }

    float sum=0;
    for (int j = 0; j < 12; j++) {
        sum += matrix[j][column];
    }

    if (operation == 'S') {
        printf("%.1f\n", sum);
    } else {
        printf("%.1f\n", sum/12);
    }

    return 0;
}