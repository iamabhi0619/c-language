# include <stdio.h>

int main()
{
    int a, b;
    printf("Enter A:- ");
    scanf("%d", &a);
    printf("Enter B:- ");
    scanf("%d", &b);
    if(a < b)
    printf("%d is smallest",a);
    else
    printf("%d is smallest",b);
    return 0;
}