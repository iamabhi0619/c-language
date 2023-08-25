#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("NTest.txt", "r");
    if (fptr == NULL)
    {
        printf("File does not Exist");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}