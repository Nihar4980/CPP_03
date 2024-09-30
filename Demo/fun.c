#include <stdio.h>



int main()
{
   int a=50;
   int b=10;
   int c = add(a, b);
   printf("Addition: %d\n", c);
}

void add(int x,int y)
{
    return x+y;
}