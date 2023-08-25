# include <stdio.h>

void printhello();//Function decelaration
void goodbye();//Function prototype

void goodbye()//Function defination
{
    printf("Good Bye\n");
}

void printhello()//Function defination
{
    printf("Hello World\n");
}

int main()
{
    printhello();//Function calling 1st
    goodbye();//Function calling 2nd
    return 0;
}