#include <stdio.h>

int main () {

    int cases;
    unsigned long long fibo[61];
    fibo[0] = 0;
    fibo[1] = 1;

    scanf("%d", &cases);
    int input[cases];

    for (int i = 2; i <= 60; i++) {
        fibo[i] = fibo[i-2] + fibo[i-1];
    }

    for (int i = 0; i < cases; i++) {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < cases; i++) {
        printf("Fib(%d) = %llu\n", input[i], fibo[input[i]]);
    }

    return 0;
}