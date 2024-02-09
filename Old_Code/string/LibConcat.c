# include <stdio.h>
# include <string.h>
//concating string joining string
int main() 
{
    char Fname[50] = "Hello ";
    char Lname[50] = "World";
    strcat(Fname, Lname);
    printf("Output:- ");
    puts(Fname);
    return 0;
}