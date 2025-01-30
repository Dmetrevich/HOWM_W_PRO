#include <stdio.h>


int main()
{

     unsigned int N, K,res; 
    scanf("%u %u", &N, &K);
    res  = (N >> K) | (N << (32 - K));
    printf("%u\n", res);
    return 0;
}
