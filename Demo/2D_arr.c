#include <stdio.h>

int main()
{
    int arr[2][3] = {{1,2,3},{1,2,3}};
    int arr1[2][3];

    for(int i =0; i < 2; i++) //rows = 2
    {
        for(int j =0; j < 3; j++) //i = 0 :{1,2,3}
            {
                arr1[i][j] = arr[i][j] + arr[i][j];
                printf("row = %d, col = %d, value = %d \n", i, j, arr1[i][j]);
            }
    }


}