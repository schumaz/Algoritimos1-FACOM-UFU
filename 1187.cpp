#include <stdio.h>

int main () {
    int count=0;
    double matrix[12][12], sum=0;
    char input;

    scanf("%c", &input);

    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            scanf("%lf", &matrix[i][k]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            if (i - k < 0 && i + k <= 10) {
                sum += matrix[i][k];
                count++;
            }
        }
    }

    if (input == 'S') {
        printf("%.1lf\n", sum);
    } else {
        printf("%.1lf\n", sum/count);
    }

    return 0;
}