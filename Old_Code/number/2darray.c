# include <stdio.h>
//2d array marks of two student in three subject
//2*3 sized array
int main() 
{ 
    int marks[2][3];
    marks[0][0] = 19;
    marks[0][1] = 18;
    marks[0][2] = 19;
    
    marks[1][0] = 17;
    marks[1][1] = 19;
    marks[1][2] = 19;
    printf("%d",marks[0][1]);
    return 0;
}