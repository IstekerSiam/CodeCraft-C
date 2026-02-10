#include <stdio.h>


int main()
{

    int dayOfWeek = 0;
    

    printf("Enter a day of the week(1-7): ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
        case 1:
            printf("It is Saturday");
            break;
        case 2:
            printf("It is Sunday");
            break;
        case 3:
            printf("It is Monday");
            break;
        case 4:
            printf("It is Tuesday");
            break;
        case 5:
            printf("It is Wednesday");
            break;
        case 6:
            printf("It is Thrusday");
            break;
    
    default:
        printf("Invalid Choice, please choose (1-7)");
        break;
    }
    



    

    return 0;
}