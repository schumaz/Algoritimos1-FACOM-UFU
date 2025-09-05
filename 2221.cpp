#include <stdio.h>
#include <string.h>

int main () {
    int in;
    scanf("%d", &in);

    for (int i = 0; i < in; i++) {
        int b, a0, d0, l0, a1, d1, l1;
        double value0, value1;
        scanf("%d", &b);
        scanf("%d %d %d", &a0, &d0, &l0);
        scanf("%d %d %d", &a1, &d1, &l1);

        value0 = (double)(a0 + d0) / 2;
        if (l0 % 2 == 0) {
            value0 += b;
        }
        value1 = (double)(a1 + d1) / 2;
        if (l1 % 2 == 0) {
            value1 += b;
        }

        if (value0 == value1) printf("Empate\n");
        if (value0 > value1) printf("Dabriel\n");
        if (value1 > value0) printf("Guarte\n");
    }

    return 0;
}