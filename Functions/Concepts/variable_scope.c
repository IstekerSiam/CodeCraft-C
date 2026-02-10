#include <stdio.h>

int result = 6;  // Globe Scope - outside all functions  (hard to debug)

int add(int a, int b){
    int result = a + b;
    return result;
}

int subtract(int a, int b){
    int result = a - b;
    return result;
}

int main()
{
    //Local variable scope - inside function
    int a = 10;   
    int b = 5;
    
    int result = add(a, b);
    int minus = subtract(a, b);
    
    printf("%d\n", result);
    printf("%d", minus);

    return 0;
}