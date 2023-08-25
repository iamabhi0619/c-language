# include <stdio.h>
int main() 
{
    char Fname[40];
    char Lname[40];
    printf("Enter First Name");
    scanf("%s", Fname);
    printf("Enter Last Name");
    scanf("%s", Lname);
    for (int i=0; Fname != '\0'; i++)
    {
        printf("%c",Fname[i]);
    }
    for (int i=0; Lname != '\0'; i++)
    {
        printf("%c",Lname[i]);
    }
    printf("First Name:- %s\n",Fname);
    printf("Name:- %s %s",Fname, Lname);
    return 0;
}