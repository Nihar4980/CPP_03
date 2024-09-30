#include <stdio.h>

int main()
{
int a = 1;

while (a<=20 ) {
  printf("%d\n", a);
  a++;
}

printf("**************************\n");
int d = 1;

while (d<=20) {
  if (d%2==0)
  {
    printf("%d\n", d);
  }
  d++;
}
printf("**************************\n");
int b =20;
while (b>=1) {
  printf("%d\n", b);
  b--;
}

printf("**************************\n");
int c =20;

while (c>=1) {
  if (c%2==0)
  {
    printf("%d\n", c);
  }
  c--;
}

}
