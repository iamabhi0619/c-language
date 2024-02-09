# include <stdio.h>
void sq1(int num);
int main();
void _sq(int *n);
int main()
{
    int n = 4;
    sq1(n);
    printf("Number= %d\n",n);
    _sq(&n);
    printf("Number= %d\n",n);
    return 0;
}
void sq1(int num)
{
    num = num * num;
    printf("Square1= %d\n",num);
}
void _sq(int* n)
{
    *n = (*n) * (*n);
    printf("Square2= %d\n",*n);
}