#include <stdio.h>

int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
float div(int x,int y)
{
    if (y !=0)
    {
    return (float)x/y;
    }
    else
    {
        printf("Division is not possible !");
    }
}

int swap(int * x, int * y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
   int a=10;
   int b=20;

   swap(&a,&b);

   printf("The vale of a = %d and value of b = %d \n", a,b);


   
   
   int c = add(a, b);
   printf("Addition: %d\n", c);

   int d = sub(a, b);
   printf("Substraction: %d\n", d);

   int e = mul(a, b);
   printf("Multiplication: %d\n", e);

   float f = div(a, b);
   {
   printf("Division: %.7f", f);
    }
}

