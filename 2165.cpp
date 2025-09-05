#include <stdio.h>
#include <string.h>

int main () {
    char in[502];
    fgets(in, 502, stdin);
    in[strcspn(in, "\n")] = '\0';
    int size = strlen(in);
    
    if (size <= 140) {
        printf("TWEET\n");
    } else {
        printf("MUTE\n");
    }

    return 0;
}