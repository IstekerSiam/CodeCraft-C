#include <stdio.h>

int main()
{
    int correctPassword = 1234;
    int userInput = 0;
    int attemptsLeft = 3;

    while (attemptsLeft > 0)
    {
        printf("Enter the number password: ");
        scanf("%d", &userInput);

        if (userInput == correctPassword)
        {
            printf("Access granted! Welcome!\n");
            break;  // Exit loop immediately when correct
        }
        else
        {
            attemptsLeft--;  // Decrease attempts
            
            if (attemptsLeft > 0)
            {
                printf("Incorrect password! %d attempts remaining.\n", attemptsLeft);
            }
            else
            {
                printf("Access denied! No attempts remaining.\n");
            }
        }
    }

    return 0;
}
