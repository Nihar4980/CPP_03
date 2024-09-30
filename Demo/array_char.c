#include <stdio.h>
#include <string.h>

int main()
{
    char c[3] = {'a', 'b', 'c'};
    char d = 'a';
    printf("%c \n", d);
   
    printf("%c \n", c[2]);

    char sen[100]; 
    scanf("%[^\n]s", sen); 
    printf("Output : %s", sen); 

    
    for(int i=0; i<=2; i++) printf("%c \n", c[i]);

    for(int i=0; i<=20; i++) printf("%c \n", sen[i]);

    int length = strlen(sen);

    for(int i=0; i<length; i++) printf("%c \n", sen[i]);
   
    return 0;

}