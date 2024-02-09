#include <stdio.h>
#include <stdlib.h>
int main(){
    int User_Choice, Comp_choice;
    printf("Enter Your choice\n0 for Rock,\n1 for paper\n2 for scissors\n");
    scanf("%d",&User_Choice);

    Comp_choice = rand() % 3 ;//want number between only 0-2
    switch (Comp_choice)
    {
    case 0:
        printf("Computer Chose:- Rock\n");
        break;
    case 1:
        printf("Computer Chose:- Paper\n");
        break;
    case 2:
        printf("Computer Chose:- Scissors\n");
        break;
    default:
        break;
    }
    if (User_Choice == 0 && Comp_choice == 1)
    {
        printf("User Won..!!\n");
    }
    else if(User_Choice == 0 && Comp_choice == 2){
        printf("Computer Won..!!\n");
    }
    else if(User_Choice == 1 && Comp_choice == 0){
        printf("User Won..!!\n");
    }
    else if(User_Choice == 1 && Comp_choice == 2){
        printf("Computer Won..!!\n");
    }
    else if(User_Choice == 2 && Comp_choice == 0){
        printf("Computer Won..!!\n");
    }
    else if(User_Choice == 2 && Comp_choice == 1){
        printf("User Won..!!\n");
    }
    else if(User_Choice > 2){
        printf("Need a valid Input..!!\n");
    }
    else{
        printf("It's a Tie\n");
    }
    return 0;
}
