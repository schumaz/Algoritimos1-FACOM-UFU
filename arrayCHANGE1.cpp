#include <stdio.h>

int main () {

    int N[20];

    for (int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    
    int temp, k=19;
    for (int i = 0; i <= 10; i++) {
        temp = N[i];
        N[i] = N[k];
        N[k] = temp;
        k--;
    }

    temp = N[9];
    N[9] = N[10];
    N[10] = temp;

    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}