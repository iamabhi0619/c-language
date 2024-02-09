# include <stdio.h>
void printnumber(int arr[], int n);
int main() 
{ 
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printnumber(num,7);
    return 0;
}
void printnumber(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}