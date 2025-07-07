#include <stdio.h>

int main () {
    int input0, input1, sum0=0, i;

    scanf("%d %d", &input0, &input1);

    if (input0 > input1) {
        int temp;
        temp = input0;
        input0 = input1;
        input1 = temp;
    }

    if (input0 == input1) {
        printf("0");
        return 0;
    }

    for (i = input0 + 1; i < input1; i++) {
        if (i % 2 != 0) {
            sum0 += i;
        }
    }

    printf("%d\n", sum0);

    return 0;
}