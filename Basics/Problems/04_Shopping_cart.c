#include <stdio.h>
#include <string.h>

int main()
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;
    
    printf("What do you want to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("What is the price of each?: ");
    scanf("%f", &price);

    printf("How many would you buy?: ");
    scanf("%d", &quantity);

    total = price * quantity;
    
    printf("\nYou have bought %d %ss\n", quantity, item);
    printf("The total price is: %c%.2f", currency, total);


    return 0;

}
