#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double s;
    double area;

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

    s = ((a+b+c)/2);
    area= sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of the triangle is: %.2lf\n", area);

    return 0;
}
