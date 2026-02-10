
#include <stdio.h>



int main()
{
  int choice = 0;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Start\n");
        printf("2. Settings\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) printf("Starting game...\n");
        else if (choice == 2) printf("Opening settings...\n");
        else if (choice == 3) printf("Goodbye!\n");
        else printf("Invalid choice!\n");

    } while (choice != 3);

   

    return 0;
}
