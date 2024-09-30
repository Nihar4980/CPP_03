#include <stdio.h>

unsigned long long factorial(int n) {

    if (n<0)
    {
        return 1;
    }
    unsigned long long result = 1;

    // Using a for loop to calculate factorial
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", n, factorial(n));
    }
    
    return 0;
}
