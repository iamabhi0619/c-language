# include <stdio.h>
int main()
{
    int n;
    printf("Enter your number :- ");
    scanf("%d", &n);
    for(int i=10; i>=1; i--)
    {
        int p = n * i;
        printf("\n %d * %d = %d",n,i,p);
    }
    return 0;
}