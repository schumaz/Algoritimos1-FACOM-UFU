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

    int sum=0;
    for (int i = input0; i <= input1 ; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}