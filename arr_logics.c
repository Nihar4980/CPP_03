#include <stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void print_arr(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void reverse_arr(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int start = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, size);
    printf("\n");
    reverse_arr(arr, size);
    print_arr(arr, size);
}