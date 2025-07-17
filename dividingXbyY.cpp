#include <stdio.h>

int main () {

    int cases;
    scanf("%d", &cases);

    for (int i = 1; i <= cases; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (Y == 0) {
            printf("divisao impossivel\n");
        }else if (X == 0) {
            printf("0.0\n");
        } else {
            printf("%.1f\n", (float)X/Y);
        }
    }

    return 0;
}