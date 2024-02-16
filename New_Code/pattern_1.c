#include <stdio.h>
int main(){
    int n, a=1;
    printf("Enter the number of row:- ");
    scanf("%d",&n);
    //loop for number of rows
    for(int i=1; i<=n; i++){
        a = i;//updating the value of a to row number
        //loop for column
        for(int j=0; j<i; j++){
            printf("%d\t",a);//printing the numbers
            a++;
        }
        printf("\n");
    }
    return 0;
}
