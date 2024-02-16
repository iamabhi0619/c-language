#include <stdio.h>
int main(){
    int a = 2, b = 6 ;
    printf("BITWISE AND:- %d\n",a&b);
    // a=010 b=110 result of a and b is 010=2
    printf("BITWISE AND:- %d\n",a|b);
    // a=010 b=110 result of a or b is 110=6
    printf("BITWISE AND:- %d\n",a^b);
    // a=010 b=110 result of a xor b is 100=4
    printf("BITWISE AND:- %d\n",~a);
    // a=010 result of ~a  is ......101=-3
    printf("BITWISE LEFT SHIFT:- %d\n",a<<2);
    return 0;
}