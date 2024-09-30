#include <stdio.h>

int main()
{
    float a[3] = {1.2, 2.3, 4.5};
    
    for(int i=0; i<=2; i++)
    {
        printf("%f \n", a[i]);
    }

    int arr[] ={1,2,3,4,5,6,7,8};
    for(int i=0; i<=7; i++) printf("%d \n", arr[i]);

    int arr1[10];
    for(int i=0; i<=9; i++) scanf("%d \n", &arr1[i]);

    for(int i=0; i<=9; i++) printf(" Element: %d \n", arr1[i]);
}
