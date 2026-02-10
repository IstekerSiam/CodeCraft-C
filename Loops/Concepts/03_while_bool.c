#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>



int main()
{
  
//----While with boolean----//

    
     bool isRunning = true;
    char response = '\0';

    while (isRunning)
    {
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y - yes, N - no): ");
        scanf(" %c", &response);

        if (tolower(response) != 'y')        // it can also be done by using &&
        {
            isRunning = false;
        }
    }
        
    printf("You exit the game!\n");
    
   

    return 0;
}