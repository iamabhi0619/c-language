# include <stdio.h>

int main()
{
    float rad;
    printf("Enter the radius of a Circle= "); //print info about the input 
    scanf("%f", &rad); //taking input

    float area = 3.14*rad*rad; // calculating the area of circle
    printf(" Area of a Circle is %f",area); //print the area of a circle
    return 0;
}