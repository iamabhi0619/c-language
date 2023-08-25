# include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character:- ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') //ch >= 'a' = ch >= 97
    {
        printf("LOWER CASE \n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("UPPER CASE \n");
    }
    else
    {
        printf("Not a english letter \n");
    }
    
    return 0;
}