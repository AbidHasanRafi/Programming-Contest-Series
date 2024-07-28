#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i * (n - i + 1);
    }

    printf("The sum of the summation is: %d.\n", sum);

    return 0;
}

