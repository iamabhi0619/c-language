# include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the length of side A "); // printing info about input
    scanf("%d", &a); //storing input value side of a rect.

    printf("Enter the length of side B "); // printing info about input
    scanf("%d", &b); //storing input value other side of a rect.

    printf("Peremeter = %d",2*(a + b));
    /*calculating and printing the area of a rect.*/
    return 0;
}