# include <stdio.h>

void indian();
void french();

void indian()
{
    printf("NAMASTE...!!\n");
}

void french()
{
    printf("BONJOUR...!!\n");
}

int main()
{
    int n;
    printf("Enter 1 if Indian\n");
    printf("Enter 2 if French\n");
    scanf("%d", &n);
    if(n == 1)
    {
        indian();
    }
    else if(n == 2)
    {
        french();
    }
    else
    {
        printf("Wrong Choice");
    }
    return 0;
}