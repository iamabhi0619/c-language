#include <stdio.h>
int main(){
    float fahrenheit;
    printf("Enter the Temperature in Fahrenheit:- ");
    scanf("%f", &fahrenheit);
    float celsius;
    celsius = (fahrenheit-32)*(5/2);
    printf("Temprature in Celsius:- %f\n",celsius);

    return 0;
}