#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <windows.h>          //for unicode symbol

int main()
{
    SetConsoleOutputCP(CP_UTF8);   // Ensure Unicode symbols work
    
    float celcius = 0.0f;
    float fahrenheit = 0.0f;
    char choice = '\0';

    printf("\nTemperature Conversion Calculator\n");
    printf("C. Celcius(C) to Fahrenheit(F)\n");
    printf("F. Fahrenheit(F) to Celcius(C)\n");
    printf("Is the temp in Celcius(C) or Fahrenheit(F)?\n");
    scanf(" %c", &choice);
    if (tolower(choice) == 'c')
    {
        printf("Enter the temperature in Celcius(C): ");
        scanf("%f", &celcius);
        fahrenheit = ((celcius * 9) / 5) + 32;
        printf("%.1f°C Celcius is equal to %.2f\u00B0F\n", celcius, fahrenheit);
    }
    else if(tolower(choice) == 'f')
    {
        printf("Enter the temperature in Fahrenheit(F): ");
        scanf("%f", &fahrenheit);
        celcius = ((fahrenheit - 32) / 9 ) * 5;
        printf("%.1f°F fahrenheit is equal to %.2f\u00B0C\n", fahrenheit, celcius);
    }
    else{
        printf("Invalid Choice, please choice 'c' or 'f'\n");
    }
    



    return 0 ;
}