# include <stdio.h>
int main() 
{
    char Fname[]={'A', 'B', 'H', 'I', 'S', 'H', 'E', 'K', '\0'};
    char Lname[]="KUMAR";
    printf("First Name:- %s\n",Fname);
    printf("Name:- %s %s",Fname, Lname);
    return 0;
}