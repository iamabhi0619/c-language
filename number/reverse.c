# include <stdio.h>
int revarr (int arr[], int n);
int main() 
{
    int n;
    printf("Enter the length of an array:- \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the value in array:-\n");
    for(int i=0; i<n; i++)
    {
        printf("\t");
        scanf("%d", &arr[i]);
    }
    revarr(arr, n);
}
int revarr (int arrr[], int n)
{
    for (int i=0; i<n/2; i++)
    {
        int FirstValue = arrr[i];
        int SecondValue = arrr[n-i-1];
        arrr[i] = SecondValue;
        arrr[n-i-1] = FirstValue;
    }
     for(int i=0; i<n; i++) 
    { 
        printf("%d\t",arrr[i]); 
    } 
    printf("\n");
}