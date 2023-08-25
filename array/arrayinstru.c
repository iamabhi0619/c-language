#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    int AdmisNo;
    float cgpa;
};
int main()
{

    struct student s1 = {"Radha Kumari", 12303456, 7323, 8.8};

    printf("Name:- %s\n",s1.name);
    printf("Admission Number:- %d\n",s1.AdmisNo);
    printf("Roll Number:- %d\n",s1.roll);
    printf("CGPA:-%f\n",s1.cgpa);

    struct student cse[150];
    strcpy(cse[0].name, "Abhishek Kumar");
    cse[0].roll = 12303455;
    cse[0].AdmisNo = 6523;
    cse[0].cgpa = 9.8;

    printf("Name:- %s\n",cse[0].name);
    printf("Admission Number:- %d\n",cse[0].AdmisNo);
    printf("Roll Number= %d\n",cse[0].roll);
    printf("CGPA:- %f\n",cse[0].cgpa);

    return 0;
}