#include <stdio.h>

int main() {
    int t;
    int a;
    int b;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d", &a);

        b = a / 2;
        a = a % 2 + a / 2;

        printf("%d %d\n", a, b);
    }

    return 0;
}
