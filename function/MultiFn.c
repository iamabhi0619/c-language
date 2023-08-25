# include <stdio.h>

void AreaofSq()
{
    int a;
    printf("Enter the side of a square= ");
    scanf("%d", &a);
    double area = a * a ;
    printf("Area of a square= %f",area);
}

void AreaofCircle()
{
    int r;
    printf("Enter the radius= ");
    scanf("%d", &r);
    double area = 3.14*r*r;
    printf("Area of a Circle= %f",area);
}

double AreaOfRect()
{
    int l,b;
    printf("Enter the length of a rectangle= ");
    scanf("%d", &l);
    printf("Enter the breath of a rectangle= ");
    scanf("%d", &b);
    double area = l * b ;
    printf("Area of a Rectangle= %f",area);
}

int main ()
{
    int ch;
    printf("Enter 1 if Area of a Square\n");
    printf("Enter 2 if Area of a Circle\n");
    printf("Enter 3 if Area of a Rectangle\n");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1 : AreaofSq();
        break;
        case 2 : AreaofCircle();
        break;
        case 3 : AreaOfRect();
        break;
        default : printf("Wrong Choice");
    }
    return 0;
}