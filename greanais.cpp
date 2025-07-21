#include <stdio.h>

int main () {

    int Inter_goals, Gremio_goals;
    scanf ("%d %d", &Inter_goals, &Gremio_goals);    

    int response, Inter_wins=0, Gremio_wins=0, Grenais=0, ties=0;
    for (int i = 1; ; ) {
        Grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &response);
        if (Inter_goals > Gremio_goals) {
            Inter_wins++;
        } else if (Gremio_goals > Inter_goals) {
            Gremio_wins++;
        } else {
            ties++;
        }
        if (response == 2) {
            break;
        }
        scanf ("%d %d", &Inter_goals, &Gremio_goals);
    }

    if (Inter_wins > Gremio_wins) {
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n", Grenais, Inter_wins, Gremio_wins, ties);
    } else {
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nGremio venceu mais\n", Grenais, Inter_wins, Gremio_wins, ties);
    }

    return 0;
}