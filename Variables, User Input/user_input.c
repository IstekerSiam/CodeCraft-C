#include <stdio.h>
#include <string.h>

int main()
{

int age = 0;
float gpa = 0.0f;
char grade = '\0';
char name[50] = "";

printf("Enter your age: ");
scanf("%d", &age);

printf("Enter your gpa: ");
scanf("%f", &gpa);

printf("Enter your grade: ");
scanf(" %c", &grade);


getchar();                              // used for remove \n (input buffer)

printf("Enter your full name: ");
fgets(name, sizeof(name), stdin);
// name[strcspn(name, "\n")] = '\0';           // here 'strcspn' is used for remove extra line after compile.
name[strlen(name) - 1] = '\0';


printf("\nName: %s\n", name);
printf("Age: %d\n", age);
printf("GPA: %.2f\n", gpa);
printf("Grade: %c\n", grade);


return 0;

}