#include <stdio.h>
#include <math.h>

int main() {
    int cs, t;
    scanf("%d", &t);

    for (cs = 1; cs <= t; cs++) {
        double R, n;
        scanf("%lf %lf", &R, &n);
        double theta = M_PI / n;
        double r = R * sin(theta);
        r /= (1 + sin(theta));
        printf("Case %d: %lf\n", cs, r);
    }
    return 0;
}
