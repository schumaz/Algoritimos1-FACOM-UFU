#include <stdio.h>

#define MAX_FARMS 1000001

long long farms[MAX_FARMS];
int visited[MAX_FARMS];

int main () {
    int a;
    scanf("%d", &a);

    long long total_sheep = 0;

    for (int i = 0; i < a; i++) {
        scanf("%lld", &farms[i]);
        visited[i] = 0;
        total_sheep += farms[i];
    }

    long long stolen_sheep = 0;
    int attacked_farms = 0;
    int i = 0;

    while (i >= 0 && i < a) {
        if (visited[i] == 0) {
            visited[i] = 1;
        }

        long long current_sheep = farms[i];

        if (farms[i] > 0) {
            farms[i]--;
            stolen_sheep++;
        }

        if (current_sheep % 2 != 0) {
            i++;
        } else {
            i--;
        }
    }

    for (int j = 0; j < a; j++) {
        if (visited[j] == 1) {
            attacked_farms++;
        }
    }

    printf("%d %lld\n", attacked_farms, total_sheep - stolen_sheep);

    return 0;
}
