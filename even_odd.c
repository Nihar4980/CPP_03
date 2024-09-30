#include <stdio.h>

int main()
{
    
    int num;

    printf("Enter Number: \n");

    scanf("%d", &num);

    printf("you have entered %d \n", num);

    if (num % 2 == 0){
        printf(" %d is an Even Number", num);
    }
    
    else{
        printf("%d is an Odd Number", num);
    }
}