# include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter your number= ");
    scanf("%d",&n);
    while (n != 0)
    {
        int n1 = n%10;
        sum=sum+n1;
        n = n/10;
    }
    printf("Sum= %d",sum);
    return 0;
}