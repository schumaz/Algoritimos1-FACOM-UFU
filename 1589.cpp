#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long r0, r1;
        scanf("%lld %lld", &r0, &r1);
        printf("%d\n", ((r0*2)+(r1*2))/2);
    }

    return 0;
}