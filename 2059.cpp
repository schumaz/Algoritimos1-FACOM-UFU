#include <stdio.h>

int main () {
    int p, j1, j2, r, a;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    //if p = 1 player 1 even, if p = 0 player 1 odd
    //if r = 1 player 1 cheated, if r = 0 he did not
    
    if (r == 1 && a == 1) {
        printf("Jogador 2 ganha!\n");
        return 0; 
    }

    if (r == 1 && a == 0) {
        printf("Jogador 1 ganha!\n");
        return 0; 
    }

    if (r == 0 && a == 1) {
        printf("Jogador 1 ganha!\n");
        return 0; 
    }

    if (r == 0 && a == 0) {
        if (p == 1 && (j1+j2) % 2 == 0) printf("Jogador 1 ganha!\n");
        if (p == 1 && (j1+j2) % 2 != 0) printf("Jogador 2 ganha!\n");
        if (p == 0 && (j1+j2) % 2 != 0) printf("Jogador 1 ganha!\n");
        if (p == 0 && (j1+j2) % 2 == 0) printf("Jogador 2 ganha!\n");
    }

    return 0;
}