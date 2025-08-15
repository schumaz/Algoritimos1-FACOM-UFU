#include <stdio.h>
#include <string.h>

int main () {
    int a;
    scanf("%d", &a);
    int results[a] = {0};
    
    for (int i = 0; i < a; i++) {
        char person[30];
        scanf("%s %*d", person);

        int j = 0;
        while (person[j] != '\0') {
            if (person[j] == ' ') {
                person[j] = '\0';
                break;
            }
            j++;
        }

        if (strcmp(person, "Thor") == 0) {
            results[i] = 1;
        }
    }

    for (int i = 0; i < a; i++) {
        if (results[i] == 1) {
            printf("%c\n", 'Y');
        } else {
            printf("%c\n", 'N');
        }
    }

    return 0;
}