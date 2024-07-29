#include<stdio.h>

int main()
{
    for(int i = 1; i<=10; i++) printf("%d\n", i);
    for(int i = 10; i>=1; i--) printf("%d\n", i);
    for(int i = 1; i<=10; i+=2) printf("%d\n", i);
    int i=5;
    while(i<=7){printf("%d\n", i*2); i++;}
    return 0;
}
