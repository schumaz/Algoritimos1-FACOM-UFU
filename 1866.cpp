#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    int results[a];

    for (int i = 0; i < a; i++) {
        int b;
        scanf("%d", &b);
        if (b % 2 == 0) {
            results[i] = 0;
        } else {
            results[i] = 1;
        }
    }

    for (int i = 0; i < a; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}