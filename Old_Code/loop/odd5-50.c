# include <stdio.h>
int main()
{
    for(int i=5; i<=50; i++)
    {
        if(i % 2 == 0) //skip all the even number between 5 to 50
        {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}