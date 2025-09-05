#include <stdio.h>

int main () {
    int in0, in1;
    scanf("%d %d", &in0, &in1);

    int temp = in0 + in1;

    if (temp % 2 == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}