#include <stdio.h>
#include <math.h>

int main()
{

    const double convertion_value = 2.20462;
    double kilogram = 0.0;
    double pounds = 0.0;
    int choice = 0;
    
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): \n");
    scanf("%d", &choice);




    if(choice == 1){
        printf("Enter the value in kilogram: ");
        scanf("%lf", &kilogram);
        if (kilogram < 0)
        {
            printf("Weight can't be negetive");
        }

        else{
        pounds = kilogram * convertion_value;
        printf("Pounds Value: %.2lf lb\n", fabs(pounds));
        }


    }
    else if(choice == 2){
        printf("Enter the value in pounds:");
        scanf("%lf", &pounds);
        if (pounds < 0)
        {
            printf("Weight can't be negetive");

        }
        else{
        kilogram = pounds / convertion_value;
        printf("Kilogram Value: %.2lf kg\n", fabs(kilogram));
        }
    }

    else{
        printf("Invalid Choice, please enter 1 or 2");
    }



    

    


    

  
    return 0 ;
}