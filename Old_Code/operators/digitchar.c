# include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character :- ");
    scanf("%d", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("It is digit \n");
    }
    else
    {
        printf("It is not a digit\n");
    }
    return 0;
}