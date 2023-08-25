# include <stdio.h>

int main()
{
    int a, b;

    printf("Enter A ");
    scanf("%d",&a); // storing the value of a

    printf("Enter B ");
    scanf("%d", &b); // storing the value of b

    int sum = a + b; // calculation of sum of a & b
    printf("Sum of A and B is %d",sum);
    return 0;
}