#include <stdio.h>

int main()
{
    int x, cnt;

    // Part 1: Count how many times 100 can be divided by 2
    x = 100;
    cnt = 0;
    while (x % 2 == 0)
    {
        x = x / 2;
        cnt++;
    }
    printf("Count of division by 2: %d\n", cnt);

    // Part 2: Find the largest power of 2 less than 1000
    x = 1;
    while (x * 2 < 1000)
    {
        x *= 2;
    }
    printf("Largest power of 2 less than 1000: %d\n", x);

    // Part 3: Using a for loop to achieve the same as Part 2
    for (x = 1; x * 2 < 1000; x *= 2)
        ; // Empty loop body, does the same as the while loop

    printf("Largest power of 2 less than 1000 (using for loop): %d\n", x);

    return 0;
}
