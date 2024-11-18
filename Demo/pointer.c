#include <stdio.h>

int main()
{
    int  a = 15;
    printf("The value of a is %d \n",a);
    printf("%p \n", &a);
    int *b = &a;
    printf("%p \n", b);

    printf("%d \n", *b);

    int** c = &b;
    printf("%p \n", c);

    printf("%d\n", **c);

    // int ***d = &c;

    // printf("%d", ***d);




}






    // printf("%p\n",&a);
    // int* b = &a;
    // printf("%p\n",b);

    // printf("%d", * b);





















//     int a = 10;
//     a = 12;
//     printf("%p\n",&a);
//     int b = &a;
//     printf("%p\n",b);
    
//     int* c= &a;
//     printf("%d\n",*c);

//     int d = &b;
//     printf("%p\n",d);

//     int **e = d;
//     printf("%d\n",**e);

//     int ***f = &e;
//     printf("%d\n",***f);
// }