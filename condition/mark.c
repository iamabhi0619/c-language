# include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d", &marks);

    if(marks >= 90)
    {
        printf("A+");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("A");
    }
    else if (marks < 80 && marks >= 60)
    {
        printf("B");
    }
    else if (marks < 60 && marks >= 40)
    {
        printf("C");
    }
    else if (marks < 40 && marks >= 20)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}