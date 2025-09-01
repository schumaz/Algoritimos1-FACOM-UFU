#include <stdio.h>
#include <string.h>

int main () {
    char a[12];
    scanf("%s", a);
    a[strcspn(a, "\n")] = '\0';

    for (int i = strlen(a) - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}
