#include <stdio.h>

int main()
{
    int sum = 0;

    // Outer loop to iterate from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Inner loop to iterate from 1 to the current value of i
        for (int j = 1; j <= i; j++)
        {
            sum = sum + j; // Add j to sum
        }
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
