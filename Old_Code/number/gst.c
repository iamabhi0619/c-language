# include <stdio.h>
int main()
{
    int p[3];
    double sum=0, gst, fc;
    printf("Enter the cost of three item:-\n");
    for (int i=0; i<3; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int j=0; j<3; j++)
    {
        sum=sum+p[j];
    }
    gst = sum*0.18;
    fc = sum+gst;
    printf("Final Cost= %f",fc);
    return 0;
}