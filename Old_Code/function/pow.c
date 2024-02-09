# include <stdio.h>
int pw(int a, int b)
{
    int p=1;
    int i=b;
    for(i; i>0; i--)
    {
        p=p*a;
    }
    return p;
}
int main()
{
    int n1, n2;
    printf("Enter base value= ");
    scanf("%d",&n1);
    printf("Enter power value= ");
    scanf("%d",&n2);
    printf("%d power of %d is %d",n1,n2,pw(n1,n2));
    return 0;
}