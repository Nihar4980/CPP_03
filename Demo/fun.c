#include <stdio.h>

int print_arr(int a[], int size) // input: integer array and integer size of array
                                //  output: Print all element of array
{
    for(int i=0; i < size; i++){
        printf("%d ", a[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    print_arr(arr, size);  
}


