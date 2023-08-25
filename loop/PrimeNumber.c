# include <stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter your number :- ");
    scanf("%d", &n);
    for(int i=2; i<n; i++)
    {
        if(n % i == 0)
        {
            flag++ ;
        }
    }
    if (flag == 0)
    {
        printf("It's a Prime Number");
    }
    else
    {
        printf("It's not a Prime Number");
    }
    return 0;
}