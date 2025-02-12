#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("a bitwise and b = %d\n", a & b);
    printf("a bitwise or b = %d\n", a | b);
    printf("a exlusive b = %d\n", a ^ b);


    printf("a and b = %d\n", a && b);
    printf("a or b = %d\n", a || b);

    printf("a one's compelment b = %d\n", ~b);
    printf("a binary left shift b = %d\n", a << b);
    printf("a binary right shift b = %d\n", a >> b);

    int c = 10;
    c += 10;
    printf("c = %d\n",c);

    int d = 10;
    d -= 10;
    printf("d = %d\n",d);

    int e = 10;
    e *= 10;
    printf("e = %d\n",e);

    int f = 10;
    f /= 10;
    printf("f = %d\n",f);

    printf("a lessthan b = %d\n", a < b);
    printf("a greatorthan b = %d\n", a > b);

}