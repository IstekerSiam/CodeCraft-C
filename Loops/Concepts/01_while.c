#include <stdio.h>



int main()
{
  
    int number = 0;
    while (number <= 0)
    {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
       
    }
    
    printf("You have successfully skipped the loop.");
   

    return 0;
}
