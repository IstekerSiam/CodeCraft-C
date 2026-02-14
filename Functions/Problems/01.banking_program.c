#include <stdio.h>

void checkBalance(float balance);
float deposite(float balance);
float withdraw(float balance);

int main()
{
    // BANKING PROGRAM

    int choice = 0;
    float balance = 0.0f;
    
    printf("*** WELCOME TO THE SONALI BANK ***\n");

    do{
        printf("\nSelect an option\n");
        printf("\n1. Check Balance\n");
        printf("2. Deposite Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            balance += deposite(balance);
            // checkBalance(balance);
            break;

        case 3:
            balance -= withdraw(balance);
            break;

        case 4:
            printf("\nThank you for using the SONALI BANK ^_^");
            break;

        default:
            printf("\n=> Invalid Choice! Please choose between 1 - 4\n");
        
        
        }

    }while(choice != 4);

    
    
    


    return 0;
} 

void checkBalance(float balance){
    printf("\n=> Your current balance is: $%.2f\n", balance);
    
}

float deposite(float balance){
    float amount = 0.0f;
    printf("Enter amount to deposite: $\n");
    scanf("%f", &amount);

    if(amount < 0){
        printf("\n=> Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("\n=> Successfully deposited $%.2f\n", amount);
        printf("=> Your current balance is: $%.2f\n", balance + amount);
        return amount;
    }
}

float withdraw(float balance){
    float amount = 0.0f;
    printf("Enter amount to withdraw: $\n");
    scanf("%f", &amount);

    if(amount > balance){
        printf("\n=> Insufficient Balance! your current balance is $%.2f\n", balance);
        return 0.0f;
    }
    else if(amount < 0){
        printf("\n=> Amount can't be negetive\n");
        return 0.0f;
    }
    else{
        printf("\n=> You have successfully withdrawn $%.2f\n", amount);
        printf("=> Your current balance is: $%.2f\n", balance - amount);

        return amount;
    }
    
}