# include<stdio.h>

int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nYou are an adult");
        printf("\nYou can voet");
        printf("\nyou can drive");
    }
    else
    {
        printf("\nYou are not an adult");
    }

    printf("\n \n Thank You..!!");
}