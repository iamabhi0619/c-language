# include <stdio.h>
//input char in a string char by char
int main() 
{
    char name[100];
    char ch;
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        name[i] = ch;
        i++;
    }
    puts(name);
    return 0;
}