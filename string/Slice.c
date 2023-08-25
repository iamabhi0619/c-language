# include <stdio.h>
/*Write a function named slice, which takes a 
string & returns a sliced string from index n to m */
void slice (char w[100], int n, int m);
void slice (char w[100], int n, int m)
{
    for(int i=n; i<=m; i++)
    {
        printf("%c",w[i]);
    }
}
int main() 
{
    char word[100];
    int a, b;
    printf("Enter your word= ");
    fgets(word, 100, stdin);
    printf("Enter starting Index:- ");
    scanf("%d", &a);
    printf("Enter Ending Index:- ");
    scanf("%d", &b);
    printf("Enter your word= ");
    fgets(word, 100, stdin);
    slice(word, a, b);
    return 0;
}
