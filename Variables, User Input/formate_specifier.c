#include <stdio.h>

int main()
{

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -1000;
    float price1 = 19.99;
    float price2 = 50.15;                     // By default, printf displays 6 digits after the decimal point 
    float price3 = -101.00;                   // for float and double
    float combine = 5252.5667;
    char greeting[] = "Hello!";                                      

    printf("%6d\n", num1);            //width(6)
    printf("%6d\n", num2);            
    printf("%06d\n", num3);           //[flag(0)+width(6)]
    printf("%+10d\n", num4);
    printf("%.1f\n", price1);         //Precision(.1)
    printf("%9.2f\n", price2);
    printf("%.1f\n", price3);
    printf("%+10.2f\n", combine);      //[flag+width+precision]
    printf("%-10s\n", greeting); 

    








  return 0;
}