# include <stdio.h>
int main()
{
    int marks[5];
    int sum=0;
    printf("Enter the marks of five subject:-\n");
    for (int i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Entered marks..!!\n");
    for (int i=0; i<5; i++)
    {
        printf("%d\n",marks[i]);
    }
    for (int i=0; i<5; i++)
    {
        sum=sum+marks[i];
    }
    printf("Sum= ",sum);
    return 0;
}