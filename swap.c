#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;

    // a = a+b;
    // b = a-b;
    // a = a-b;
    // printf("a : %d, b: %d", a, b);

    int temp = a;
    a = b;
    b = temp;
    printf("a : %d, b: %d", a, b);

    
}