#include <stdio.h>
#include <string.h>

int main () {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        char in0[50], even_odd0[6], in1[50], even_odd1[6];
        scanf("%s %s", in0, even_odd0);
        scanf(" %s %6[^\n]", in1, even_odd1);

        int j = 0;
        while (in0[j] != '\0') {
            if (in0[j] == ' ') {
                in0[j] = '\0';
                break;
            }
            j++;
        }

        j = 0;
        while (even_odd0[j] != '\0') {
            if (even_odd0[j] == '\n') {
                even_odd0[j] = '\0';
                break;
            }
            j++;
        }

        j = 0;
        while (in1[j] != '\0') {
            if (in1[j] == ' ') {
                in1[j] = '\0';
                break;
            }
            j++;
        }

        j = 0;
        while (even_odd1[j] != '\0') {
            if (even_odd1[j] == '\n') {
                even_odd1[j] = '\0';
                break;
            }
            j++;
        }

        int number0, number1, sum;
        scanf("%d %d", &number0, &number1);
        sum = number0+number1;

        if (sum % 2 == 0) {
            if (strcmp(even_odd0, "PAR") == 0) {
                printf("%s\n", in0);
            } else {
                printf("%s\n", in1);
            }
        } else {
            if (strcmp(even_odd0, "IMPAR") == 0) {
                printf("%s\n", in0);
            } else {
                printf("%s\n", in1);
            }
        }
    }

    return 0;
}