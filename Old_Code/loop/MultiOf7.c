# include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter your numbe:- ");
        scanf("%d", &n);
    } 
    while (n%7 != 0);
    printf("\nYou have now entered a number multiple of 7..!!");
    printf("\n Thank You...!!");
    return 0;
}