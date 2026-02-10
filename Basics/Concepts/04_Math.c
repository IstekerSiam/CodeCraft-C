#include <stdio.h>
#include <math.h>

int main()
{

    int x1 = 9;
    int x2 = 2;
    float x3 = 34.4555;
    int x4 = -5;
    double x5 = 90;
    float x6 = -2.2;

    x1 = sqrt(x1);
    x2 = pow(x2, 3);
    // x3 = round(x3);
    // x3 = ceil(x3);
    // x3 = floor(x3);
    x4 = abs(x4);               //abs shows the distance of that number from 0
    x6 = fabs(x6);              //same as abs just use for float/double
    // x1 = log(x1);
    x1 = sin(x1);
    x1 = cos(x1);
    x5 = tan(x5);               //tan() uses radians, not degrees



    printf("%d\n", x2);
    printf("%f\n", x3);
    printf("%f\n", x3);
    printf("%d", x4);
    printf("%d", x5);






    return 0;
}