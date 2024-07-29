#include <stdio.h>
#include <math.h>

int main() {
    double x, cos_x = 0.0;
    int n;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double factorial = 1.0; // Variable to store factorial values
    double power_x = 1.0;   // Variable to store x^2i values

    for (int i = 0; i < n; i++) {
        // Add or subtract the term based on the series formula
        if (i > 0) {
            factorial *= (2 * i) * (2 * i - 1); // Update factorial (2i)!
            power_x *= x * x; // Update x^(2i)
        }

        // Add or subtract the term to the cosine value
        cos_x += (i % 2 == 0 ? 1 : -1) * power_x / factorial;
    }

    printf("The value of cos(%lf) using %d terms is: %lf\n", x, n, cos_x);

    return 0;
}