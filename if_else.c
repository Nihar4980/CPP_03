#include <stdio.h>

int main()
{
    
    int age;
    printf("Enter your age : \n");
    scanf("%d",&age);
    printf("Your age is : %d\n", age);
    
    if (age >= 0)
    {
        if (age >= 18)
            {
                printf("You are eligible to vote");
            }
        else
            {
                printf("You are not eligible to vote");
            }
    }
    else
    {
        printf("Enter a valid age!");
    }
    
}