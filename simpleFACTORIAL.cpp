#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);

    int result=1;
    for (int i = N; i >= 1; i--) {
        result = result * i;
    }
    printf("%d\n", result);

    return 0;
}