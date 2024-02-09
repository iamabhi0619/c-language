# include <stdio.h>
float percent (int a, int b,int c)
{
    float p = (a+b+c)/3;
    return p ;
}

int main ()
{
    float s,m,sa;
    printf("Enter your marks in Science= ");
    scanf("%f", &s);
    printf("Enter your marks in Maths= ");
    scanf("%f", &m);
    printf("Enter your marks in Sanskrit= ");
    scanf("%f", &sa);
    float per = percent(s, m, sa);
    printf("You got %f percent",per);
    return 0;
}