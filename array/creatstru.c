# include <stdio.h>
# include <string.h>
//user define datatype
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main() 
{
    struct student s1;
    //s1.name = "Tommy";
    //direct copy nahi kr skta
    strcpy(s1.name, "Tommy");
    s1.roll = 123038546;
    s1.cgpa = 8.5;
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    return 0;
}