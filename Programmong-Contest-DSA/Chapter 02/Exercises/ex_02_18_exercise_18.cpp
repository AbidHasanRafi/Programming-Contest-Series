#include <stdio.h>

int main() {
    long long n, count = 0, current = 1;

    printf("Enter a number (n < 1000000000): ");
    scanf("%lld", &n);

    if (n < 1 || n >= 1000000000) {
        printf("Please enter a number less than 1,000,000,000 and greater than 0.\n");
        return 1;
    }

    while (count < n) {
        int num = current;
        int original = num, reversed = 0, remainder;

        // Reverse the number
        while (num > 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        // Check if the number is a palindrome
        if (original == reversed) {
            count++;
            if (count == n) {
                printf("The %lldth palindrome number is %d.\n", n, current);
                break;
            }
        }

        current++;
    }

    return 0;
}

