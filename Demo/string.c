#include <stdio.h> 
#include <string.h> 
 
int main() { 
    // char a = '@';

    // printf("%c \n", a);
    // printf("%ld", sizeof(a));

    // printf("%c\n", '\0');


    // char arr[] = {'M','I','T', ' ', 'W', 'P','U','\0'};
    // long int size = 0;
    // for(int i =0; arr[i] != '\0'; i++){
    //     printf("%c",arr[i]);

    //     size += sizeof(arr[i]);
    // }
    // printf("\n%ld", size);

    char arr[] = "MIT WPU";

    // char* ptr = arr;
    // printf("%p\n", ptr);
    // printf("%p\n", &arr[3]);

    // int i = 0;
    // while(arr[i] != '\0')
    // {
    // printf("%c",arr[i]);

    // i++;
    }

    // char arr[] = "MIT WPU";

    // char* ptr = arr;

   
    // while(*ptr!='\0')
    // {
    //   printf("%c", * ptr);
    //   ptr++; 
    // }
    // char arr[] = "MIT WPU";

    int len = strlen(arr);
    // printf("%d \n", len);

    for(int i=0, j = len-1; i<=j; i++, j--)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // int i = 0;
    // while(arr[i] != '\0')
    // {
    // printf("%c",arr[i]);

    // i++;
    // }
    // char arr[] = "MIT WPU";
    // char * arr1 = arr;
    // arr[0] = 'S';

    // int i = 0;
    // while(arr[i] != '\0')
    // {
    // printf("%c",arr[i]);

    // i++;
    // }

    // while(*arr1!='\0')
    // {
    //   printf("%c", * arr1);
    //   arr1++; 
    // }







}
