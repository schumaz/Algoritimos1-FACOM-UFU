#include <stdio.h>

int main () {
    int t;

    while (scanf("%d", &t) != EOF) {
        int results[t], biggest;
        for (int i = 0; i < t; i++) {
            scanf("%d", &results[i]);
            if (i == 0) {
                biggest = results[i]; 
                }
            if (results[i] > biggest) {
                biggest = results[i];
            }
        }
        if (biggest < 10) {
            printf("1\n");
        } else if (biggest >= 10 && biggest < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }

    return 0;
}