#include <stdio.h>
int main()
{
   int roll[10] = {1,2,3,4,5,6,7,8,9,10};

   int length_arr = sizeof(roll)/sizeof(roll[0]);

   for(int i=0; i<=length_arr-1; i++)
   {
      roll[i] *= 10;
   }
   for(int i=0; i<=length_arr-1; i++)
   {
      printf("%d element %d \n", i, roll[i]);
   }

   // printf("Size of array: %ld \n",sizeof(roll));
   // printf("1st element: %d \n",roll[i]);
   // printf("length array: %ld \n",sizeof(roll)/sizeof(roll[0]));

}




//    int array[10] = {1,2,3,4,5,6,7,8,9,10};  
//    printf("Size of array: %ld \n",sizeof(array));
//    int length_array = sizeof(array)/sizeof(array[0]);
//    printf("Length of array= %d \n", length_array);
//    int a = array[0];
//    printf("value %d \n", a);
// }