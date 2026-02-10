#include <stdio.h>

int main()
{
  

  int row = 0;
  int coloum = 0;
  char symbol = '\0';

  printf("Enter the # of rows: ");
  scanf("%d", &row);

  printf("Enter the # of coloums: ");
  scanf("%d", &coloum);

  printf("Enter a symbol to use: "); 
  scanf(" %c", &symbol);

  

  for (int i = 0; i < row; i++)    // outer loop -> row
  {
    for (int j = 0; j < coloum; j++)  // inner loop -> coloum
  {
    printf("%c", symbol);
  }
    printf("\n");             // for outer loop
  }
  
  

   

    return 0;
}
