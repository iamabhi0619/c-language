#include <stdio.h>
int main(){
    int n;
    printf("Enter odd number:- ");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("Please enter a odd number..!!\n");
    }

    else{
        int mid = (n/2)+1;
        for(int i=0; i<n; i++){
            if(i<mid){
                for(int j=0; j<(mid-1)-i; j++){
                printf(" ");
                }
                for(int j=1; j<=(2*(i+1)-1); j++){
                    printf("*");
                }
            }
            else{
                for(int j=(mid-1)-i; j<0; j++){
                printf(" ");
                }
                for(int j=1; j<2*(n-i); j++){
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}