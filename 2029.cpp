#include <stdio.h>

int main () {
    double v, d;
    const float pi = 3.14;
    while (scanf("%lf %lf", &v, &d) != EOF) {
        double raio = d/2.0;
        printf("ALTURA = %.2lf\n", v/(pi*raio*raio));
        printf("AREA = %.2lf\n", pi*raio*raio);
    }

    return 0;
}