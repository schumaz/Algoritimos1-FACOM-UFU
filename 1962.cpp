#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        int temp;
        scanf("%d", &temp);

        int year = 2015 - temp;

        if (year > 0) {
            printf("%d D.C.\n", year);
        } else {
            printf("%d A.C.\n", 1 - year);
        }
    }

    return 0;
}