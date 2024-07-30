#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, t, me, li;
    scanf("%d", &T);
    t = 1;

    while (T >= t) {
        scanf("%d %d", &me, &li);
        printf("Case %d: %d\n", t, (int)abs(me - li) * 4 + me * 4 + 19);
        t++;
    }
    return 0;
}
