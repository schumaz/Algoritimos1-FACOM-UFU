#include <stdio.h>

int main () {

    int W;
    scanf("%d", &W);

    int divisor;
    for (int i = 1; i <= W; i++) {
        if (W % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}