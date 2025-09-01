#include <stdio.h>

int main () {
    int T;
    scanf("%d", &T);

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int count = 0;

    if (a == T) {
        count++;
    }
    if (b == T) {
        count++;
    }
    if (c == T) {
        count++;
    }
    if (d == T) {
        count++;
    }
    if (e == T) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}