#include <stdio.h>
struct address
{
    int houseNo;
    char block[20];
    char city[20];
    char state[20];
};

int main()
{
    struct address add[5];
    printf("Enter details for person1\n");
    printf("House Number:- ");
    scanf("%d", &add[0].houseNo);
    printf("\nEnter Block:- ");
    fgets(add[0].block, 20, stdin);
    printf("\nEnter City:- \n");
    fgets(add[0].city, 20, stdin);
    printf("\nEnter State:- \n");
    fgets(add[0].state, 20, stdin);

    printf("Enter details for person2\n");
    printf("House Number");
    scanf("%d", &add[1].houseNo);
    printf("\nEnter Block:- ");
    fgets(add[1].block, 20, stdin);
    printf("\nEnter City:- ");
    fgets(add[1].city, 20, stdin);
    printf("\nEnter State:- ");
    fgets(add[1].state, 20, stdin);

    printf("Enter details for person3\n");
    printf("House Number");
    scanf("%d", &add[2].houseNo);
    printf("\nEnter Block:- ");
    fgets(add[2].block, 20, stdin);
    printf("\nEnter City:- ");
    fgets(add[2].city, 20, stdin);
    printf("\nEnter State:- ");
    fgets(add[2].state, 20, stdin);

    printf("Enter details for person4\n");
    printf("House Number");
    scanf("%d", &add[3].houseNo);
    printf("\nEnter Block:- ");
    fgets(add[3].block, 20, stdin);
    printf("\nEnter City:- ");
    fgets(add[3].city, 20, stdin);
    printf("\nEnter State:- ");
    fgets(add[3].state, 20, stdin);

    printf("Enter details for person5\n");
    printf("House Number");
    scanf("%d", &add[4].houseNo);
    printf("\nEnter Block:- ");
    fgets(add[4].block, 20, stdin);
    printf("\nEnter City:- ");
    fgets(add[4].city, 20, stdin);
    printf("\nEnter State:- ");
    fgets(add[4].state, 20, stdin);

    printf("\n");
    printf("Person 1\n");
    printf("House Number- %d\n", add[0].houseNo);
    printf("Block- ");
    puts(add[0].block);
    printf("\n");
    printf("City- ");
    puts(add[0].city);
    printf("\n");
    printf("State- ");
    puts(add[0].state);
    printf("\n");

    printf("\n");
    printf("Person 2");
    printf("House Number- %d\n", add[1].houseNo);
    printf("Block- ");
    puts(add[1].block);
    printf("\n");
    printf("City- ");
    puts(add[1].city);
    printf("\n");
    printf("State- ");
    puts(add[1].state);
    printf("\n");

    printf("\n");
    printf("Person 3");
    printf("House Number- %d\n", add[2].houseNo);
    printf("Block- ");
    puts(add[2].block);
    printf("\n");
    printf("City- ");
    puts(add[2].city);
    printf("\n");
    printf("State- ");
    puts(add[2].state);
    printf("\n");

    printf("\n");
    printf("Person 4");
    printf("House Number- %d\n", add[3].houseNo);
    printf("Block- ");
    puts(add[3].block);
    printf("\n");
    printf("City- ");
    puts(add[3].city);
    printf("\n");
    printf("State- ");
    puts(add[3].state);
    printf("\n");

    printf("\n");
    printf("Person 5");
    printf("House Number- %d\n", add[4].houseNo);
    printf("Block- ");
    puts(add[4].block);
    printf("\n");
    printf("City- ");
    puts(add[4].city);
    printf("\n");
    printf("State- ");
    puts(add[4].state);
    printf("\n");

    return 0;
}