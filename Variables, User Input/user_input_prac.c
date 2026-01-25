#include <stdio.h>
#include <string.h>

int main()
{

    char name[50] = "\0";
    int roll = 0;
    float tmarks = 0.0;
    float gpa = 0.0;
    char grade[50] = "\0";
    char city[50] = "";

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your roll: ");
    scanf("%d", &roll);

    printf("Enter your total marks: ");
    scanf("%f", &tmarks);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    getchar();

    printf("Enter your grade: ");
    fgets(grade, sizeof(grade), stdin);
    grade[strcspn(grade, "\n")] = '\0';

    printf("Enter your City: ");
    fgets(city, sizeof(city), stdin);
    city[strcspn(city, "\n")] = '\0';

    printf("\n --------Student Information--------\n");

    printf("Student's name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("total marks: %f\n", tmarks);
    printf("gpa: %.2f\n", gpa);
    printf("grade: %s\n", grade);
    printf("City: %s\n", city);

    




    return 0;
}