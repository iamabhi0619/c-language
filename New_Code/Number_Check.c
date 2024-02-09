#include <stdio.h>
int main(){
    int number;
    printf("Enter the Number:- ");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("Number is ZERO\n");
    }
    else if(number > 0){
        printf("Number is POSITIVE..!!\n");
    }
    else{
        printf("Number is NEGATIVE..!!\n");
    }
    return 0;
}