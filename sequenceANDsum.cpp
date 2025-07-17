#include <stdio.h>

int main () {

    for (int i = 0; ; i++) {
        int M, N, sum=0;
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0) {
            break;
        }
        if (M > N) {
            int temp;
            temp = N;
            N = M;
            M = temp;
        }
        for (int k = M; k <= N; k++) {
            printf("%d ", k);
            sum += k;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}