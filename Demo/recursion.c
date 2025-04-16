#include <stdio.h>
int factor(int n)
{
    if (n==0 || n==1) return 1;
    int fact = 1;
    for (int i=1; i <=n; i++) fact *=  i;
    return fact;
}
int fact(int n) // Recussion
{
    if (n==0 || n==1) return 1; // base case
    return n * fact(n-1); // call and code
}
int increasing(int x, int n) // assume x= 1, n = 10 
{   if (x > n) return 0;
    printf("%d ", x);
    increasing(x+1, n);
    return 0;
}
int increase(int n) // assume n = 10
{   if (n < 1) return 0; // base case
    increase(n-1); //call
    printf("%d \n ", n); // code
    return 0;
} 
int main()
{
   int x=1, n = 10;
   printf("Without using Recursion : %d \n", factor(n));
   printf("With using Recursion : %d \n", fact(n));
   increasing(x, n);
   increase(n);
}




// int increas(int n)
// {
//     if (n>10) return 0;
//     printf("%d ", n);
//     increas(n+1);
//     return ;

// }

// int main()
// {
//     int n, n1, n2, n3, n4;
//     n = 4;
  
//    printf("Without using Recursion : %d \n", factor(n));
//    printf("With using Recursion : %d \n", fact(n));




//    printf("%d \n",factor(n));
//    printf("%d \n",factor(n1));
//    printf("%d \n",factor(n2));
//    printf("%d \n",factor(n3));
//    printf("%d \n",factor(n4));

// //    decreasing(n);
// //    printf("\n");

// //    printf("******************* \n");
   
// //    increasing(x, n);
// //    printf("\n");

// //    printf("******************* \n");

// //    increase(n);

// //    printf("\n");

// //    printf("******************* \n");

// //    printf("%d",factor(n));
   

// //    printf("\n******************* \n");

// //    printf("%d",fact(n));
// }

// int decreasing(int n)
// {   if (n < 1) return 0;
//     printf("%d ", n);
//     decreasing(n-1);
//     return 0;
// }
