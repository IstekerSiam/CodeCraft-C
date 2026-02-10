#include <stdio.h>



int main()
{
  
//----- Break & Continue -----//

    
    for(int i = 0; i <= 12; i+=2){    
    
    if (i == 6)
    {
        
        break;
        // continue;
    }
    
    printf("%d\n", i);
   } 
    
   

    return 0;
}
