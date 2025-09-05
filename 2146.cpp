#include <stdio.h>

int main () {
    int in;

    while (scanf("%d", &in) != EOF) {
        printf("%d\n", in-1);
    }

    return 0;
}