#include <stdio.h>
#include <stdint.h>



int main()
{

     unsigned int N, K, res = 0;
     scanf("%u %u", &N, &K);
     int j = K;
    for (int i = 0; i <= j -1; i++)
    {
      K |=  (1<<i); //mask
    }
       res =  N & K;
    printf("%u\n", res);
    
    return 0;
    
   
}

