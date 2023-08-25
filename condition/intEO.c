#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number= ");
    scanf("%d", &n);
    if(n >=0 )
    {
        printf("It's a positive number");
        if (n % 2 == 0)
        {
            printf(" And a even number");
        }
        else
        {
            printf(" And a odd number");
        }
    }
    else
    {
        printf("It's a nevative number");
    }
    return 0;
}