#include <stdio.h>

int main () {

    int input, sum=0, count=0;
    for (int i = 1; ; ) {
        scanf("%d", &input);
        if (input < 0) {
            break;
        } else {
            sum += input;
            count++;
        }
    }
    printf("%.2f\n", (float)sum/count);

    return 0;
}