#include <stdio.h>

int main()
{
    FILE * ptr = fopen("text.txt", "r"); // Open a file in reading mode

    char str[100];

    while (fgets(str, 100, ptr) != NULL)
    {
        printf("%s", str);
    }

    FILE * ptr1 = fopen("text1.txt", "w");

    char str1[] = "Good Morning\nWelcome to MITWPU\n I am good";
    fputs(str1, ptr1);
    fclose(ptr1);

    // FILE * ptr = fopen("text1.txt", "r");

    // char str[100];

    // while (fgets(str, 100, ptr) != NULL)
    // {
    //     printf("%s", str);
    // }
}