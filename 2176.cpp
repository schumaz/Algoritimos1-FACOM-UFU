#include <stdio.h>
#include <cmath>
#include <string.h>
#include <ctype.h>

int main() {
    
    char input[102];
    scanf("%s", input);

    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '1') count++;
    }

    if (count % 2 == 0) printf("%s0\n", input);
    else printf("%s1\n", input);

    return 0;
}