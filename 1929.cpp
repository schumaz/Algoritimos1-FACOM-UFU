#include <stdio.h>

int main () {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int yeno = 0;
    
    if (a + b > c && a + c > b && b + c > a) {
        yeno = 1;
    } else if (a + b > d && a + d > b && b + d > a) {
        yeno = 1;
    } else if (a + c > d && a + d > c && c + d > a) {
        yeno = 1;
    } else if (b + c > d && b + d > c && c + d > b) {
        yeno = 1;
    }

    if (yeno == 1) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}