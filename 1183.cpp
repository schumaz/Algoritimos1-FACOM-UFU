#include <stdio.h>

int main () {

    char inputCHAR;
    scanf(" %c", &inputCHAR);

    double matrix[12][12];
    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            scanf("%lf", &matrix[i][k]);
        }
    }
    
    double sum=0;
    int count=0;
    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            if (k > i) {
                sum += matrix[i][k];
                count++;
            }
        }
    }

    if (inputCHAR == 'S') {
        printf("%.1f\n", sum);
    } else {
        printf("%.1lf\n", (double)sum/count);
    }   

    return 0;
}