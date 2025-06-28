#include <stdio.h>

int main () {
    int q, w, e, qC, wC, eC;

    scanf("%d %d %d", &q, &w, &e);

    qC = q, wC = w, eC = e;

    if (q > w) {
        int temp = w;
        w = q;
        q = temp;
    }
    if (w > e) {
        int temp = e;
        e = w;
        w = temp;
    }
    if (e < w) {
        int temp = e;
        e = w;
        w = temp;
    }
    if (w < q) {
        int temp = q;
        q = w;
        w = temp;
    }

    printf("%d\n%d\n%d", q, w, e);
    printf("\n\n%d\n%d\n%d\n", qC, wC, eC);

    return 0;
}