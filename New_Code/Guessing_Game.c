#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int user_input, comp_input, count=0;
    srand(time(NULL));
    comp_input = rand()%100;// randome number of two digit
    printf("%d\n",comp_input);

    printf("Welcome to the Guessing Game..!!\n");
    printf("I have picked a number between 1 and 100. Try to guess it.\n");

    while(1){
        printf("Enter your guess:- ");
        scanf("%d",&user_input);
        if (user_input == comp_input)
        {
            printf("Congratulations! You guessed the number in %d attempts.\n",count);
            break;
        }
        else if (user_input > comp_input){
            printf("Too high\n");
            count++;
        }
        else{
            printf("Too low\n");
            count++;
        }
    }
    return 0;
}