#include <stdio.h>
int main(){
    int n, flag, evenSum = 0, oddSum = 0;
    scanf("%d",&n);
    while(n!=0){
        flag = n % 10;//geting the digit one by by one from last
        //checking the last digit for even odd
        if(flag%2 == 0)//
        {
            evenSum = evenSum + flag;
        }
        else{
            oddSum = oddSum + flag;
        }
        n = n/10;//removing the last digit
    }
    printf("Sum of Even Digts= %d\n",evenSum);
    printf("Sum of Odd Digits= %d\n",oddSum);
    return 0;
}