//reading form a file
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n",ch);
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n",ch);
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n",ch);
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n",ch);
    fscanf(fptr, "%c", &ch);
    printf("Character= %c\n",ch);
    fclose(fptr);
    return 0;
}