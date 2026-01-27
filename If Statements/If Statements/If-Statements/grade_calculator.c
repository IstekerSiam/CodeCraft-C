#include <stdio.h>

int main()
{
    int marks = 0;

    printf("Enter your marks: ");
    scanf("%d", &marks);
    
if (marks > 100) {
    printf("Invalid marks! Marks cannot be more than 100!\n");
}
else if (marks < 0) {
    printf("Invalid marks! Marks cannot be negative!\n");
}
else if (marks >= 80) {  // No need for && marks <= 100
    printf("Congratulation! Excellent! your grade is: A+\n");
}
else if (marks >= 70) {  // Already know it's < 80
    printf("Well done! your grade is: A\n");
}
else if (marks >= 60) {
    printf("Very good! Work hard to improve! your grade is: A-\n");
}
else if (marks >= 50) {
    printf("Good job! But need improvement, your grade is: B\n");
}
else if (marks >= 33) {
    printf("You passed, but need improvement! your grade is: C\n");
}
else {  // marks < 33
    printf("Failed! Work harder next time!\n");
}

    







    return 0;
}
