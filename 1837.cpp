#include <stdio.h>
#include <cmath>

int main () {
    int t0, t1;
    scanf("%d %d", &t0, &t1);

    int r, q;
    q = t0/t1;
    r = t0 % t1;
    if (r < 0) {
        r += abs(t1);
        if (t1 > 0) {
            q -= 1;
        } else {
            q += 1;
        }
    }

    printf("%d %d\n", q, r);

    return 0;
}