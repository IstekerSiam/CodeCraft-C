#include <stdio.h>
#include <math.h>


int main()
{

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double vloume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radus of circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    vloume = (4.0/3.0) * PI * pow(radius, 3);

    printf("/----Circle Calculator----/\n");
    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("volume: %.2lf\n", vloume);




    return 0;

}
