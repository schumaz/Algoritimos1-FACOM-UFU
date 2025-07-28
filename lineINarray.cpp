#include <stdio.h>

int main () {

    int line;
    double array[12][12], sum=0.0, avg=0.0;
    char T;

    scanf("%d", &line);
    scanf(" %c", &T);
    
    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            scanf("%lf", &array[i][k]);
        }
    }

    if (T == 83) {
        for (int i = 0; i < 12; i++) {
        sum += array[line][i];
        }
        printf("%.1lf\n", sum);
    } else if (T == 77) {
        for (int i = 0; i < 12; i++) {
        sum += array[line][i];
        }
        avg = sum/12;
        printf("%.1lf\n", avg);
    }

    return 0;
}