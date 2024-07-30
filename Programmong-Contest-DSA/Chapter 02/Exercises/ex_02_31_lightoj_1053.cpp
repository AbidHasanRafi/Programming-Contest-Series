#include <stdio.h>

int main() {
    unsigned long int tc, TC, a[3];
    scanf("%lu", &TC);
    tc = 1;

    while (TC >= tc) {
        scanf("%lu %lu %lu", &a[0], &a[1], &a[2]);
        printf("Case %lu: ", tc);

        if (a[0] > a[1]) {
            unsigned long int temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }
        if (a[1] > a[2]) {
            unsigned long int temp = a[1];
            a[1] = a[2];
            a[2] = temp;
        }
        if (a[0] > a[1]) {
            unsigned long int temp = a[0];
            a[0] = a[1];
            a[1] = temp;
        }

        if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1])
            printf("yes\n");
        else
            printf("no\n");

        tc++;
    }
    return 0;
}
