#include <stdio.h>

int decreasing(int n)
{   if (n < 1) return 0;
    printf("%d ", n);
    decreasing(n-1);
    return 0;
}

int factor(int n)
{
    if (n==1) return 1;
    int fact = 1;
    for (int i=1; i <=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int fact(int n)
{
    if (n==1) return 1;
    return n * fact(n-1);
}

int increasing(int x, int n)
{   if (x > n) return 0;
    printf("%d ", x);
    increasing(x+1, n);
    return 0;
}

int increase(int n)
{   if (n < 1) return 0; // base case
    increase(n-1); //call
    printf("%d ", n); // code
    return 0;
}

// int increas(int n)
// {
//     if (n>10) return 0;
//     printf("%d ", n);
//     increas(n+1);
//     return ;

// }

int main()
{
   int x= 1, n = 5; 

   decreasing(n);
   printf("\n");

   printf("******************* \n");
   
   increasing(x, n);
   printf("\n");

   printf("******************* \n");

   increase(n);

   printf("\n");

   printf("******************* \n");

   printf("%d",factor(n));
   

   printf("\n******************* \n");

   printf("%d",fact(n));
}