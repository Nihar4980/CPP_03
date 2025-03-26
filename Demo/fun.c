#include <stdio.h>

int print_arr(int a[], int size) // input: integer array and integer size of array
                              //  output: Print all element of array
{
    for(int i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4};
    int arr3[] = {1,2,3};
    int arr4[] = {1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size3 = sizeof(arr3)/sizeof(arr3[0]);
    int size4 = sizeof(arr4)/sizeof(arr4[0]);
    print_arr(arr, size); 
    print_arr(arr1, size1);
    print_arr(arr2, size2); 
    print_arr(arr3, size3);
    print_arr(arr4, size4); 
}


