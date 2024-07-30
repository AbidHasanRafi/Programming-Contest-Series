#include <stdio.h>
#include <math.h>

int main() {
    double a, r, pi;
    pi = 2 * acos(0);
    int TC, tc;
    tc = 1;
    scanf("%d", &TC);
    while (tc <= TC) {
        scanf("%lf", &r);
        a = r + r;
        printf("Case %d: %.2lf\n", tc, (a * a - pi * r * r));
        tc++;
    }
    return 0;
}
