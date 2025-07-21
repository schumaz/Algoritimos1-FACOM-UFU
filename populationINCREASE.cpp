#include <stdio.h>

int main () {

    int cases;
    scanf("%d", &cases);

    for (int i = 1; i <= cases; i++) {
        int PA, PB, count=0;
        double G1, G2;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        while (PA <= PB) {
            PA += (int)(PA * (G1 / 100.0));
            PB += (int)(PB * (G2 / 100.0));
            count++;

            if (count > 100) {
                break;
            }
        }

        if (count > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", count);
        }

    }

    return 0;
}