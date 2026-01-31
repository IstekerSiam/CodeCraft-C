#include <stdio.h>
#include <math.h>

int main()
{

    double principal = 0.0;
    double rate = 0.0;
    int year = 0;
    int timesCompunded = 0;
    double total = 0.0;
    double sum = 0.0;
    


    printf("/----Compund Interest Calculator----/\n");
    printf("Enter the Principal(P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate %%(r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &year);

    printf("Enter # of times compunded per year(n): ");
    scanf("%d", &timesCompunded);

    sum = (1 + (rate/timesCompunded));
    total = principal * pow(sum, timesCompunded * year);

    printf("After %d years, the total will be $%.2lf", year, total);

    return 0;

}