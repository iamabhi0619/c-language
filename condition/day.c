# include <stdio.h>
int main()
{
    int day;
    printf(" Enter day (1-7) ");
    scanf("%d", &day);
    switch (day)
    {
        case 1 : printf("Monday \n");
                break;
        case 2 : printf("Tusday \n");
                break;
        case 3 : printf("wednusday \n");
                break;
        case 4 : printf("Thursday \n");
                break;
        case 5 : printf("Friday \n");
                break;
        case 6 : printf("Sturday \n");
                break;
        case 7 : printf("Sunday \n");
                break;
        default : printf("Opps..!!\nWrong Choice...!! \n");
    }
    return 0;
}