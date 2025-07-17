#include <stdio.h>

int main () {
    int alcohol=0, gasoline=0, disel=0;

    for (int i = 0; ; i++) {
        int dump;
        scanf("%d", &dump);
        if (dump == 1) {
            alcohol++;
        } else if (dump == 2) {
            gasoline++;
        } else if (dump == 3) {
            disel++;
        } else if (dump == 4) {
            break;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gasoline, disel);

    return 0;
}