# include <stdio.h>
int main()
{
    int n;
    printf("Enter N:- ");
    scanf("%d", &n);
    for (int i=1; i<=10; i++)
    {
        int p = n*i;
        printf("%d * %d = %d",n,i,p);
        printf("\n");
    }
    return 0;
}