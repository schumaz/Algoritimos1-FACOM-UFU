#include <stdio.h>

int main () {

    long long input[10];
    scanf("%lld", &input[0]);
    for (int i = 0; i < 10; i++) {
        if (i != 0) {
            input[i] = input[i-1]*2;
            printf("N[%d] = %lld\n", i, input[i]);
        } else {
            printf("N[%d] = %lld\n", i, input[i]);
        }
    }    

    return 0;
}