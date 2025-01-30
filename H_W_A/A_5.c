#include <stdio.h>

 
 int main()
 {
 unsigned int N, count = 0; 
    scanf("%d", &N);
  
    for (int i = 0; i < 32; i++)

    {
       if ((N & (1 << i)) != 0)
        {
        count ++;
        } 
    }
    printf("%d\n",count);
    
    

return 0;
 }