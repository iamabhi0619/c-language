# include <stdio.h>
int main() 
{
    char name[40];
    char some[60];
    printf("Enter your Full Name:- ");
    fgets(name, 40, stdin);//storing
    puts(name);//output
    printf("Write something about you");
    fgets(some, 60, stdin);//storing
    puts(some);//output
    printf("your Name:- %s\n",name);
    printf("Remarks:- %s",some);
    return 0;
}