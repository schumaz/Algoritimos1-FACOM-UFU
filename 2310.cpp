#include <stdio.h>

int main () {

    int in;
    scanf("%d", &in);

    int s = 0, b = 0, a = 0;
    int ss = 0, bb = 0, aa = 0;
    for (int i = 0; i < in; i++) {
        int  saque = 0, bloqueio = 0, ataque = 0, saque_total = 0, bloqueio_total = 0, ataque_total = 0;
        scanf("%*s");
        scanf("%d %d %d", &saque_total, &bloqueio_total, &ataque_total);
        s += saque_total;
        b += bloqueio_total;
        a += ataque_total;
        scanf("%d %d %d", &saque, &bloqueio, &ataque);
        ss += saque;
        bb += bloqueio;
        aa += ataque;
    }

    printf("Pontos de Saque: %.2f %%.\n", ((float)ss/s)*100.0);
    printf("Pontos de Bloqueio: %.2f %%.\n", ((float)bb/b)*100.0);
    printf("Pontos de Ataque: %.2f %%.\n", ((float)aa/a)*100.0);
    

    return 0;
}