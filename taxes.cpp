#include <stdio.h>

int main () {
    double input;

    scanf ("%lf", &input);

    if (input >= 0 && input <=2000.00) {
        printf("Isento\n");
    } else if (input >= 2000.01 && input <=3000.00) {
        printf("R$ %.2lf\n", (input-2000.01)*0.08);
    } else if (input >= 3000.01 && input <=4500.00) {
        printf("R$ %.2lf\n", 79.9992 + (input-3000.01)*0.18);
    } else {
        printf("R$ %.2lf\n", 349.9974 + (input-4500.00)*0.28);
    }

    return 0;
}