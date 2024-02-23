#include <stdio.h>
int main(){
    int n, a=1 , init, temp;
    printf("Enter the number of row:- ");
    scanf("%d",&n);
    temp = 64+n;
    init = temp;
    //loop for number of rows
    for(int i=1; i<=n; i++){
        //loop for column
        for(int j=0; j<i; j++){
            printf("%c\t",init);//printing the pattern
            init++;
        }
        printf("\n");
        init = temp - i;//reinit to stating index acc to row number
    }
    return 0;
}
