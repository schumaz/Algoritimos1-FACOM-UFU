#include <stdio.h>

int main () {

    int temp;
    scanf("%d", &temp);
    
    int one=1, two=1, three=1;
    for (int i = 1; i <= temp; i++) {
        for (int k = 1; k <= 2; k++) {
            printf("%d %d %d\n", one, two, three);
            if (k == 1) {
                two = one * one + 1;
                three = one * one * one + 1;
            }
        }
        one += 1;
        two = one * one;
        three = one * one * one;
    }

    return 0;
}