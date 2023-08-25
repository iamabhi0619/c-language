# include <stdio.h>
//count odd number
//not a user input
int countOdd(int arr[], int n);
int main() 
{ 
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = countOdd(num, 9);
    printf("number of odd number= %d",n);
    return 0;
}
int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i=0; i<n; i++)
    {
        if(arr[i]%2 != 0)
        {
            count++ ;
        }
    }
    return count ;
}