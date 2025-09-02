#include <stdio.h>

int main () {
    int in, count = 1;
    while (scanf("%d", &in) != EOF) {
        int numbers = 1;
        if (in == 0) {
            printf("Caso %d: 1 numero\n0\n\n", count);
            count++;
            continue;
        }

        for (int i = 0; i <= in; i++) {
            for (int j = 0; j < i; j++) {
                numbers++;
            }
        }

        printf("Caso %d: %d numeros\n0 ", count, numbers);

        for (int i = 0; i <= in; i++) {
            for (int j = 0; j < i; j++) {
                if (i == in && j == i -1) {
                    printf("%d", i);
                } else {
                    printf("%d ", i);
                }
            }
        }
        printf("\n\n");

        count++;
    }

    return 0;
}