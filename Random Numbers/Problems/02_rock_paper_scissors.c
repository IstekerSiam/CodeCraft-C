#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);


int main()
{
    //ROCK PAPER SCISSORS GAME

    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    // printf("%d\n", userChoice);
    // printf("%d\n", computerChoice);

    switch (userChoice)
    {
    case 1:
        printf("You Chose ROCK!\n");
        break;
    case 2:
        printf("You Chose PAPER!\n");
        break;
    case 3:
        printf("You Chose SCISSORS!\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer Chose ROCK!\n");
        break;
    case 2:
        printf("Computer Chose PAPER!\n");
        break;
    case 3:
        printf("Computer Chose SCISSORS!\n");
        break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}


int getComputerChoice(){
    return (rand() % 3) + 1;

}

int getUserChoice(){

    int choice = 0;
    do{
        printf("Choose an Option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); 

    }while(choice < 1 || choice > 3);
    return choice;
}

void checkWinner(int UserChoice, int computerChoice){

    if(UserChoice == computerChoice){
        printf("It's a TIE!");
    }
    else if((UserChoice == 1 && computerChoice == 3) || 
            (UserChoice == 2 && computerChoice == 1) ||
            (UserChoice == 3 && computerChoice == 2)){
            printf("You WIN!");
    }
    else{
        printf("You LOSE!");
    }
}

