#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    //practice with int
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60)
    {
        printf("you are a senior citizen");
    }
    else if(age >= 18){
        printf("You are an adult");
    }
    
    else if(age == 0){
        printf("You are a newborn");
    }
    else if (age >= 12 && age <= 17)
    {
        printf("You are a teenager");

    }
    else if(age <= 11 && age >= 1){
        printf("You are a child");
    }
    else{
        printf("you haven't born yet");
    }

    
    //practice with boolean
    bool isstudent = false;

    if(isstudent == true){
        printf("You are a student");

    }
    else{
        printf("You are NOT a student");
    }

    

    //practice with char
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    if (strlen(name) == 0){

        printf("you did not enter your name");
    }
    else{
        printf("Hello %s!", name);
    }


    return 0;

}
