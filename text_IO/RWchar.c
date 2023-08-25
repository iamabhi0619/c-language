#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    fptr = fopen("Test.txt", "w");
    fputc('B', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('A', fptr);

    fclose(fptr);
    return 0;
}