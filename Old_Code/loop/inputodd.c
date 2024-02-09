# include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter your number:- ");
        scanf("%d", &n);
    }
    while (n%2 == 0);
    if (n%2 == 1)
    {
        printf("\nYou have entered a Odd number..!!");
    }
    return 0 ;
}