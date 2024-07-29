#include <stdio.h>

int main() {
    int n, r;
    long long nCr;
    long long factorial_n = 1, factorial_r = 1, factorial_n_minus_r = 1;

    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);

    // Check for valid input
    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input. Ensure that n >= r >= 0.\n");
        return 1;
    }

    // Calculate factorial of n
    for (int i = 1; i <= n; i++) {
        factorial_n *= i;
    }

    // Calculate factorial of r
    for (int i = 1; i <= r; i++) {
        factorial_r *= i;
    }

    // Calculate factorial of (n - r)
    for (int i = 1; i <= (n - r); i++) {
        factorial_n_minus_r *= i;
    }

    // Calculate nCr using the formula: nCr = n! / (r! * (n - r)!)
    nCr = factorial_n / (factorial_r * factorial_n_minus_r);

    printf("The value of %dC%d is %lld.\n", n, r, nCr);

    return 0;
}
