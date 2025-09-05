#include <stdio.h>
#include <string.h>

int main () {
    int n1, n2;
    int notas[] = {2, 5, 10, 20, 50, 100};

    while (scanf("%d %d", &n1, &n2) == 2) {
        if (n1 == 0 && n2 == 0) return 0;
        int troco = n2 - n1, flag = 0;
        
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (i != j) {
                    if (notas[i] + notas[j] == troco) {
                        flag = 1;
                    }
                }
            }
        }
        
        if (flag == 1) printf("possible\n");
        if (flag == 0) printf("impossible\n");
    } 

    return 0;
}