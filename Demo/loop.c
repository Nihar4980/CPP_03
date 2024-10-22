#include <stdio.h>
#include <string.h> 

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  

  int a = 0;
  int count = 0;
  do{
    printf("%d \n", arr[a]);
    a++;
    count++;
    }
  while(a<=9);

  printf("**************************************");

  int b = 0;
  
  while(b<=9){
    {
    printf("%d \n", arr[b]);
    b++;
    }
  }

  printf("**************************************");

  for(int i=0; i<=9; i++)
    {
        printf("%d \n", arr[i]);
    }  
}