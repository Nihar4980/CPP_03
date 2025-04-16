#include <stdio.h>
int main()
{
    int a = 10;
    printf("a = %d \n", a);
    printf("a = %p \n", &a);
    int* x = &a;
    printf("a = %p \n", x);
    printf("a = %d \n", *x);
    int **y = &x;
    printf("a = %d", **y);
}


// printf("%p \n", &a);
//      int* x = &a;
//      printf("%p \n", x);
//      printf("%d \n", *x);
//      int** y = &x;
//      printf("%p \n", y);
//      printf("%d \n", **y);






    // int  a = 15;
    // printf("The value of a is %d \n",a);
    // printf("%p \n", &a);
    // int *b = &a;
    // printf("%p \n", b);

    // printf("%d \n", *b);

    // int** c = &b;
    // printf("%p \n", c);

    // printf("%d\n", **c);

    // int ***d = &c;

    // printf("%d", ***d);


    // int* x = &a;
    // int** y = &x;
    // printf("%p \n", &a); // print address of a using pointer
    // printf("%p \n", x); // print address of a using pointer
    // printf("%d \n", *x);// print value of a using pointer
    // printf("%p", *y);








    // printf("%p\n",&a);
    // int* b = &a;
    // printf("%p\n",b);

    // printf("%d", * b);















    // int swap(int* x, int* y)
    // {
    //     int temp = *x;
    //      *x = *y;
    //      *y = temp;
    // }
    // int main()
    // {
    //      int a = 10, b = 20;
    //      printf("a = %d, b = %d \n", a, b);
    //      swap(&a, &b);
    //      printf("a = %d, b = %d \n", a, b);
    // }





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