#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
}vector;
vector sum( vector v1, vector v2);
 vector sum( vector v1, vector v2)
{
    vector sum;
    sum.x = v1.x + v2.x ;
    sum.y = v1.y + v2.y ;
    return sum ;
}
int main()
{
    vector v11 = {5, 10};
    vector v22 = {3, 6};
    vector summ = sum (v11, v22);
    printf("Sum= %di, %dj", summ.x, summ.y);
    return 0;
}