#include <stdio.h>

int main () {

    int A, N;
    for (int i = 1; ; ) {
        scanf("%d", &A);
        if (A > 0) {
            break;
        }
    }
    for (int i = 1; ; ) {
        scanf("%d", &N);
        if (N > 0) {
            break;
        }
    }

    int sum=0;
    for (int k = 1; k <= N; k++) {
        sum += A;
        A++;
    }
    printf("%d\n", sum);

    return 0;
}