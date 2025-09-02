#include <stdio.h>
#include <string.h>

int main () {
    int in;
    scanf("%d", &in);
    
    for (int i = 0; i < in; i++) {
        char j1[50], j2[50];
        scanf("%s", j1);
        scanf(" %s", j2);

        if (strcmp(j1, "ataque") == 0 && strcmp(j2, "pedra") == 0 ) printf("Jogador 1 venceu\n");
        if (strcmp(j2, "ataque") == 0 && strcmp(j1, "pedra") == 0 ) printf("Jogador 2 venceu\n");
        
        if (strcmp(j1, "pedra") == 0 && strcmp(j2, "papel") == 0 ) printf("Jogador 1 venceu\n");
        if (strcmp(j2, "pedra") == 0 && strcmp(j1, "papel") == 0 ) printf("Jogador 2 venceu\n");

        if (strcmp(j1, "ataque") == 0 && strcmp(j2, "papel") == 0 ) printf("Jogador 1 venceu\n");
        if (strcmp(j1, "papel") == 0 && strcmp(j2, "ataque") == 0 ) printf("Jogador 2 venceu\n");

        if (strcmp(j1, "papel") == 0 && strcmp(j2, "papel") == 0 ) printf("Ambos venceram\n");
        if (strcmp(j1, "pedra") == 0 && strcmp(j2, "pedra") == 0 ) printf("Sem ganhador\n");
        if (strcmp(j1, "ataque") == 0 && strcmp(j2, "ataque") == 0 ) printf("Aniquilacao mutua\n");
    }

    return 0;
}