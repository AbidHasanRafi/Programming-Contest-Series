#include <stdio.h>

int main() {
    /*
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The larger number is %d.\n", num1);
    } else if (num2 > num1) {
        printf("The larger number is %d.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
    */

    int num1, num2, num3;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %d.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %d.\n", num2);
    } else {
        printf("The largest number is %d.\n", num3);
    }

    return 0;
}
