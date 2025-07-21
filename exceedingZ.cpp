#include <stdio.h>

int main () {

    int X, Z;
    scanf("%d", &X);
    for (int i = 1; ; ) {
        scanf("%d", &Z);
        if (Z > X) {
            break;
        }
    }

    int count=0, sum=0;
    for (int i = 1; ; ) {
        sum += X;
        if (sum > Z) {
            break;
        }
        X++;
        count++;
    }
    printf("%d\n", count+1);

    return 0;
}