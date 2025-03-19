#include <stdio.h>
int main()
{
   int array[10] = {1,2,3,4,5,6,7,8,9,10};  
   printf("Size of array: %ld \n",sizeof(array));
   int length_array = sizeof(array)/sizeof(array[0]);
   printf("Length of array= %d \n", length_array);
   int a = array[0];
   printf("value %d \n", a);
}