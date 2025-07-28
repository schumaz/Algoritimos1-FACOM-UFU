#include <stdio.h>

int main () {

    int even[5], odd[5], input[15], evenCOUNT=0, oddCOUNT=0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &input[i]);
        if (input[i] % 2 == 0) {
            even[evenCOUNT] = input[i];
            evenCOUNT++;
        } else {
            odd[oddCOUNT] = input[i];
            oddCOUNT++;
        }
        if (evenCOUNT == 5) {
            for (int k = 0; k < 5; k++) {
                printf("par[%d] = %d\n", k, even[k]);
            }
            evenCOUNT = 0;
        }
        if (oddCOUNT == 5) {
            for (int k = 0; k < 5; k++) {
                printf("impar[%d] = %d\n", k, odd[k]);
            }
            oddCOUNT = 0;
        }
    }

    for (int i = 0; i < oddCOUNT; i++) {
        printf("impar[%d] = %d\n", i, odd[i]);
    }

    for (int i = 0; i < evenCOUNT; i++) {
        printf("par[%d] = %d\n", i, even[i]);
    }

    return 0;
}