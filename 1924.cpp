#include <stdio.h>
#include <string.h>

int main () {
    int a;
    scanf("%d%*c", &a);

    for (int i = 0; i < a; i++) {
        char input[121];
        scanf("%*[^\n]%*c");
    }

    printf("Ciencia da Computacao\n");

    return 0;
}