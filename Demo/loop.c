#include <stdio.h>

int main()
{
  int arr[10] = {1, 5,2,3,6,9,8,7,4,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  int i,j, temp1;
  for(i = 0;i<n-1; i++){
    for(j = 0; j < n-i-1; j++){
      if (arr[j] > arr[j+1]){
        temp1 = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp1;
      }
    }
  }
  for(int i=0; i<=n-1; i++)
  {   
      printf("%d \n", arr[i]);
  }
}

//   int index = length_array-1;
//   do{
//     printf("%d \n", arr[index]);
//     index--;
//     }
//   while(index>=0);

//   printf("************************************** \n");

//   int b = 0;
//   while(b<length_array)
//   {
//     if (arr[b]%2 == 0) //even number
//     {
//       printf("%d \n", arr[b]);
//     }
//     b++;
//   }
//   printf("************************************** \n");
//   for(int i=0; i<=length_array-1; i++)
//     {   
//         arr[i] *= 10; // Update the value
//         printf("%d \n", arr[i]);
//     } 
//   printf("************************************** \n");
//   int start = 0;
//   int end = length_array-1;
//   while(start < end)
//   {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
//   }
//   for(int i=0; i<=length_array-1; i++)
//   {   
//       printf("%d \n", arr[i]);
//   }
// }