#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age);  //function prototype
bool ageCheck(int age);

int main()
{
    hello("isteker", 20);

    if (ageCheck(30))
    {
        printf("you are old enough to work at the krusty krab");
    }
    else{
        printf("You must be 16+ to work at krusty krab");
    }
    


    return 0;
   
}

void hello(char name[], int age){
    printf("Hello! %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >=16;      //shortcut form        

                                      
}