#include <stdio.h>
#include <string.h>

int main () {
    int in;
    scanf("%d", &in);

    for (int i = 0; i < in; i++) {
        char phrase[10002];
        scanf("%s", phrase);
        int size = strlen(phrase);
        double temp = 0.00;
        for (int j = 0; j < size; j++) {
            temp += 0.01;
        }
        printf("%.2lf\n", temp);
    }

    return 0;
}