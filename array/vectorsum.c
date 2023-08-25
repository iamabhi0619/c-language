#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sum(struct vector v1, struct vector v2);
struct vector sum(struct vector v1, struct vector v2)
{
    struct vector sum;
    sum.x = v1.x + v2.x ;
    sum.y = v1.y + v2.y ;
    return sum ;
}
int main()
{
    struct vector v11 = {5, 10};
    struct vector v22 = {3, 6};
    struct vector summ = sum (v11, v22);
    printf("Sum= %di, %dj", summ.x, summ.y);
    return 0;
}