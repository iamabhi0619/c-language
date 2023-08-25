# include <stdio.h>
int main()
{
    int n, fact=1;
    printf("Enter your number:- ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        fact *= i; //fact = fact * i;
    }
    printf("\nFactorial= %d", fact);
    return 0;
}