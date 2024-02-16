#include <stdio.h>
int main(){
    int n, a=1;
    printf("Enter the number of row:- ");
    scanf("%d",&n);
    //loop for number of rows
    for(int i=1; i<=n; i++){
        a = i;
        //loop for column
        for(int j=0; j<n-i; j++){
            printf(" \t");//printing the blank spaces
        }
        for(int j=0; j<i; j++){
            printf("%d\t",a);//print the rows
            a++;
        }
        printf("\n");
    }
    return 0;
}

//output
//                         1
//                 2       3
//         3       4       5
// 4       5       6       7