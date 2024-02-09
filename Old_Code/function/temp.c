# include <stdio.h>
float conv(float c)
{
    float f= (c*9/5)+32;
    return f; 
}
int main()
{
    float c;
    printf("Enter Temp. in celsius= ");
    scanf("%f", &c);
    float fa = conv(c);
    printf("%f", fa);
    return 0;
}