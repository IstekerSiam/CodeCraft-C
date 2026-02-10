
#include <stdio.h>
#include <strings.h>



int main()
{
  
    //----while with Strings----//

    
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    while (strlen(name) == 0)
    {
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
    }

    // printf("Hello! %s", name);
    
   

    return 0;
}



