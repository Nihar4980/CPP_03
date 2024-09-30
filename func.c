#include <stdio.h>
#include <math.h>

void pune()
{
    printf("Welcome Pune!\n");
    mumbai();
    return;
}
void mumbai()
{
    printf("Welcome Mumbai!\n");
    nagpur();
    return;
}
void nagpur()
{
    printf("Welcome Nagpur!\n");
    goa();
    return;
}
void goa()
{
    printf("Welcome Goa!\n");
    return;
}

int main()
{
    pune();

}