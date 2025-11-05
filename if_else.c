#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your age : \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d", a, b, c); 

    if ((a > b) && (a > c))
    {
        printf("a is the greater number \n");
        if (b<c)
        {
            printf("b is the smallest number \n");
        }
        else 
        {
            printf("c is the smallest number \n");
        }
    }
    else if ((b > a) && (b > c))
    {
        printf("b is the greater number \n");
        if (a<c)
        {
            printf("a is the smallest number \n");
        }
        else 
        {
            printf("c is the smallest number \n");
        }
    }
    else
    {
        printf("c is the greater number \n");
        if (a<b)
        {
            printf("a is the smallest number \n");
        }
        else 
        {
            printf("b is the smallest number \n");
        }
    }
}