#include <stdio.h>

int main()
{
    int a = 5;

    // printf("Value of a is %d\n", a);
    // printf("Value of square a is %d\n", a*a);

    char x = 'x';
    printf("Value of x is %c\n", x);

    int arr[3] = {1, 2,3};

    

    int i = 0;
    do
    {
        printf("%d \n",arr[i]);
        i++;
    } while (i<=2);

    int j = 0;
    while (j<=2)
    {
        printf("%d \n",arr[j]);
        j++;
    }
    int arr1[3];
    for (int k = 0; k <= 2; k++)
    {
        arr1[k] = arr[k]+arr[k];
        printf("%d \n",arr1[k]);
    }
    
    
    
}