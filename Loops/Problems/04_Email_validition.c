#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char email[50] = "john@gmail.com";
    bool hasAt = false;
    int i = 0;

    while (email[i] != '\0')  // Loop until end of string
    {
        if (email[i] == '@')
        {
        hasAt = true;
        break;  // Found it! Stop checking
        }
        i++;  // Move to next character
    }

        if (hasAt)
        {
            printf("Valid email!\n");
        }
        else
        {
            printf("Invalid email!\n");
        }
    









    return 0;
}