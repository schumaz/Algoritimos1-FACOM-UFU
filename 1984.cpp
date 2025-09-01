#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    while (a > 0) {
        int last_one = a % 10;
        printf("%d", last_one);
        a /= 10;
    }
    
    printf("\n");

    return 0;
}