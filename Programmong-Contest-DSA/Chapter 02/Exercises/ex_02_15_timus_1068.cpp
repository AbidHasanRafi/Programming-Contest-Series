#include<stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);

    int  sum = 0;
    if ( n <= 0 )
    {
        sum = (n*(1-n)/2)+1;
    }
    else
    {
        sum = (n*(n+1))/2;
    }
    printf ("%d\n", sum);

    return 0;
}
