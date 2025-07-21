#include <stdio.h>

int main () {

    int cases;
    scanf("%d", &cases);

    for (int i = 1; i <= cases; i++) {
        int input, sum=0;
        scanf("%d", &input);
        for (int k = 1; k < input; k++) {
            if (input % k == 0) {
                sum += k;
            }
        }
        if (sum == input) {
            printf("%d eh perfeito\n", input);
        } else {
            printf("%d nao eh perfeito\n", input);
        }
    }

    return 0;
}