#include <stdio.h>

int square(int x){
    return x * x;
}

float add(float a, float b){
    return a + b;
}



//Square a number

int main()
{

    int x = 0; 


    printf("Enter the number you want to square: ");
    scanf("%d", &x);
    
    int result = square(x); 
    float addition = add(5, 6);


    
    printf("%d\n", result);
    printf("%.1f\n", addition);
    





    return 0;
}