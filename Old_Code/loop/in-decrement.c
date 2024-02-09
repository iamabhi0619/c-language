#include <stdio.h>
int main()
{
    printf("Increment Oprator \n");

    int i = 1;
    printf("%d \n", i++);// use then increase
    printf("%d \n\n", i);

    i = 1;
    printf("%d \n", ++i); // increase then use
    printf("%d \n\n", i);

    printf("Decrement Oprator \n");

    i = 1;
    printf("%d \n", i--); // decrease then use
    printf("%d \n\n", i);

    i = 1;
    printf("%d \n", --i); // decrease then use
    printf("%d \n", i);

    return 0 ;
}