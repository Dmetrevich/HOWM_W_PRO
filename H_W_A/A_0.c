#include <stdio.h>
#include <stdint.h>

int main()
{

 int a = 0, b,i = 0, counter = 0, max = 0, flag = 1;
 scanf("%d",&a);

 while(i < a)
 {
    scanf("%d",&b);
    if (flag)
    {
      max = b;
      flag = 0;
    }
   if (max < b)
    {
       max = b;
       counter = 0;
    }
   if (max == b)
    {
         counter++;
    }
      i++;
 
 }
 
  printf("%d\n", counter);

    return 0;
}
//6 1 2 3 2 0 3




