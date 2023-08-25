# include <stdio.h>
# include <string.h>
//string length
int main() 
{
    //string length
    char name[50];
    int count=0;
    printf("Enter your Name:- ");
    fgets(name, 50, stdin);
    for (int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    int len = strlen(name);
    printf("Length predefine= %d\n",len);
    printf("Length= %d",count-1);
    return 0;
}