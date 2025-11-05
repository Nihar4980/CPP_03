#include <stdio.h>

int main(){

    char name = 'a'; //Variable name
    printf("%d \n", name);
    printf("%ld \n", sizeof(name));

    char arr[] = {'A', 'E', 'C', 'D', 'A','E','F'};

    int length_array = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<= length_array-1; i++)
    {
        printf("%c \n", arr[i]);
    }

}