#include <stdio.h>

int main()
{
 
    char dayOfWeek = '\0';

    printf("Enter a day of week('f', 's', 'u', 'm' 't', 'w', 'r'): ");
    scanf("%c", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 'f':
       printf("It is Friday\n");
       break;
    case 's':
       printf("It is Saturday\n");
       break;
    case 'u':
       printf("It is Sunday\n");
       break;
    case 'm':
       printf("It is Monday\n");
       break;
    case 't':
       printf("It is Tuesday\n");
       break;
    case 'w':
       printf("It is Wednesday\n");
       break;
    case 'r':
       printf("It is Trusday\n");
       break;

    default:
       printf("\nInvalid input, please choose:('f', 's', 'u', 'm' 't', 'w', 'r')");
       break;

        
    }


    return 0;
}