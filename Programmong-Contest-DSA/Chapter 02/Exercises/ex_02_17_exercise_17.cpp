#include <stdio.h>

int main() {
    int n;

    // Take user input for n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Pattern 1: Right-angled triangle
    printf("\nPattern 1:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 2: Inverted right-angled triangle (aligned to the right)
    printf("\nPattern 2:\n");
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 3: Centered pyramid
    printf("\nPattern 3:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 4: Inverted centered pyramid (numbers)
    printf("\nPattern 4:\n");
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Pattern 5: Diamond shape
    printf("\nPattern 5:\n");
    // Top half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Pattern 6: Diamond shaped with numbers
    printf("\nPattern 6:\n");
    // Top half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
