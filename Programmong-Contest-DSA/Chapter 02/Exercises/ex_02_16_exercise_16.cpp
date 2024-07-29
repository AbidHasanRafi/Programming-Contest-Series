#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // 1. Sum of first n natural numbers
    int sum_natural = n * (n + 1) / 2;
    printf("1. Sum of first %d natural numbers: %d\n", n, sum_natural);

    // 2. Sum of squares of first n natural numbers
    int sum_squares = n * (n + 1) * (2 * n + 1) / 6;
    printf("2. Sum of squares of first %d natural numbers: %d\n", n, sum_squares);

    // 3. Sum of cubes of first n natural numbers
    int sum_cubes = sum_natural * sum_natural; // Sum of cubes is the square of the sum of natural numbers
    printf("3. Sum of cubes of first %d natural numbers: %d\n", n, sum_cubes);

    // 4. Sum of series: 1 + (2 + 3) + (4 + 5 + 6) + ... + nth term
    int sum_series = 0;
    int current_number = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            sum_series += current_number++;
        }
    }
    printf("4. Sum of series 1 + (2 + 3) + (4 + 5 + 6) + ...: %d\n", sum_series);

    // 5. Alternating sum series: 1 - 2 + 3 - 4 + ... nth term
    int alternating_sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            alternating_sum -= i;
        } else {
            alternating_sum += i;
        }
    }
    printf("5. Alternating sum series 1 - 2 + 3 - 4 + ...: %d\n", alternating_sum);

    // 6. Complex series: 1 + (2 + 3*4) + (5 + 6*7 + 8*9*10) + ... + nth term
    int complex_series = 0;
    int start = 1;
    for (int i = 1; i <= n; i++) {
        int product = 1;
        for (int j = 0; j < i; j++) {
            product *= (start + j);
        }
        complex_series += product;
        start += i;
    }
    printf("6. Complex series 1 + (2 + 3*4) + (5 + 6*7 + 8*9*10) + ...: %d\n", complex_series);

    // 7. Weighted sum series: 1*n + 2*(n-1) + ... + n*1
    int weighted_sum = 0;
    for (int i = 1; i <= n; i++) {
        weighted_sum += i * (n - i + 1);
    }
    printf("7. Weighted sum series 1*n + 2*(n-1) + ... + n*1: %d\n", weighted_sum);

    return 0;
}
