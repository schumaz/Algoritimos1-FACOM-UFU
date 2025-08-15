#include <stdio.h>
#include <string.h>

int main () {
    int temp=0, results[3] = {0}, sum=0;
    char a[8];

    for (int i = 0; ; ) {
        if (temp == 3) {
            break;
        }

        fgets(a, 8, stdin);

        int j=0;
        while(a[j] != '\0') {
            if (a[j] == '\n') {
                a[j] = '\0';
                break;
            }
            j++;
        }

        if (strcmp(a, "caw") == 0) {
            results[temp] = sum;
            sum = 0;
            temp++;
        } else if (strcmp(a, "caw caw") == 0) {
            results[temp] = sum;
            sum = 0;
            temp++;
        }

        if (strcmp(a, "--*") == 0) {
            sum += 1;
        } else if (strcmp(a, "*--") == 0) {
            sum += 4;
        } else if (strcmp(a, "**-") == 0) {
            sum += 6;
        } else if (strcmp(a, "***") == 0) {
            sum += 7;
        } else if (strcmp(a, "-**") == 0) {
            sum += 3;
        } else if (strcmp(a, "*-*") == 0) {
            sum += 5;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}