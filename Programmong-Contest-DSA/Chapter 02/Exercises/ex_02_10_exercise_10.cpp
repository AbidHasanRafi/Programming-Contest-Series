#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double area;

    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);


    area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    printf("The area of the triangle is: %.2lf\n", area);

    return 0;
}
