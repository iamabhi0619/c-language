#include <stdio.h>
int main(){
    int a;
    printf("Enter the Number:- ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("It's a EVEN Number..!!\n");
    }
    else{
        printf("It's a ODD Number..!!\n");
    }
    return 0;
}