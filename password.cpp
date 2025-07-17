#include <stdio.h>

int main () {

    for (int i =0; ; i++) {
        int pswrd;
        scanf("%d", &pswrd);
        if (pswrd == 2002) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}