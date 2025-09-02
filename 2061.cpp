#include <stdio.h>
#include <string.h>

int main () {
    int amount_tabs, amount_cases;
    scanf("%d %d", &amount_tabs, &amount_cases);
    
    for (int i = 0; i < amount_cases; i++) {
        char input[7];
        scanf(" %s", input);

        if (strcmp(input, "fechou") == 0) amount_tabs += 1;
        if (strcmp(input, "clicou") == 0) amount_tabs -= 1;
    }

    printf("%d\n", amount_tabs);

    return 0;
}