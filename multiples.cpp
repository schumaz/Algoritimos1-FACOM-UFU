#include <stdio.h> 
#include <cstdlib>

int main () {
    int a, b;

    scanf("%d %d", &a, &b);

    if (b % a == 0) {
        printf("Sao Multiplos\n");
    } else if (a % b == 0) {
        printf("Sao Multiplos\n");
    } else if (abs(a) == abs(b)) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}