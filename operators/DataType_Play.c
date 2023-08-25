# include<stdio.h>


int main()
{
    // int into flot(Explicite convert) complier khud kr diya
        int a=20;
        float b=2.5;
        printf ("%f \n",a+b); // output a flot value 22.500000


    // flot value store in int (Inplicit convert) programer ko khud sa krna prta hai
        int c = (int) 7.999999999;
        printf ("%d \n",c); // output a int value 7


    return 0;
}