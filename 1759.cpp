#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        if (i == t - 1) {
            printf("Ho!\n");
        } else {
            printf("Ho ");
        }
    }

    return 0;
}