#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double angleA, angleB, angleC;

    printf("Enter the lengths of the sides of the triangle:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("The given sides do not form a valid triangle.\n");
        return 1;
    }

    angleA = acos((b*b + c*c - a*a) / (2 * b * c));
    angleB = acos((a*a + c*c - b*b) / (2 * a * c));
    angleC = acos((a*a + b*b - c*c) / (2 * a * b));

    angleA = angleA * (180.0 / M_PI);
    angleB = angleB * (180.0 / M_PI);
    angleC = angleC * (180.0 / M_PI);

    printf("The angles of the triangle are:\n");
    printf("Angle A: %.2lf degrees\n", angleA);
    printf("Angle B: %.2lf degrees\n", angleB);
    printf("Angle C: %.2lf degrees\n", angleC);

    return 0;
}
