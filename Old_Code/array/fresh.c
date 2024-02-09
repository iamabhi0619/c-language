#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    int AdmisNo;
    float cgpa;
};
struct student getdata();
void printinfo(struct student pi);
struct student getdata()
{
    struct student gt;
    printf("Enter Name:- ");
    gets(gt.name);
    printf("Enter Admission number:- ");
    scanf("%d", &gt.AdmisNo);
    printf("Enter Roll Number:- ");
    scanf("%d", &gt.roll);
    printf("Enter CGPA:- ");
    scanf("%f", &gt.cgpa);
    return gt;
}
void printinfo(struct student pi)
{
    printf("Name:- %s\n",pi.name);
    printf("Admission Number:- %d\n",pi.AdmisNo);
    printf("Roll Number:- %d\n",pi.roll);
    printf("CGPA:-%f\n",pi.cgpa);
}
int main()
{
    struct student s1 ;
    s1 = getdata();
    printinfo(s1);
    return 0;
}