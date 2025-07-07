#include <stdio.h>

int main () {
    int input, i;

    scanf("%d", &input);

    for (i = 1; i <=10; i++) {
        printf("%d x %d = %d\n", i, input, i*input);
    }

    return 0;
}