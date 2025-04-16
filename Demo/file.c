#include <stdio.h>

int main()
{
    FILE * ptr = fopen("text.txt", "w");
    char str[] = "Good Morning\nWelcome to MITWPU\n I am good";
    fputs(str, ptr);
    fclose(ptr);

    FILE * ptr1 = fopen("text.txt", "r");
    char str1[100];
    while (fgets(str1, 100, ptr1) != NULL)
    {
        printf("%s", str1);
    }
}