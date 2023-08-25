# include <stdio.h>
int main()
{
    int n;
    printf("Enter number of terms= ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int c;
    printf("%d  %d  ",a,b);
    for(int i=1; i<=n-2; i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d  ",c);
    }
    return 0;
}