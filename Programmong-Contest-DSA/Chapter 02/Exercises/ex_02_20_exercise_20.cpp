#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial is %lld.\n", factorial);

    return 0;
}

