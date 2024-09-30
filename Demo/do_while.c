#include <stdio.h>

int main()
{
   int i = 20;

   do  // Execute once atlist upto condion satisfy
   {
      if (i%2==0)
      {
      printf("Value : %d \n", i);
      }
      i--;
   }
   while (i>=1);
}