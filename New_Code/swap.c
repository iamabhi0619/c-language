#include <stdio.h>
int main(){
    int first_number, second_number, flag;
    printf("Enter the First Number:- ");
    scanf("%d", &first_number);
    printf("Enter the Second Number:- ");
    scanf("%d",&second_number);

    //swapping the numbers
    flag = first_number;
    first_number = second_number;
    second_number = flag;
    
    printf("After Swapping..!!\n");
    printf("First Number:- %d\n",first_number);
    printf("Second Number:- %d\n",second_number);
    return 0;
}