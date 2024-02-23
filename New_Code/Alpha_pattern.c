#include <stdio.h>
int main(){
    int n, a=1 , init = 65;
    printf("Enter the number of row:- ");
    scanf("%d",&n);
    //loop for number of rows
    for(int i=1; i<=n; i++){
        //loop for column
        for(int j=0; j<i; j++){
            printf("%c\t",init);//printing the alphabate
            init++;
        }
        printf("\n");
    }
    return 0;
}