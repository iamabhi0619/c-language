#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    int AdmisNo;
    float cgpa;
};
void printinfo(struct student s1);
void printinfo(struct student s1)
{
    printf("Name:- %s\n",s1.name);
    printf("Admission Number:- %d\n",s1.AdmisNo);
    printf("Roll Number:- %d\n",s1.roll);
    printf("CGPA:-%f\n",s1.cgpa);
}

int main()
{
    struct student s1 = {"Radha Kumari", 12303456, 7323, 8.8};
    printinfo(s1);
    return 0;
}