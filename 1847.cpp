#include <stdio.h>

int main () {
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        
        if (a > b && b <= c) {
            printf(":)\n");
        } else if (b > a && b >= c) {
            printf(":(\n");
        } else if (b > a && c > b) {
            int ab = b-a, bc = c-b;
            if (bc < ab) {
                printf(":(\n");
            } else {
                printf(":)\n");
            }
        } else if (a > b && b > c) {
            int ab = a-b, bc = b-c;
            if (ab > bc) {
                printf(":)\n");
            } else {
                printf(":(\n");
            }
        } else if (a == b) {
            if (b < c) {
                printf(":)\n");
            } else {
                printf(":(\n");
            }
        }
    }

    return 0;
}