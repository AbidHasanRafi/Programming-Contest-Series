#include <stdio.h>

int main()
{
    // Print odd numbers from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0) continue; // Skip even numbers
        printf("%d\n", i);
    }
    printf("\n");

    // Print numbers 1, 2, 3 and stop
    for (int i = 1; i <= 10; i++)
    {
        if (i > 3) break; // Stop the loop when i is greater than 3
        printf("%d\n", i);
    }
    printf("\n");

    // Take input until the input is 0
    // Use EOF to detect end of file
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a == 0) break; // Stop the loop if input is 0
        printf("%d\n", a);
    }

    // Shortened version of input handling
    while (scanf("%d", &a) != EOF && a != 0)
    {
        printf("%d\n", a);
    }

    return 0;
}
