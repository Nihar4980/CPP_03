#include <stdio.h>

int main()
{
    // FILE * ptr = fopen("text.txt", "r");

    // char str[100];

    // while (fgets(str, 100, ptr) != NULL)
    // {
    //     printf("%s", str);
    // }

    FILE * ptr = fopen("text1.txt", "w");

    char str[] = "Good Morning\nWelcome to MITWPU\n I am good";
    fputs(str, ptr);
    fclose(ptr);

    // FILE * ptr = fopen("text1.txt", "r");

    // char str[100];

    // while (fgets(str, 100, ptr) != NULL)
    // {
    //     printf("%s", str);
    // }
}