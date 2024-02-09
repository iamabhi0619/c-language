#include <stdio.h>
#include <string.h>
typedef struct ComputerScienceEngineering
{
    char name[100];
    int roll;
    float cgpa;
}cse;
int main()
{
    cse s1;
    strcpy(s1.name, "Tommy");
    s1.roll = 123038546;
    s1.cgpa = 8.5;

    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);

    return 0;
}