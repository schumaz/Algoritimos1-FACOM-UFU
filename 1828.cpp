#include <stdio.h>
#include <string.h>

int main () {
    int t;
    scanf("%d", &t);

    int count=1;
    for (int i = 0; i < t; i++) {
        char in0[50], in1[50];
        scanf("%s %49[^\n]", in0, in1);

        int j=0;
        while (in0[j] != '\n') {
            if ((in0[j] == '\0') || (in0[j] == ' ')) {
                in0[j] = '\0';
                break;
            }
            j++;
        }
        j=0;
        while (in1[j] != '\n') {
            if ((in1[j] == '\0') || (in1[j] == ' ')) {
                in1[j] = '\0';
                break;
            }
            j++;
        }

        if (strcmp(in0, in1) == 0) {
            printf("Caso #%d: De novo!\n", count);
        } else if ((strcmp(in0, "tesoura") == 0 && strcmp(in1, "papel") == 0) ||
                    (strcmp(in0, "papel") == 0 && strcmp(in1, "pedra") == 0) ||
                    (strcmp(in0, "pedra") == 0 && strcmp(in1, "lagarto") == 0) ||
                    (strcmp(in0, "lagarto") == 0 && strcmp(in1, "Spock") == 0) ||
                    (strcmp(in0, "Spock") == 0 && strcmp(in1, "tesoura") == 0) ||
                    (strcmp(in0, "tesoura") == 0 && strcmp(in1, "lagarto") == 0) ||
                    (strcmp(in0, "lagarto") == 0 && strcmp(in1, "papel") == 0) ||
                    (strcmp(in0, "papel") == 0 && strcmp(in1, "Spock") == 0) ||
                    (strcmp(in0, "Spock") == 0 && strcmp(in1, "pedra") == 0) ||
                    (strcmp(in0, "pedra") == 0 && strcmp(in1, "tesoura") == 0)) {
                        printf("Caso #%d: Bazinga!\n", count);
                    } else {
                        printf("Caso #%d: Raj trapaceou!\n", count);
                    }

        count++;
    }

    return 0;
}