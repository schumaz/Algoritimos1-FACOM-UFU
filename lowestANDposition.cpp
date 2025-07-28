#include <stdio.h>

int main () {

    int N, position, value;
    scanf("%d", &N);
    int X[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if (i == 0) {
            value = X[i];
            position = i;
        }
        if (X[i] < value) {
            value = X[i];
            position = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", value, position);

    return 0;
}