#include <stdio.h>

int main () {
    int i, input, temp;

    scanf("%d", &input);

    for (i = 1; i <= input; i++) {
        scanf("%d", &temp);
        if (temp == 0) {
            printf("NULL\n");
        } else if (temp > 0 && temp % 2 == 0) {
            printf("EVEN POSITIVE\n");
        } else if (temp < 0 && temp % 2 == 0) {
            printf("EVEN NEGATIVE\n");
        } else if (temp > 0 && temp % 2 != 0) {
            printf("ODD POSITIVE\n");
        } else if (temp < 0 && temp % 2 != 0) {
            printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}