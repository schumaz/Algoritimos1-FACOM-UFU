#include <stdio.h>
#include <cmath>
#include <string.h>

int main() {
    
    char name[32];
    
    for (int i = 0; i < 10; i++) {
        scanf("%s", name);
        if (i == 2 || i == 6 || i == 8) printf("%s\n", name);
    }

    return 0;
}