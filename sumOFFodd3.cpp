#include <stdio.h>

int main () {

    int cases;
    scanf("%d", &cases);

    int X, Y;
    for (int i = 1; i <= cases; i++) {
        int sum=0;
        scanf("%d %d", &X, &Y);
        if (X % 2 == 0) {
            X++;
            for (int k = 1; k <= Y; k++){
                sum += X;
                X+=2;
            }
        } else if (X % 2 != 0) {
            for (int k = 1; k <= Y; k++){
                sum += X;
                X+=2;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}