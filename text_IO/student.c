#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int roll;
    float cgpa;

    printf("Enter Name:- ");
    gets(name);
    printf("Enter Roll Number:- ");
    scanf("%d", &roll);
    printf("Enter CGPA:- ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name:- %s\n", name);
    fprintf(fptr, "Roll Number:- %d\n", roll);
    fprintf(fptr, "CGPA:- %f\n", cgpa);
    
    fclose(fptr);
    return 0;
}