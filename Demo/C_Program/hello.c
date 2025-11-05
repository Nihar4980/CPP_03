#include <stdio.h>

int main()
{
    unsigned short int age;
    age = 20;
    printf("My age is %hu \n", age);
    printf("Memory size of age is %ld \n",sizeof(age));

    return 0;
} 

 // gcc -Wall -save-temps hello.c -o hello 