#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    int AdmisNo;
    float cgpa;
};
struct student getdata()
{
    struct student gt;
    printf("Enter Name:- ");
    scanf("%s", gt.name);
    printf("Enter Admission number:- ");
    scanf("%d", gt.AdmisNo);
    printf("Enter Roll Number");
    scanf("%d", gt.roll);
    printf("Enter CGPA:- ");
    scanf("%f", gt.cgpa);
    return gt;
}
int main()
{
    int x=0;
    int y=0;
    int z=0;
    int a,b,c;
    printf("Enter the number of student in CSE");
    scanf("%d", &a);
    printf("Enter the number of student in CS");
    scanf("%d", &b);
    printf("Enter the number of student in IT");
    scanf("%d", &c);
    struct student cse[a];
    struct student cs[b];
    struct student it[c];
    char ch;
    printf("Do you want to enter the value");
    scanf("%c", &ch);
    if(ch == 'y')
    {
        int code;
        printf("Enter Branch Code");
        scanf("%d", &code);
        if (code == 'cse')
        {
            data(code,x);
        }
        else if (code == 'cs')
        {
            data(code,y);
        }
        else if (code == 'it')
        {
            data(code,z);
        }
        else
        {
            printf("Wrong code");
        }
    }
    else
    {
        printf("Thank You");
    }
    return 0;
}
