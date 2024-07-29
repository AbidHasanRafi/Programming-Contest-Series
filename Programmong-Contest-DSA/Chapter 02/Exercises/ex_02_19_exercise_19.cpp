#include <stdio.h>
#include <math.h>

int main() {
    int n, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Special cases
    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 up to the square root of n
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0; // If divisible by i, n is not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

