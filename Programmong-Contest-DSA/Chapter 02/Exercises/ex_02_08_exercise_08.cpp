#include <stdio.h>
#include <math.h>

int main() {
    double radius;
    double perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    perimeter = 2 * M_PI * radius;

    printf("The perimeter (circumference) of the circle is: %.2lf\n", perimeter);

    return 0;
}
