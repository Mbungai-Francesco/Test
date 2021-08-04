#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*int a,b,c,d,e;
  printf("enter ISBN : ");
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  printf("GSI prefix : %d\n", a);
  printf("Group identifier : %d\n", b);
  printf("publisher code : %3d\n", c);
  printf("item number : %5d\n", d);
  printf("Check digit : %d\n", e);*/
  int a, b, c;
  printf("enter phone number [(xxx) xxx-xxxx] : ");
  scanf("%d%d%d", &a, &b, &c);
  printf("number : %d.%d.%d\n", a, b, c);
}
