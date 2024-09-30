#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[10];
    for(int i=0; i<=9; i++) 
    {
            arr1[i] = i+1;
    }

    //for(int i=0; i<=9; i++) arr1[i] = i+1;

    for(int i=0; i<=9; i++) arr[i] += 10;

    for(int i=0; i<=9; i++) printf("Element are: %d\n", arr[i]);

    int count = 0;
    for(int i=0; i<=9; i++) count += 1;

    printf("Total number of element: %d\n", count);
    int sum = 0;
    for(int i=0; i<=9; i++) sum += arr[i];

    printf("Sum of all element: %d\n", sum);

    int mul = 1;
    for(int i=0; i<=9; i++) mul *= arr[i];

    printf("Multiplication of all element: %d\n", mul);


}