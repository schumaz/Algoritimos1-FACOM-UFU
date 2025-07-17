#include <stdio.h>

int main () {

    int input0, input1;
    scanf("%d %d", &input0, &input1);
    if (input0 > input1) {
        int temp;
        temp = input1;
        input1 = input0;
        input0 = temp;
    }

    input0 += 1;
    for (int i = input0; i < input1; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}