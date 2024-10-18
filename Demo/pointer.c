#include <stdio.h>
#include <string.h>

int main()
{
    int a = 15;
    

    printf("%d \n",a);
    printf("%p\n",&a);
    int* b = &a;
    printf("%p\n",b);

    printf("%d", * b);


}


















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