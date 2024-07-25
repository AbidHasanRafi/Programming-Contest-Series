#include <stdio.h>
#include <math.h>
#include <algorithm>

int main() {
    double n;
    double closest_int;

    printf("Enter the number: ");
    scanf("%lf", &n);

    if( n < 0 ){
        printf("The given is negative.\n");
        return 1;
    }

    closest_int = round(sqrt(n));

    printf("The closest integer is: %.2lf\n", closest_int);

    return 0;
}
