# include <stdio.h>
# include <string.h>
//copy string
int main() 
{
    char name[50];
    char cname[50];
    printf("Enter your Name:- ");
    fgets(name, 50, stdin);
    strcpy(cname,name);
    printf("Entered string= ");
    puts(name);
    printf("Copied String= ");
    puts(cname);
    return 0;
}