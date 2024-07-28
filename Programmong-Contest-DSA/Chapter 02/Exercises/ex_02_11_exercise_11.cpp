#include <stdio.h>

int main() {
    int n, count = 0, current = 1;

    printf("Enter a number (n < 100): ");
    scanf("%d", &n);

    if (n < 1 || n >= 100) {
        printf("Please enter a number less than 100 and greater than 0.\n");
        return 1;
    }

    while (count < n) {
        int num = current;
        int original = num, reversed = 0, remainder;

        while (num > 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        if (original == reversed) {
            count++;
            if (count == n) {
                printf("The %dth palindrome number is %d.\n", n, current);
                break;
            }
        }

        current++;
    }

    return 0;
}
