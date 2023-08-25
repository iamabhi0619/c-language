# include <stdio.h>

int sum(int n)
{
    int summ1 = sum(n-1);
    int sum = summ1 + n;
    return sum;
}
int main()
{
    int a ;
    printf("Enter your number= ");
    scanf("%d", &a);
    int s = sum (a);
    printf("Sum= %d",s);
    return 0;
}