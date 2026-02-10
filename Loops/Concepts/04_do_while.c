#include <stdio.h>



int main()
{
  //-----[Do-While]-----//

    
    int number = 1;

    do{
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    
    }while (number <= 0);
    
    printf("You have successfully skipped the loop.");
    


   

    return 0;
}
