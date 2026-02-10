#include <stdio.h> 
#include <stdbool.h>
int main()
{  
    int age = 25;
    int Weight = 50;
    float gpa = 3.00;
    float price = 10.50;
    float temperature = -10;
    double pi = 3.14159172282822;
    char grade = 'A';
    char item[] = "towel";
    char yt[] = "Bro Code";
    char email[] = "istekersiam@gmail.com";
    bool isOnline = true;
    bool forSale = false;
    
    printf("I like pizza\n");
    printf("Your age is %d \n", age);
    printf("Your weight is %d \n", Weight);
    printf("Your GPA is %.1f \n", gpa);
    printf("Total price is %.2f \n", price);
    printf("The temperature is %.2f deg F \n", temperature);
    printf("The pie value is %.15lf \n", pi);
    printf("Your grade is %c \n", grade);
    printf("Your ordered item is %s\n", item);
    printf("I'm learning C from %s's channel \n", yt);
    printf("My email is %s\n", email);
    printf("%d\n", isOnline);

    // This is just for practice://
    
    if (isOnline){
        printf("You are ONLINE\n");
    }
    else{
        printf("Your are offline\n");
    }
    if(forSale){
        printf("The item is for sale\n");
    }
    else{
        printf("The item is not for sale\n");
    }







    return 0;
}


