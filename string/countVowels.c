# include <stdio.h>
/*Write a function to count the occurrence of vowels in a string. */
int vowels (char w[100]);
int vowels (char w[100])
{
    int count=0;
    for(int i=0; w[i] != '\0'; i++)
    {
        switch (w[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                    count++;
                    break ;
        }
    }
    return count;
}
int main() 
{
    char word[100];
    printf("Enter your word= ");
    fgets(word, 100, stdin);
    int c = vowels(word);
    printf("No. of vowels char= %d",c);
    return 0;
}