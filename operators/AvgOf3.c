# include <stdio.h>

int main()
{
    int a,b,c;
    float avg;
    printf("\nEnter 1st number= ");
    scanf("%d",a);

    printf("\nEnter 2nd number= ");
    scanf("%d",b);

    printf("\nEnter 3rd number= ");
    scanf("%d",c);

    avg = (a+b+c)/3;
    printf("Average = %d", avg);

    return 0;
}