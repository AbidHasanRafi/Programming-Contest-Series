#include <stdio.h>

int main() {
    int T, t, x, n, i;
    unsigned long long int s;
    scanf("%d", &T);
    t = 1;
    while (t <= T) {
        s = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x >= 0) s += x;
        }
        printf("Case %d: %llu\n", t, s);
        t++;
    }
    return 0;
}

