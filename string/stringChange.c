# include <stdio.h>
int main() 
{
    //modification
    char *string = "Hello World";
    puts(string);
    string = "Hello";
    puts(string);
    
    //modification not possiable
    
    char SString[] = "Hello World";
    puts(SString);
    //SString = "Hello"; // not possiable to change the value of array type
    //puts(SString);
    
    return 0;
}