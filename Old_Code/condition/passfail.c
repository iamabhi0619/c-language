# include <stdio.h>

int main()
{
    int m ;
    printf("Enter your marks= ");
    scanf("%d", &m);
    if (m <= 100 && m > 30)
    {
        printf("PASS");
    }
    else if (m >= 0 && m <= 30)
    {
        printf("FAIL");
    }
    else
    {
        printf("Wrong marks");
    }
    
}