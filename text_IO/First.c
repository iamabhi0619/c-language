#include <stdio.h>
int main()
{
    FILE *fptr;  // creating a file pointer
    fptr = fopen("Test.txt", "r"); //opening a file with mode of opration
    fclose(fptr); //closing a file
    return 0;
}