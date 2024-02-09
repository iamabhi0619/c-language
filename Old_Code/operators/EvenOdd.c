# include <stdio.h>

int main()
{
    /* Output 
    even -> 1
    odd -> 0*/
    int x;
    printf("Enter your number ");
    scanf("%d",x);

    printf("%d", x%2 == 0);
}