#include <stdio.h>
int main(){
    int n, a=1;
    printf("Enter the number of row:- ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        a = i;
        for(int j=0; j<i; j++){
            printf("%d\t",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
