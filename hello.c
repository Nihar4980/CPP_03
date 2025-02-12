#include <stdio.h>

int main()
{
    int a = 10, b =5;
    
    // Bitwise
   
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);
    a++, b--; // Uniary operator
    printf("The value of a = %d and b = %d \n", a, b);

    // FLOAT
    float f = 10.5, g = 9.5;
    printf("The value of f = %.2f, g = %.2f \n", f,g);

    // Arithmetic operator
    printf("The value of summation = %d, %f \n", a+b, f+g);
    printf("The value of substraction = %d, %f \n", a-b, f-g);
    printf("The value of multiplication = %d, %f \n", a*b, f*g);
    printf("The value of division = %d, %f \n", a/b, f/g);
    printf("The value of reminder = %d \n", a%b);

    // Char
    char c = 'B';
    printf("ASCI Value %d \n", c);

    // Logical operator
    printf("AND  %d\n  ", a && b);
    printf("OR %d\n", a || b);
    printf("Logical NOT %d\n", !a);

    // Assignment
    a += 10;
    printf("The value of a : %d \n", a);
    a -= 10;
    printf("The value of a : %d \n", a);
    a /= 10;
    printf("The value of a : %d \n", a);
    a %= 10;
    printf("The value of a : %d \n", a);

    printf("The value of b : %d", -b);

    
}