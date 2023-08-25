# include <stdio.h>
int main() 
{
    char name[40];
    char some[60];
    printf("Enter your Full Name:- ");
    gets(name);//storing
    puts(name);//output
    printf("Write something about you");
    gets(some);//storing
    puts(some);//output
    printf("your Name:- %s\n",name);
    printf("Remarks:- %s",some);
    return 0;
}