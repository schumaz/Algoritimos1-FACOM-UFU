#include <stdio.h>

int main () {
    long long increase, exp;

    while (scanf("%lld %lld", &increase, &exp) != EOF) {
        if (increase == 0 && exp == 0) return 0;

        printf("%lld\n", exp*increase);
    }

    return 0;
}