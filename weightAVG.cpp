#include <stdio.h>

int main () {
    int i, input;
    double input0, input1, input2;

    scanf("%d", &input);

    for (i = 1; i <= input; i++) {
        scanf("%lf %lf %lf", &input0, &input1, &input2);
        printf("%.1lf\n", (input0 * 2 + input1 * 3 + input2 * 5) / 10);
    }

    return 0;
}