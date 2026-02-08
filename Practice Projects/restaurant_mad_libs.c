#include <stdio.h>
#include <string.h>

int main()
{

    char restaurant_name[50] = "";
    int num_of_friends = 0;
    char item[50] = "";
    float price = 0.0f;
    char adjective1[50] = "";
    char adjective2[50] = "";
    char waiter[50] = "";
    float rating = 0.0f;
    float overall_rating = 0.0f;
    int quantity = 0;
    float cost_of_items = 0.0f;
    float total_cost = 0.0f;
    float service_charge = 0.0f;


    printf("Enter your restaurant name: ");
    fgets(restaurant_name, sizeof(restaurant_name), stdin);
    restaurant_name[strcspn(restaurant_name, "\n")] = '\0';

    printf("Enter the number of your freinds: ");
    scanf("%d", &num_of_friends);

    getchar();

    printf("Enter your item name: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("Enter the price of your food: ");
    scanf("%f", &price);

    printf("How many did you order?: ");
    scanf("%d", &quantity);

    getchar();

    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strcspn(adjective1, "\n")] = '\0';

    printf("Enter an adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strcspn(adjective2, "\n")] = '\0';

    printf("Enter the waiter's name: ");
    fgets(waiter, sizeof(waiter), stdin);
    waiter[strcspn(waiter, "\n")] = '\0';

    printf("Enter the service rating out of 5.00: ");
    scanf("%f", &rating);

    printf("Enter overall rating: ");
    scanf("%f", &overall_rating);


    cost_of_items = (quantity * price);
    service_charge = (cost_of_items * 5) / 100;
    total_cost = cost_of_items + service_charge;



    printf("\n ========== RESTAURANT REVIEW ==========\n");
    printf("I visited %s restaurant with %d friends.\n", restaurant_name, num_of_friends);
    printf("We ordered the %s which is cost $%.2f per piece.\n", item, price);
    printf("We ordered %d piece of the %s.\n", quantity, item);
    printf("So, the total bill was $%.2f including the service charge.\n", total_cost);
    printf("The food was %s and %s!\n", adjective1, adjective2);
    printf("Our waiter %s gave us %.2f star service.\n", waiter, rating);
    printf("Overall rating: %.2f/5.0 stars\n", overall_rating);
    


    return 0;
}
