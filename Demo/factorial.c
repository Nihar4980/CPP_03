#include <stdio.h>

// unsigned long long factorial(int n) {
//     if (n == 0) {
//         return 1; // Base case: 0! = 1
//     }
//     return n * factorial(n - 1); // Recursive case
// }

unsigned long long factorial(int *n){
    
    unsigned long long result = 1;

    // Using a for loop to calculate factorial
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

// unsigned long long factorial(int n){
//     if (n == 0) {
//         return 1;
//     unsigned long long result = 1;
//     int i=1
//     while( i<=n)
//     {
//         result *=i;
//     }
//     return result;
// }

// unsigned long long factorial(int n){
//     if (n == 0) {
//         return 1;
//     }
//     unsigned long long result = 1;
//     int i=0
//     do
//     {
//         result *=i;
//         i++;
//     }
//     while (i <= n)

    // return result;
    
    
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
