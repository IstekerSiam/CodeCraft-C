#include <stdio.h>



int main()
{
  for (int j = 2; j <= 5; j++)  // Tables from 2 to 5
    {
    printf("\nTable of %d:\n", j);

    for (int k = 1; k <= 10; k++)
    {
        printf("%d X %d = %d\n", j, k, j * k);
    }
}

   

    return 0;
}