# include <stdio.h>
int main()
{
    int n, sum=0, sr=0;
    printf("Enter n :- ");
    scanf("%d", &n);
    for(int i = n ; i >= 1; i--)
    {
        printf("\n %d", i);
    }
    for(int i=1; i<=n; i++)
    {
        sum = sum+i;
    }
    int s = sum;
    while(s != 0)
    {
        int l=s%10;
        sr = (sr*10) + l;
        s=s/10;
    }
    printf("\nSUM= %d \n",sum);
    printf("SUM Reverse= %d \n",sr);
    return 0;
}