#include <stdio.h>

int main(void) {
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");

    for (int i = 0; i <= 15; i++) {
        if (i < 8) {
            printf("|      %d    |    %o    |       %X       |\n", i, i, i);
        } else if (i < 10) {
            printf("|      %d    |   %o    |       %X       |\n", i, i, i);
        } else {
            printf("|     %d    |   %o    |       %X       |\n", i, i, i);
        }
    }

    printf("---------------------------------------\n");
    return 0;
}
